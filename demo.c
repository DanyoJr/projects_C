// Escreva um programa em C que leia um número inteiro do usuário e imprima a soma de todos os números 
//inteiros de 1 até o número informado.



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int sum = 0;
    int num;

    printf("Informe um número inteiro: \n");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++){
    
        sum = sum + i;

    };

    printf("%d", sum);


    return 0;
};