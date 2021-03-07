#ifndef LISTADUPLA_H_INCLUDED
#define LISTADUPLA_H_INCLUDED

typedef void *ListaDupla;
typedef void *INFO;

ListaDupla Criar_Listao();
INFO BuscarListDup(ListaDupla Listao, char id[]);
void InserirListaDup(ListaDupla Listao, INFO Dados, char id[]);
int RemoveNoListao(ListaDupla Listao, char id[]);
void RemoveListao(ListaDupla Listao);

#endif // LISTADUPLA_H_INCLUDED
