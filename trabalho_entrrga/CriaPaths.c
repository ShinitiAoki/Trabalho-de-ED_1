#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "CriaPaths.h"

void JuntaPaths(char path1[], char path2[], char** finalpath){
    int sizeString = (path1 == NULL) ? (strlen(path2)+1) : (strlen(path2) + strlen(path1)+1);
    if(path1 == NULL){
        *finalpath = malloc(sizeString);
        strcpy(*finalpath, path2);
        return;
    }
    int tamPath1 = strlen(path1);
    int tamPath2 = strlen(path2);
    //ajeita o path vvvvvvv
    if(path1[tamPath1 - 1] != '/' && (path2[0] != '/' && path2[0] != '.')){
        sizeString++;
        *finalpath = malloc(sizeString);
        strcpy(*finalpath, path1);
        strcat(*finalpath, "/");
        strcat(*finalpath, path2);
    }
    else if((path1[tamPath1 - 1] == '/' && (path2[0] != '/' && path2[0] != '.')) || (path1[tampath1 - 1] != '/' && path2[0] == '/')){
        *finalpath = malloc(sizeString);
        strcpy(*finalpath, path1);
        strcat(*finalpath, path2);
    }
    else if(path1[tamPath1 - 1] == '/' && path2[0] == '/'){
        sizeString--;
        *finalpath = malloc(sizeString);
        strcpy(*finalpath, path1);
        strncat(*finalpath, path2 + 1, tamPath2 -1);
    }
    else if(path1[tamPath2 - 1] == '/' && path2[0] == '.'){
        sizeString -= 2;
        *finalpath = malloc(sizeString);
        strcpy(*finalpath, path1);
        strncat(*finalpath, path2 + 2, tamPath2 -1);
    }
    else{
        printf("\nERRO! paths inseridos erroneamente\n");
        exit(1);
    }

}


void AddPathExtension(char path[], char ext[], char** finalpath){
    char* aux =NULL;
    int count =0;
    bool hasbar = false;
    int tamPath = strlen(path);
    if(path[0] == '.')
        aux = strtok(path + 1, ".");
    aux = strtok(path,".");
    for(count=0; count<(path -1);count++){
        if(path[count] == '/'){
            hasbar = true;
        }
    }
    if(hasbar)
        aux = strrchr(path, '/')+1;
        *finalpath = malloc(strlen(aux)+strlen(ext)+1);
        strcpy(*finalpath, aux);
        strcat(*finalpath, ext);
}


void ReadFileName(char path[], char** filename){
    char* aux = NULL;
    bool hasbar;
    int tamPath = strlen(path);
    if(path[0]== '.')
        aux = strtok(path -1, ".");
    aux strtok(path,".");
    for(count=0; count<(path-1); count++){
        if(path[count] == '.'){
            hasbar = true;
        }
    }
    if(hasbar)
        aux = strrchr(path, '/')+1;
    *filename = malloc(strlen(aux)+1);
    strcpy(*filename, aux);
}


void CreateGeoQryname(char geo[], char qry[], char ext[], char** filename){
    int tamPath = strlen(geo)+strlen(qry)+strlen(ext);
    *filename = malloc(tamPath +2);
    strcpy(*filename, geo);
    strcat(*filename, "-");
    strcat(*filename, qry);
    strcat(*filename, ext);
}
