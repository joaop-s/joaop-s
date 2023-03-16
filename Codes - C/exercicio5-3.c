#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca - C

int main(){//Escopo Main - Inicio

    float salario, reajuste;//Declara - Declara as variaveis salario e reajuste - Real


    printf("Insira o salario!\n");//Exibe - Instrui o usuario a inserir o salário.
    scanf("%f",&salario);//Entrada - Recebe a entrada do usuario e atribui a variavel salario.

    printf("Insira o reajuste!\n");//Exibe - Instrui o usuario a inserir o reajuste.
    scanf("%f",&reajuste);//Entrada - Recebe a entrada do usuario e atribui a variavel reajuste.

    salario=(salario + (salario*reajuste)/100);//Calcula salario - Salario recebe salario + valor reajuste.

    printf("Salario reajustado: %.2f!\n",salario);//Exibe - Exibe o salario inserido já reajustado.


    return 0;//Encerra o programa.
}//Escopo Main - Fim
