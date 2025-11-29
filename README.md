# Trabalho de implementação 2 - AED I
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
