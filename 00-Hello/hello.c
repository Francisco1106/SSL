#include <stdio.h>

int main(){

    printf("Hello Word");

    FILE *archivo; 
    archivo = fopen("./output.txt","a");

    fprintf(archivo,"hola mundo archivado");
    return 0; 
}