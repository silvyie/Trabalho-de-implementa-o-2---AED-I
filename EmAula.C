#include <stdio.h>
#include <stdlib.h>

typedef struct NoLista {
    int valor;
    struct NoLista *proximo;
} NoLista;

NoLista* reverter(NoLista* cabeca) {
    NoLista* prev = NULL;
    NoLista* atual = cabeca;
    NoLista* prox = NULL;

    while (atual != NULL) {
        prox = atual->proximo;
        atual->proximo = prev;
        prev = atual;
        atual = prox;
    }
    return prev;
}

void reorderList(NoLista* cabeca) {
    if (!cabeca || !cabeca->proximo){
        return;
    }

    NoLista* d = cabeca;
    NoLista* r = cabeca;

    while (r->proximo && r->proximo->proximo) {
        d = d->proximo;
        r = r->proximo->proximo;
    }

}
