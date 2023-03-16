#include <stdio.h>//Biblioteca C - Input & Output
#include <stdlib.h>//Biblioteca C 

int main(){//Escopo Main - Inicio

int idade;//Declara - Declara a variavel idade - inteiro

    printf("Insira sua idade!\n");//Exibe - Instrui o usuário a digitar sua idade
    scanf("%d",&idade);//Entrada - Lê a entrada do usuário e atribui a variável idade

        if(idade < 5){//Estrutura de Seleção SE - Inicio - Se a idade for menor que 5...
            printf("Nao se enquadra em nenhuma categoria!\n");//Exibe - Mensagem alertando o usuário que a idade inserida não se enquadra em nenhuma categoria.
        }//Estrutura de Seleção SE - Se a idade menor que 5...

        if(idade >= 5 && idade <= 7){//Estrutura de Seleção SE - Inicio - Se a idade for maior igual a 5 e menor igual a 7...
            printf("Sua categoria e Infantil A!\n");//Exibe - Informa a categoria no qual o usuário se encontra.
        }//Estrutura de Seleção SE - Fim

        if(idade >= 8 && idade <= 10){//Estrutura de Seleção SE - Inicio - Se a idade for maior igual a 8 e menor igual a 10...
            printf("Sua categoria e Infantil B!\n");//Exibe - Informa a categoria no qual o usuário se encontra.
        }//Estrutura de Seleção SE - Fim

        if(idade >= 11 && idade <= 13){//Estrutura de Seleção SE - Inicio - Se a idade for maior igual a 11 e menor igual a 13...
            printf("Sua categoria e Juvenil A!\n");//Exibe - Informa a categoria no qual o usuário se encontra.
        }//Estrutura de Seleção SE - Fim

        if(idade >= 14 && idade <= 17){//Estrutura de Seleção SE - Inicio - Se a idade for maior igual a 14 e menor igual a 17...
            printf("Sua categoria e Juvenil B!\n");//Exibe - Informa a categoria no qual o usuário se encontra.
        }//Estrutura de Seleção SE - Fim

        if(idade > 18){//Estrutura de Seleção SE - Inicio - Se a idade for maior que 18..
            printf("Sua categoria e Adulto!\n");//Exibe - Informa a categoria no qual o usuário se encontra.
        }//Estrutura de Seleção SE - Fim

    return 0;//Encerra o programa
}//Escopo Main - Fim
