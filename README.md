# Trabalho de implementação 2 - AED I + Aviso
Aviso: Durante o vídeo tem um momento que uma das linhas do código no vscode aparece em amarelo, mas não é erro, o motivo é esse:

    struct ListNode* n1 = criarNo(1);
    struct ListNode* n2 = criarNo(2);
    struct ListNode* n3 = criarNo(3);
    struct ListNode* n4 = criarNo(4);
    struct ListNode* n5 = criarNo(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
Em um dos meus testes que fiz eu esqueci de apagar as linhas n5->next = n6; e n6->next = n7; foi por isso que estava amarelo, não era um erro.
    
Nome: Silvana Dias

Turma: T2

Complexidade de tempo: O(n), porque cada etapa percorre a lista apenas uma vez. 
Primeiro é percorrido a lista com o ponteiro rápido e lento para encontrar o meio; 
depois é percorrido metade da lista para inverter; e por fim é percorrido outra metade para intercalar. 
Somando essas partes, ainda temos uma quantidade linear de trabalho, por isso o tempo é proporcional ao tamanho da lista.

Complexidade de espaço: O(1), porque o algoritmo não cria nenhuma estrutura extra que dependa do tamanho da lista.

Testes:

[1,2,3,4,5] -> [1,5,2,4,3]
[1,2,3,4] -> [1,4,2,3]
[1,2,3,4,5,6,7] -> [1,7,2,6,3,5,4]
