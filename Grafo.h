#ifndef GRAFO_H
#define GRAFO_H

typedef struct grafo Grafo;

Grafo* cria_Grafo(int nro_vertices, int grau_max, int eh_ponderado);

void libera_Grafo(Grafo* gr);

#endif /* GRAFO_H */