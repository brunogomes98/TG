// Propriedades dos Grafos

#include <stdio.h>
#include <stdlib.h>

int main()
{
    "Direção das Arestas"
    "Grafo direcionado" ou "Digrafo"
    - Existe uma orientação quanto ao sentido da aresta.
    - Se uma aresta liga "A" e "B", podemos ir de "A" para "B", mas não o contrário

    "Grafo não direcionado"
    -Não existe nenhuma orientação quanto ao sentido da aresta.
    Podemos ir de "A" para "B" ou de "B" para "A"

    "Grau de vértice"
    - É o número de arestas que chegam ou partem dele
    - No caso de digrafos, temos:

        -"grau de entrada": arestas que chegam ao vértice
        -"grau de saída": arestas que partem do vértice
    
    "Laço"
    - Quando sai dela e volta nela mesma

    "Ciclo"
    - É um caminho que termina no mesmo vértice de inicio
    - Um laço é um ciclo de comprimento 1

    "Grafo acíclico"
    - Não contem "ciclos simples" (onde cada vértice aparece apenas uma vez cada).

    "Arestas Múltiplas"
    - Também chamado de "Multigrafo"
    - 

    return 0;
}
