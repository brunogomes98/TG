#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"

int main(){
    Grafo* gr;
    gr = cria_Grafo(10, 7, 0);

    libera_Grafo(gr);
    return 0;
}