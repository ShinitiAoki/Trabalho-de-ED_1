#ifndef LISTASIMP_H_INCLUDED
#define LISTASIMP_H_INCLUDED

typedef void *ListaSimp;
typedef void *INFO;

ListaSimp CriarListinha();
INFO BuscarListSimp(ListaSimp Listinha, char id[]);
void InserirListaSimp(ListaSimp Listinha, INFO dadinho, char id[]);
int RemoveNoListinha(ListaSimp Listinha, char id[]);
void RemoveListinha(ListaSimp Listinha);

#endif // LISTASIMP_H_INCLUDED
