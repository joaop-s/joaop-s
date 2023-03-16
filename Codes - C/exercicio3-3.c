#include <stdio.h>//Biblioteca - C - Input Output
#include <stdlib.h>//Biblioteca - C

int main(){//Escopo Main - INICIO
    
    char nome[30];//Declara a variável - nome de tamanho 30 - String
    int escolha;//Declara a variável -
    float qnt;//Declara a variável -
    float valor100=15.00;//Declara a variável - valor100 - real / Armazena o valor do lanche.
    float valor101=10.00;//Declara a variável - valor101 - real / Armazena o valor do lanche.
    float valor102=12.00;//Declara a variável - valor102 - real / Armazena o valor do lanche.
    float valor103=15.00;//Declara a variável - valor103 - real / Armazena o valor do lanche.
    float valor104=16.00;//Declara a variável - valor104 - real / Armazena o valor do lanche.

    
        printf("Bem-Vindo!\n");//Exibe - Mensagem de boas vindas!
        printf("Segue o cardápio da nossa lanchonete!\n");//Exibe - Cardápio
        printf("Especificação       |     Código      |  Preço\n");//Exibe - Cardápio - Valor Lanche
        printf("Cachorro quente     |       100       |  15,00\n");//Exibe - Cardápio - Valor Lanche
        printf("Bauru simples       |       101       |  10,00\n");//Exibe - Cardápio - Valor Lanche
        printf("Bauru com ovo       |       102       |  12,00\n");//Exibe - Cardápio - Valor Lanche
        printf("Hambúrger           |       103       |  15,00\n");//Exibe - Cardápio - Valor Lanche
        printf("Cheeseburguer       |       104       |  16,00\n");//Exibe - Cardápio - Valor Lanche


            printf("Insira o seu nome!\n");//Exibe - Mensagem instruindo o usuário a digitar o nome!
            gets(nome);//Entrada - Recebe a entrada do usuário (nome)
            setbuf(stdin,NULL);//Limpa o buffer
    
            printf("Insira o código do produto desejado de acordo com o menu!\n");//Exibe - Mensagem instruindo o usuário inserir o código do produto desejado
            scanf("%d",&escolha);//Entrada - Recebe a entrada do usuário (Escolha)
            setbuf(stdin,NULL);//Limpa o buffer

            while(escolha < 100 || escolha > 104){//Estrutura de repetição While - Inicio - Caso o usuário insira um valor menor que 100 ou maior que 104, o laço é repetido solicitando uma nova entrada.
                printf("Escolha invalida!\n");//Exibe - Alerta o usuário, inseriu um código não presente no menu.
                printf("Reinsira sua escolha!\n");//Exibe - Instrui o usuário a reinserir a escolha desejada.

                 scanf("%d",&escolha);//Entrada - Recebe a entrada do usuário (Escolha)
                    setbuf(stdin,NULL);//Limpa o buffer

            }//Estrutura de repetição While - Fim

    
            printf("Insira a quantidade desejada!\n");//Exibe - Mensagem instruindo o usuário a inserir a quantidade de lanches desejada
            scanf("%f",&qnt);//Entrada - Recebe a entrada do usuário (Quantidade de lanches)
            setbuf(stdin,NULL);//Limpa o buffer
            
    
    printf("Nome: %s, Pedido: %d, Quantidade: %.f!\n",nome,escolha,qnt);//Exibe - Nome do usuário, Pedido e Quantidade. 
    
                switch(escolha){//Estrutura de seleção - Switch - INICIO - Calcula o valor de acordo com o lanche escolhido e a quantidade!
                    case 100://Caso 100
                    valor100 = valor100 * qnt;//valor100 recebe valor100 * quantidade, a variavel recebe um novo valor de acordo com a quantidade de lanches.
                    printf("Valor: %.2f!\n",valor100);//Exibe - Exibe o valor calculado!
                break;//Encerra a estrutura de seleção - Pula para o final do programa!
          
                    case 101://Caso 101
                    valor101 = valor101 * qnt;//valor101 recebe valor101 * quantidade, a variavel recebe um novo valor de acordo com a quantidade de lanches.
                    printf("Valor: %.2f!\n",valor101);//Exibe - Exibe o valor calculado!
                break;//Encerra a estrutura de seleção - Pula para o final do programa!
          
                    case 102://Caso 102
                    valor102 = valor102 * qnt;//valor102 recebe valor102 * quantidade, a variavel recebe um novo valor de acordo com a quantidade de lanches.
                    printf("Valor: %.2f!\n",valor102);//Exibe - Exibe o valor calculado!
                break;//Encerra a estrutura de seleção - Pula para o final do programa!
          
                    case 103://Caso 103
                    valor103 = valor103 * qnt;//valor103 recebe valor103 * quantidade, a variavel recebe um novo valor de acordo com a quantidade de lanches.
                    printf("Valor: %.2f!\n",valor103);//Exibe - Exibe o valor calculado!
                break;//Encerra a estrutura de seleção - Pula para o final do programa!
          
                    case 104://Caso 104
                    valor104 = valor104 * qnt;//valor104 recebe valor104 * quantidade, a variavel recebe um novo valor de acordo com a quantidade de lanches.
                    printf("Valor: %.2f!\n",valor104);//Exibe - Exibe o valor calculado!
                break;//Encerra a estrutura de seleção - Pula para o final do programa!
          
           default://Estrutura de seleção - Switch - Caso padrão - Caso o código do produto seja menor que 100 e maior que 104...
            printf("O produto inserido e invalido!\n");//Exibe - Exibe mensagem para o usuário de que o código do produto inserido é invalido
           break;//Encerra a estrutura de seleção - Pula para o final do programa!
    }//Estrutura de seleção - Switch - FIM
    return 0;//Encerra o programa
}//Escopo Main - FIM
