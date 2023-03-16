#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca - C

int main(){//Escopo Main - Inicio

    float custo, dist, impos;//Declara - Declara as variaveis custo, dist, impos - Real

    printf("Insira o valor de fabricacao do carro:\n");//Exibe - Instrui o usuário a digitar o valor de fabricação
    scanf("%f",&custo);//Recebe - Recebe a entrada do usuário e atribui a variavel custo

    dist=(custo*28)/100;//Porcentagem calculada da distribuição. 
    impos=(custo*45)/100;//Porcentagem calculada do imposto.

    custo =(custo + (dist + impos));//Soma custo do carro + distibuição e imposto e atribui a variavel custo.
    printf("Valor total do carro: %.2f!\n",custo);//Exibe o custo total do carro com as taxas e impostos incluidos.

    return 0;//Encerra o programa.
}//Escopo Main - Fim
