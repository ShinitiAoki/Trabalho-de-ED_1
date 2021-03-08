#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ReadGeo.h"
#include "ListaSimp.h"
#include "ListaDupla.h"

nozin GetDataGeo_simples(nozin* lista, char* entrydir){
    int Maxnum =1000;
    char command[3];
    int count =0;
    int id
    int buffersize =0;
    float x,y, w,h, r;
    char cb[20], cp[20], buffer;
    char* txt =NULL;
    FILE* arqGeo = fopen(entrydir, "r");
    if(arqGeo == NULL){
        printf("\n Nao foi pssivel abrir\n");
        exit(1);
    }
    while(count <= Maxnum){
        fscanf(arqGeo, "%s", command);
        if(feof(arqGeo)){
            break;
        }
        else if(strcmp("nx", command)==0){
            fscanf(arqGeo, "%d", &Maxnum);
        }
        else if(strcmp("r", command) ==0){
            fscanf(arqGeo, "%d %f %f %f %f", &id, &w, &h, &x, &y);
            lista = InserirListaSimp(lista, INFO, id); ////////////////////////ARRUMAR
        }
        else if(strcmp("cc", command)==0){
            fscanf(arqGeo, "%s", cb);
        }
        else if(strcmp("cp", command)==0){
            fscanf(arqGeo, "%s", cp);
        }
    }

}


Nodup GetDataGeo_dupla(Nodup* lista, char* entrydir);
