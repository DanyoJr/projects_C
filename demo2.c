//Sua tarefa é escrever uma função que retorna a soma de uma sequência de números inteiros.
//A sequência é definida por 3 valores não negativos: begin , end , step .
//Se begin value for maior que end , sua função deve retornar 0 . 
//Se end não for o resultado de um número inteiro de passos, então não o adicione à soma. 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// int sequenceSum(int start, int end, int step)
// {
//    start = 2;
//    end = 6;
//    step = 2;
//    int result;

//    printf("defina o start: ");
//    scanf("%d", &start);
   
//    printf("defina o end: ");
//    scanf("%d", &end);

//    printf("defina o step: ");
//    scanf("%d", &step);
  
//   for(int i = step; start <= end; i++){
//     result = start + step;
    
//   }

//     printf("aaaaaaa %d", result);
  
  
//   return result;
// }

int main(){

    int start = 0;
    int end = 0;
    int step;
    int result;

   printf("defina o start: ");
   scanf("%d", &start);
   
   printf("defina o end: ");
   scanf("%d", &end);

   printf("defina o step: ");
   scanf("%d", &step);

   if(start == end){

    printf("start e end nao pode ser o mesmo valor");

    return 1;
   }

    for(int i = start; i < end; i += step){
        printf("%d ", i);
    }
    
    printf("\n");



    return 0;
};