#ifndef PILHA_PILHA_H
#define PILHA_PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct pilha{
    TLista *topo;
} TPilha;

void push(TPilha *pilha, int elem);

int pop(TPilha *pilha);

int peek(TPilha *pilha);

#endif