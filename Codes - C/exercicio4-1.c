#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca - C

int main(){//Escopo Main - Inicio
    int numero;//Declara - Declara a variável número - inteiro

        printf("Insira um numero!\n");//Exibe - Instrui o usuário a digitar um número
        scanf("%d",&numero);//Entrada - Recebe o valor inserido pelo usuário e atribui a variável número.

        if (numero % 2 == 0){//Estrutura de Seleção IF - Inicio - Se o resto da divisão por 2 do número inserido for igual a 0...
            printf("Numero Par!\n");//Então Par - Exibe - Mensagem informando que o número é par
        } else {//Caso contrário - Se o resto da divisão por 2 for diferente de 0, então ímpar...
            printf("Número Ímpar!\n");//Então Ímpar - Exibe - Mensagem informando que o número é Ímpar
        }//Estrutura de Seleção IF - Fim

    return 0;//Encerra o Programa
}//Escopo Main - Fim
