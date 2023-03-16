#include <stdio.h>
#include <stdlib.h> 

int main(){ //Escopo Inicio - Main
//VAR - Declaração de variáveis
int valor1=0, valor2=0, valor3=0;//Declara e inicializa - Valor 1, Valor2, Valor3

printf("Insira o Valor 1!\n");//Exibe informação - Instrui o usuário a digitar o valor 1
scanf("%d",&valor1);//Lê informação - Recebe a informação digitada pelo usuário

printf("Insira o Valor 2!\n");//Exibe informação - Instrui o usuário a digitar o valor 2
scanf("%d",&valor2);//Lê informação - Recebe a informação digitada pelo usuário

printf("Insira o Valor 3!\n");//Exibe informação - Instrui o usuário a digitar o valor 3
scanf("%d",&valor3);//Lê informação - Recebe a informação digitada pelo usuário

if(valor1 == valor2 || valor1 == valor3 || valor2 == valor1 || valor2 == valor3 || valor3==valor1 || valor3 == valor2){//Condição Se - Compara a igualdade dos valores
printf("Dois ou mais valores são iguais!\n");//Exibe - Mensagem alertando o usuário de que dois ou mais valores sao iguais
}else {//Estrutura de condição Se - Else
if( valor1 > valor2 && valor1 > valor3){//Estrutura de condição IF - Se valor1 for maior que valor 2 e valor 1 for maior que valor 3...
printf("O Maior valor e o 1: %d!", valor1);//Exibe o valor armazenado na variável valor1
} else if(valor2 > valor1 && valor2 > valor3){//Caso contrário, se o valor2 for maior que valor1 e valor2 for maior que valor3
printf("O Maior valor e o 2: %d!", valor2);//Exibe o valor armazenado na variável valor2
} else {//Então - último caso, se nem valor 1 e nem valor2, então o maior valor está na Var Valor3
printf("O Maior valor e o 3: %d!", valor3);//Exibe o valor armazenado na variável valor3
}//Então - Último caso
}
return 0;//Encerra o programa
}//Fim - Escopo - Main
