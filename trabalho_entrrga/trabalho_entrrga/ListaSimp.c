#include "ListaSimp.h"
#include <stdlib.h>
#include <stdio.h.>
#include <string.h>


typedef struct No{ //caracteriza o nó
    INFO info;
    struct No *ProxNo;
    char id[20];
    } nozin;

typedef struct Listinha{//define o primeiro pedaço da lista
    int tamanho;
    nozin *primeira;
    }Cabeça_Listinha;

ListaSimp CriarListinha(){//atribui à lista seu começo
    Cabeça_Listinha* lista = (Cabeça_Listinha*)malloc(sizeof(Cabeça_Listinha));
    if(lista == NULL){
            printf("erro ao criar lista simples");
    }
    lista->primeira=NULL;
    lista->tamanho=0;
    return lista;
    }

void InserirListaSimp(ListaSimp Listinha, INFO dadinho, char id[]){
    Cabeça_Listinha *lista= (Cabeça_Listinha *)Listinha;
    nozin *Aux;
    nozin inserir= (nozin *)malloc(sizeof(nozin));
    inserir->info= dadinho;
    strcpy(inserir->id,id);
    inserir->ProxNo = NULL;
    if(lista->primeira == NULL){
        lista->primeira = inserir;
    }

    else{
        Aux = lista->primeira;
        while(Aux->ProxNo != NULL)
            Aux = Aux->ProxNo;
        Aux->ProxNo = inserir;
    }

    lista tamanho++;
}
int RemoveNoListinha(ListaSimp lista, char id[]){
    nozin *ptr;
    nozin *antes;
    if(lista == NULL)
        return 0;
    else {
        ptr = lista;
        anterior = lista;
        while(ptr != NULL){ //vasculha
            if(ptr->INFO == id){ //procura
                if(ptr == lista){ //se está no inicio
                    lista = lista->ProxNo;
                    free(ptr);
                    return 1;
                }
                else               //se está no meio
                {
                    antes->ProxNo = ptr->ProxNo;
                    free(ptr);        // removido
                    return 1;
                }
            }
            else                      //continua procurando
            {
             antes = ptr;
             ptr = ptr->ProxNo;
            }
        }
    }
    }

