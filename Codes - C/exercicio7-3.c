#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca - C

int main(){//Escopo Main - Inicio

    int valorA, valorB;//Declara - ValorA e ValorB - Inteiro

    printf("Insira o valor A!\n");//Exibe - Instrui o usuário a digitar o valor A...
    scanf("%d",&valorA);//Entrada - Recebe o valor inserido pelo usuário...

    printf("Insira o valor B!\n");//Exibe - Instrui o usuário a digitar o valor B...
    scanf("%d",&valorB);//Entrada - Recebe o valor inserido pelo usuário...

     if (valorA % valorB == 0){//Estrutura de condição - IF Incio - Se o resto da divisão de valorA por valorB for igual a 0...
        printf("Os valores inseridos sao divisiveis!\n");//Exibe - Mostra que os números são divisíveis
     }else{//Caso contrário...
        printf("Os valores inseridos nao sao divisiveis\n");//Exibe - Mostra que os números não são divisíveis
     }//Estrutura de condição - IF Incio - Se o resto da divisão de valorA por valorB for igual a 0...

    return 0;//Encerra o programa
}//Escopo Main - Fim
