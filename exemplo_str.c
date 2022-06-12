#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char leg[100];
    char esquerda[100] = {"esquerda"}, direita[100] = {"direita"}, as_duas[100] = {"as duas"}, nenhuma[100] = {"nenhuma"};


    while(scanf(" %[^\n]",leg) != EOF){
        if (strcmp(leg, esquerda) == 0){
            printf("ingles\n");
        }
        else if  (strcmp(leg, direita) == 0){
            printf("frances\n");
        }
        else if  (strcmp(leg, as_duas) == 0){
            printf("caiu\n");
        }
        else if (strcmp(leg, nenhuma) == 0){
            printf("portugues\n");
        }
    }
    return 0;
}