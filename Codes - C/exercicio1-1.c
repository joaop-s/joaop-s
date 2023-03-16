#include <stdio.h> //Biblioteca C - Input Output
#include <stdlib.h>//Biblioteca C

int main(){ //Escopo Inicio - Main
//VAR - Declaração de variáveis
    int valor1=0, valor2=0;//Declara e inicializa - Valor 1, Valor2
    int mul=0;//Declara e inicializa Mul

        printf("Insira o Valor 1!\n");//Exibe informação - Instrui o usuário a digitar o valor 1
        scanf("%d",&valor1);//Lê informação - Recebe a informação digitada pelo usuário

            printf("Insira o Valor 2!\n");//Exibe informação - Instrui o usuário a digitar o valor 2
            scanf("%d",&valor2);//Lê informação - Recebe a informação digitada pelo usuário

                mul = valor1 * valor2;//Multiplica - mul recebe valor1 multiplicado pelo valor2
            
            printf("O resultado da multiplicação e: %d!",mul);//Exibe na tela o valor armazenado em mul

    return 0;//Encerra o programa
}//Fim - Escopo - Main
