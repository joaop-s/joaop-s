#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca - C

int main(){//Escopo Main - Inicio
    int eleitores, brancos, nulos, validos;//Declara as variáveis eleitores, brancos, nulos, validos.
    float pbrancos, pnulos, pvalidos;//Declara as variáveis - Porcentagem brancos, nulos e validos.

    printf("Insira o numero de eleitores!\n");//Exibe - Mensagem instruindo o usuário a inserir o número de eleitores.
    scanf("%d", &eleitores);//Recebe - Recebe o valor inserido pelo usuário e atribui a variável eleitores.

    printf("Insira o numero de votos brancos!\n");//Exibe - Mensagem instruindo usuário a inserir o número de votos brancos.
    scanf("%d", &brancos);//Recebe - Recebe o valor inserido pelo usuário e atribui a variável brancos.

    printf("Insira o numero de votos nulos!\n");//Exibe - Mensagem instruindo usuário a inserir o número de votos nulos.
    scanf("%d", &nulos);//Recebe - Recebe o valor inserido pelo usuário e atribui a variável nulos.

    printf("Insira o numero de votos validos!\n");//Exibe - Mensagem instruindo usuário a inserir o número de votos válidos.
    scanf("%d", &validos);//Recebe - Recebe o valor inserido pelo usuário e atribui a variável válidos.

    pbrancos = ((float)brancos / eleitores) * 100;//Calcula a porcentagem de votos brancos
    pnulos = ((float)nulos / eleitores) * 100;//Calcula a porcentagem de votos nulos
    pvalidos = ((float)validos / eleitores) * 100;//Calcula a porncetagem de votos validos.

    printf("Numero total de eleitores: %d\n", eleitores);//Exibe - Numero do total de eleitores
    printf("Percentual de Votos Brancos: %.1f%%\n", pbrancos);//Exibe o percentual de votos brancos
    printf("Percentual de Votos Nulos: %.1f%%\n", pnulos);//Exibe o percentual de votos nulos
    printf("Percentual de Votos Validos: %.1f%\n", pvalidos);//Exibe o percentual de votos validos


    return 0;//Encerra o programa
}//Escopo Main - Fim
