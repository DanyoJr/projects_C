//Sua tarefa é escrever uma função que retorna a soma de uma sequência de números inteiros.
//A sequência é definida por 3 valores não negativos: begin , end , step .
//Se begin value for maior que end , sua função deve retornar 0 . 
//Se end não for o resultado de um número inteiro de passos, então não o adicione à soma. 

//exercicio do codewars :
//https://www.codewars.com/kata/586f6741c66d18c22800010a/train/cpp


//usar de base 
//start 2 
// end 6
// step 2
//o certo é retornar 2 4 6 e soma 12

//ou
//start 1 
// end 5
// step 1
//o certo é retornar 1 2 3 4 5 e soma 15


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //definindo as variaveis utilizadas
    int start = 0;
    int end = 0;
    int step;
    int result = 0;

    //definindo um input para informar qual o valor de entrado das variaveis start, end e step
   printf("defina o start: ");
   scanf("%d", &start);
   
   printf("defina o end: ");
   scanf("%d", &end);

   printf("defina o step: ");
   scanf("%d", &step);

    //caso start for maior que o end retone zero para encerrar o programa
    if(start > end){

    return 0;
    }   

    //fazendo o loop para para ir do start ao end utilizando o step como base para de quantos em quanto andar
    //e aramazenar a soma dos resultados em result
    for(int i = start; i <= end; i += step){
        printf("%d ", i);

        result += i;
    }
    
    //printando o valor de result no caso mostrando qual valor que foi somado
    printf("\n %d", result);
    printf("\n");

    return 0;
};