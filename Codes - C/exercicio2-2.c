#include <stdio.h>//Biblioteca Input Output
#include <stdlib.h>//Biblioteca C

int main(){//Escopo Main - INICIO

  float celsius;//Declara a variavel Celsius - Real
    float fahren;//Declara a variavel Fahrenheit - Real
    
    printf("Insira a temperatura em Fahrenheit!\n");//Exibe - Instrui o usuario a digitar a temperatura em Fahrenheit...
    scanf("%f",&fahren);//Le - Le o numero inserido pelo usuario e atribui a variavel Fahrenheit
    
    celsius=(fahren -32) / 1.8;//Calcula a temperartura em graus celsius á partir do valor inserido pelo usuario...
    printf("A temperatura em Celsius e: %.1fº!",celsius);//Exibe a temperatua em graus Celsius
    return 0;//Encerra o programa
}//Escopo Main - FIM
