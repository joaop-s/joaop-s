#include <stdio.h>//Biblioteca C - Input Output

int main() {//Escopo Inicio - Main
    //VAR - Declaração de variáveis
   char nome[30];//Declara variável nome alocando 30 caracteres
   int idade;//Declara a variável idade
   char endereco[30];//Declara variável nome alocando 30 caracteres
   
        printf("Insira seu nome:\n");//Exibe informação - Instrui o usuário a digitar o nome
        gets(nome);//Lê informação - Recebe a informação digitada pelo usuário
   
          printf("Insira sua idade:\n");//Exibe informação - Instrui o usuário a digitar a idade
          scanf("%d", &idade);//Lê informação - Recebe a informação digitada pelo usuário
          setbuf(stdin,NULL);//Limpa o buffer
   
           printf("Insira seu endereco:\n");//Exibe informação - Instrui o usuário a digitar o endereco
           gets(endereco);//Lê informação - Recebe a informação digitada pelo usuário
   
    printf("Nome: %s\n", nome);//Exibe na tela o nome inserido pelo usuario
     printf("Idade: %d\n", idade);//Exibe na tela a idade inserido pelo usuario
      printf("Endereco: %s\n", endereco);//Exibe na tela o endereco inserido pelo usuario
   
   return 0;//Encerra o programa
}//Fim - Escopo - Main
//Função gets perigosa - esqueci como usa string :)
