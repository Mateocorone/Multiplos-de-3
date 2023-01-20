#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo2=NULL;
    int a;

    archivo=fopen("vector.txt","r");
    archivo2=fopen("vector2.txt","w");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    while(!feof(archivo)){
        fscanf(archivo, "%d" , &a);
        if (a%3==0){
              fprintf(archivo2,"modulo de 3\n",a);
        }else{
            fprintf(archivo2,"%d\n",a);
        }

    }


     fclose(archivo);
     fclose(archivo2);
     return 0;
}