#ifndef READGEO_H_INCLUDED
#define READGEO_H_INCLUDED

#include "ListaSimp.h"
#include "ListaDupla.h"

//"lista" mostra em qual será salva as informações
nozin GetDataGeo_simples(nozin* lista, char* entrydir);
Nodup GetDataGeo_dupla(Nodup* lista, char* entrydir);

#endif // READGEO_H_INCLUDED
