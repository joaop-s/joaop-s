#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca - C
//Calcula Idade em dias - CALCULO IMPRECISO! Pois considera todos os meses com 30 dias e anos com 365! :)
int main(){//Escopo Main - Inicio

    int idade, dia, mes, ano;//Declara - Declara idade, dia, mes, ano - Inteiro

    printf("Insira sua idade em anos:\n");//Exibe - Instrui o usuário a inserir a idade em anos.
    scanf("%d",&ano);//Entrada - Recebe a entrada do usuario e atribui a variavel ano.

			printf("Insira sua idade em meses:\n");//Exibe - Instrui o usuario a inserir a idade em meses.
	    scanf("%d",&mes);//Entrada - Recebe a entrada do usuario e atribui a variavel mes.

				printf("Insira sua idade em dias\n");//Exibe - Instrui o usuário a inserir a idade em dias.
		    scanf("%d", &dia);//Entrada - Recebe a entrada do usuario e atribui a variavel dia.

			    ano = ano * 365;//Calcula ano em dias
			    mes = mes * 30;//Calcula mes em dias
    
    idade = ano + mes + dia;//Soma o total de dias e atribui a variavel idade
    printf("Idade em dias: %d!\n",idade);//Exibe - Exibe a idade do usuário em dias.

    return 0;//Encerra o programa
}//Escopo Main - Fim
