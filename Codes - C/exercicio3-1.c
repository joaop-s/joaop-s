#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca

int main(){//Escopo Main - Inicio

   int segundos, minutos, horas;//Declara - segundos, minutos, horas - Inteiro
   
    printf("Insira o tempo em segundos!\n");//Exibe - Mensagem instruindo o usuário a inserir o tempo em segundos!
    scanf("%d",&segundos);//Entrada - Recebe o valor inserido pelo usuário e atribui a variável segundos
    
        horas = segundos / 3600;//Calcula o valor de horas - horas = entrada / 3600 (1 hora em segundos)
        minutos = (segundos -(horas * 3600))/60;//Calcula o valor de minutos.
        segundos = segundos - (horas * 3600) - (minutos * 60);//Calcula o valor de segundos.

            printf("Horas:%d, Minutos: %d, Segundos: %d!\n",horas,minutos,segundos);//Exibe horas, minutos, segundos.   
   return 0;//Encerra o programa
}//Escopo Main - Fim
