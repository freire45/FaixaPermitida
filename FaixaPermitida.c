#include <stdio.h>
#include <stdlib.h>

int numero = 0;

void main(){
    printf("Programa que verifica faixa permitida: \n");
    printf("Escreva um valor: ");
    scanf("%d", &numero);

    if(numero >= 1 && numero <= 9)
        printf("\n\nO valor esta na faixa permitida\n");
    else
        printf("\n\nO valor nao esta na faixa permitida\n");
}
