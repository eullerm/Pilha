#include "pilha.h"

#include <stdio.h>

void push(TPilha *pilha, int elem) {
    TLista *novo = (TLista*) malloc(sizeof(TLista));
    novo->info = elem;
    novo->prox = pilha->topo;
    pilha->topo = novo;
}

int pop(TPilha *pilha) {
    TLista *tmp = pilha->topo;
    int n=pilha->topo->info;
    pilha->topo=pilha->topo->prox;
    tmp->prox=NULL;
    free(tmp);
    return n;
}

int peek(TPilha *pilha) {
    return pilha->topo->info;
}