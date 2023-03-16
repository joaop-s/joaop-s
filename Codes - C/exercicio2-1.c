#include <stdio.h>//Biblioteca Entrada e Saida
#include <stdlib.h>//Biblioteca C


int main() {//Escopo Main - Inicio
//Declara
int base;//Declara a Base
int altura;//Declara a altura
int peri;//Declara a variavel para armazenar o valor calculado para o perimetro

printf("Insira a base do retangulo!\n");//Exibe - Instrui o usuario a digitar o valor da base do retangulo
scanf("%d", &base);//Le - Le o valor inserido pelo usuario - base retangulo

printf("Insira a altura do retangulo!\n");//Exibe - Instrui o usuario a digitar o valor da altura do retangulo
scanf("%d", &altura);//Le - Le o valor inserido pelo usuario - altura retangulo

if(base == altura){
    printf("As medidas inseridas correspondem a um quadrado!\n");
} else{

peri= 2*(base+altura);//Calcula o perimetro do retangulo - base + altura * 2
printf("Perimetro do retangulo: %d!\n",peri);//Exibe o valor do perimetro do retangulo
}
    return 0;//Encerra o programa
}//Escopo Main - FIM
