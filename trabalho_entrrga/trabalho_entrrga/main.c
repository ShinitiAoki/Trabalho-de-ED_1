#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "svgfile.h"

////////////////////////////////////////////////////////

int main(int argc, char *argv[]){
    char *ArqConsulta =0;
    char *NomeArqGeo =0;
    char *BED =0;
    char *BSD =0;
    int TipoLista =0;
    int ib =0;
    int cb =0;
    int fb =0;
    int count =1;
    while(count<argc){       // Salvando diretorios dos arq
        if(strcmp("-e", argv[count])==0){
            count++;
            if(argv[count]==NULL){
                printf("\nFALHA\n");
            }
            BED = (char *)malloc((strlen(argv[count])+3)*sizeof(char));
            strcpy(BED,argv[count]);
        }
        if(strcmp("-f", argv[count])==0){
            count++;
            if(argv[count]==NULL){
                printf("\nFALHA\n");
            }
            NomeArqGeo = (char *)malloc((strlen(argv[count])+3)*sizeof(char));
            strcpy(NomeArqGeo,argv[count]);
        }
        if(strcmp("-o", argv[count])==0){
            count++;
            if(argv[count]==NULL){
                printf("\nFALHA\n");
            }
            BSD = (char *)malloc((strlen(argv[count])+3)*sizeof(char));
            strcpy(BSD,argv[count]);
        }
        if(strcmp("-q", argv[count])==0){
            count++;
            if(argv[count]==NULL){
                printf("\nFALHA\n");
            }
            ArqConsulta = (char *)malloc((strlen(argv[count])+3)*sizeof(char));
            strcpy(ArqConsulta,argv[count]);
        }
        if(strcmp("-ib", argv[count])==0){
                ib =1;
        }
        if(strcmp("-cb", argv[count])==0){
                cb =1;
        }
        if(strcmp("-fb", argv[count])==0){
                fb =1;
        }
        if(strcmp("-ldd", argv[count])==0){
            TipoLista =0;
        }
        if(strcmp("-lse", argv[count])==0){
            TipoLista =1;
        }

    count++;
    }
    if(BSD == NULL || NomeArqGeo == NULL){ //BSD e NomeArq
        printf("FALHA NA EXECUÇÃO");
    }
    if(TipoLista == 0){
        //lista duplamente encadeada
    }
    else{
            //lista simples encadeada
    }


    if(ArqConsulta == NULL){
        //ler .qry
    }

    free (BED);
    free (NomeArqGeo);
    return 0;
}
