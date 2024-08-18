//Escreva um programa que leia um número inteiro e imprima todos os seus divisores.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
int num;
char divisores[100]; // string para armazenar os divisores
divisores[0] = '\0'; // inicializa a string com um caractere nulo

printf("defina um número: \n");
scanf("%d", &num);

for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
        // i é divisor de num, adiciona-o à string de divisores
        sprintf(divisores, "%s%d, ", divisores, i);
    }
}

// imprime a string de divisores
printf("Os divisores de %d são: %s\n", num, divisores);

    return 0;
};

