#include "ListaDupla.h"
#include <stdlib.h>
#include <stdio.h.>
#include <string.h>

typedef struct Nodup //struct Nó lista dupla
    INFO info;
    struct Nodup *ProxNo;
    struct Nodup *PrevNo;
    char id[20];
}Nodup;
typedef struct Listao{
    int tamanho;
    Nodup* inicioDD;

}Cabeça_Lista;

void ListaDupla* Criar_Listao(){
    ListaDupla* Lista = (Lista *) malloc(sizeof(Lista));
    if(Lista != NULL)
        *Lista = NULL;
    return Lista;
}
void InserirListaDup(Cabeça_Lista Listao, INFO Dados, char id[]){
    Nodup* inicio = Listao.inicioDD;
    Nodup* Aux = inicio;
    Nodup* inserir = (Nodup*)malloc(sizeof(Nodup));
    inserir.INFO = dados;
    if(inicio == NULL){
        inicio = inserir;
        inserir->ProxNo = NULL;
        inserir->PrevNo = NULL;
    }
    else{
        while(Aux->ProxNo != NULL){
            Aux = Aux->ProxNo;
        }
        Aux->ProxNo = inserir;
        inserir->ProxNo = NULL;
        inserir->PrevNo = Aux;
    }
}
int RemoveNoListao(ListaDupla *lista, char id[]){
    Nodup *ptr = *lista;
    while(ptr != NULL && ptr->info == id){
        ptr = ptr->prox;
        }
    if(ptr == NULL) //nao encontrou o ID
        return 0;
    if(ptr->PrevNo == NULL) //primeiro elemento
        lista = ptr->ProxNo;
    else    //elemento intermediario
        ptr->PrevNo->ProxNo = ptr->ProxNo;//remove meio
    if(ptr->ProxNo != NULL)
        ptr->ProxNo->PrevNo = ptr->PrevNo;//remove final
    free(ptr);
    return 1;

}



void RemoveListao(){
    if(Lista != NULL){
        Nodup* Aux;
        while((*Lista)!= NULL){
            Aux = *Lista;
            *lista = (*Lista)->ProxN0;
            free(NoDup);

        }
        free(Lista);
    }
}
