#ifndef CRIAPATHS_H_INCLUDED
#define CRIAPATHS_H_INCLUDED

void JuntaPaths(char path1[], char path2[], char** finalpath);
void AddPathExtension(char path1[], char path2[], char** finalpath);
void ReadFileName(char path1[], char** filename);
void CreateGeoQryname(char geo[], char qry[], char ext[], char** result);

#endif // CRIAPATHS_H_INCLUDED
