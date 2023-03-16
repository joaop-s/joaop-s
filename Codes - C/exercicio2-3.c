#include <stdio.h>//Biblioteca Input Output
#include <stdlib.h>//Biblioteca C

int main() {//Escopo Main - INICIO
    
    float numero;//Declara numero - Real
    
    printf("Insira um numero!\n");//Exibe - instrui o usuario a digitar um numero
    scanf("%f",&numero);//Le - Recebe o numero inserido pelo usuario e atribui a variavel numero
    
    if(numero > 0){//Estrutura de Condição SE - Se o numero for maior que 0...
        printf("Numero positivo: %.1f",numero);//Exibe que o numero é positivo e exibe o numero...
    } else  if(numero < 0){//Senão - Se o numero for menor que 0...
        printf("Numero negativo: %.1f",numero);//Exibe que o numero e negativo e exibe o numero...
    } else {//Caso contrário - Se o numero não é nem maior que 0 nem menor que 0, então numero = 0...
        printf("Numero igual a 0!\n");//Exibe que o numero é igual a 0
    }//Estrutura de Condição - Fim do laço

    return 0;//Encerra o programa
}//Escopo Main - FIM
