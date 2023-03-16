#include <stdio.h>  //Biblioteca - Input Output
#include <stdlib.h> //Biblioteca - C

int main()
{ // Escopo Main - Inicio

    int value1 = 0, value2 = 0; // Declara value1 e value2

    printf("Insert the first value!\n"); // Exibe - Instrui o usuário a inserir o valor1
    scanf("%d", &value1);                // Entrada - Recebe o valor inserido pelo usuário
    setbuf(stdin, NULL);                 // Limpa o buffer - (IDE bug)

    printf("Insert the second value!\n"); // Exibe - Instrui o usuário a inserir o valor2
    scanf("%d", &value2);                 // Entrada - Recebe o valor inserido pelo usuário
    setbuf(stdin, NULL);                  // Limpa o buffer - (IDE bug)

    printf("First Value - %d!\n", value1);  // Exibe - Valor1 antes de ser alterado
    printf("Second Value - %d!\n", value2); // Exibe - Valor2 antes de ser alterado

    value1 = value1 + value2; // Valor 1 recebe valor 1 mais valor2...
    value2 = value1 - value2; // Valor2 recebe valor1 - valor2 - Guarda o valor 1 em valor 2.
    value1 = value1 - value2; // Valor1 recebe valor1 - valor2 - Guarda o valor 2 em valor1.

    printf("Changed - First Value - %d!\n", value1);  // Exibe - Valor1 depois de ser alterado.
    printf("Changed - Second Value - %d!\n", value2); // Exibe - Valor2 depois de ser alterado.

    return 0; // Encerra o programa
} // Escopo Main - Fim
