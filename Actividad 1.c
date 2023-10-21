#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *archivo;
char caracter;
archivo = fopen("prueba.txt","r");
if(archivo == NULL){
printf("Error al abrir el archivo");
}else{
printf("El contenido del archivo es: \n");
}
}

/*
r lectura
w escritura
a abrir un archivo y empieza a escribir donde se quedó, si no existe lo crea
r+ lectura y escritura, el archivo debe existir
w+ crea un archivo de lectura y escritura se crea si no existe, si existe, lo sobreescribe
w+ crea un archivo de lectura escritura se crea si no existe o lo sobreescribe 
*/