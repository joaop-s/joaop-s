#include <stdio.h>  //Biblioteca - Input Output
#include <stdlib.h> //Biblioteca - C

int main()
{ // Escopo Main - Inicio

    int valor1, valor2, soma = 0; // Declara - valor1, valor2 e soma;

    printf("Insira o valor - 1!\n"); // Exibe - Instrui o usuário a inserir o valor 1...
    scanf("%d", &valor1);            // Entrada - Recebe o numero inserido pelo usuário e atribui a variável valor1

    printf("Insira o valor - 2!\n"); // Exibe - Instrui o usuário a inserir o valor 2...
    scanf("%d", &valor2);            // Entrada - Recebe o numero inserido pelo usuário e atribui a variável valor2

    soma = valor1 + valor2; // Soma os valores

    if (soma > 10)
    {                                            // Estrutura de Seleção IF Inicio - Se a soma for maior que 10...
        printf("Primeiro valor: %d!\n", valor1); // Exibe o primeiro valor...
    }
    else
    {                                           // Caso contrário...
        printf("Segundo valor: %d!\n", valor2); // Exibe o segundo valor...
    }                                           // Estrutura de Seleção IF Fim - Se a soma for maior que 10...

    return 0; // Encerra o programa
} // Escopo Main - Fim
