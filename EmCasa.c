#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

/*================================================================
  Função reverter: Função de inversão da segunda metade da lista
  ================================================================*/
struct ListNode* reverter(struct ListNode* segundaMetade) {
    struct ListNode* anterior = NULL;
    struct ListNode* atual = segundaMetade;
    struct ListNode* proximo = NULL;

    while (atual != NULL) {
        proximo = atual->next;  
        atual->next = anterior; 
        anterior = atual;       
        atual = proximo;        
    }

    return anterior;
}

/*================================================================
    Função reorderList: Reordena a lista conforme especificado.
    [1,2,3,4,5] vira [1,5,2,4,3]
  ================================================================*/

void reorderList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return;

    struct ListNode* d = head;
    struct ListNode* r = head;

    while (r->next && r->next->next) {
        d = d->next;
        r = r->next->next;
    }

    struct ListNode* segundaMetade = d->next;
    d->next = NULL;

    segundaMetade = reverter(segundaMetade);

    struct ListNode* p1 = head;
    struct ListNode* p2 = segundaMetade;

    while (p2 != NULL) {
        struct ListNode* temp1 = p1->next;
        struct ListNode* temp2 = p2->next;

        p1->next = p2;
        p2->next = temp1;

        p1 = temp1;
        p2 = temp2;
    }
}

/*================================================================
    Funções auxiliares para criar e imprimir a lista
  ================================================================*/

struct ListNode* criarNo(int val) {
    struct ListNode* novo = (struct ListNode*)malloc(sizeof(struct ListNode));
    novo->val = val;
    novo->next = NULL;
    return novo;
}

void imprimirLista(struct ListNode* head) {
    struct ListNode* atual = head;
    while (atual != NULL) {
        printf("%d ", atual->val);
        atual = atual->next;
    }
    printf("\n");
}

/*================================================================
    Função main: Testa a função reorderList
  ================================================================*/

int main() {

    struct ListNode* n1 = criarNo(1);
    struct ListNode* n2 = criarNo(2);
    struct ListNode* n3 = criarNo(3);
    struct ListNode* n4 = criarNo(4);
    struct ListNode* n5 = criarNo(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    printf("Lista original:\n");
    imprimirLista(n1);

    reorderList(n1);

    printf("Lista reordenada:\n");
    imprimirLista(n1);

    return 0;
}
