#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca

int main(){//Escopo Main - Inicio

    float preco, parcela;//Declara - Declara as variaveis preco e parcela - Real (Preco armazena o valor do produto, parcela armazena o valor do produto parcelado).
    int formapay;//Declara - Declara a variavel formapay - Inteiro (Armazena escolha).

    printf("Insira o preco do produto!\n");//Exibe - Mensagem instruindo o atendente a inserir o preço do produto...
    scanf("%f",&preco);//Entrada - Recebe o preço do produto e atribui a variável preco.
    setbuf(stdin, NULL);//Limpa o Buffer (Evita pequenos bugs de entrada).
 
    printf("Segue as formas de pagamento e seus beneficios!\n");//Exibe - Mensagem Instrutora - Exibe as formas de pagamento e beneficios advindos.
    printf("1 - A vista em dinheiro ou cheque - Com desconto de 10%!\n");//Exibe - Mensagem Instrutora - Exibe as formas de pagamento e beneficios advindos.
     printf("2 - A vista no cartao de credito! - Com desconto de 15%!\n");//Exibe - Mensagem Instrutora - Exibe as formas de pagamento e beneficios advindos.
      printf("3 - 2x - Sem desconto e sem juros! - Sem beneficios!\n");//Exibe - Mensagem Instrutora - Exibe as formas de pagamento e beneficios advindos.
       printf("4 - 3x - Sem desconto e com juros de 10%!\n");//Exibe - Mensagem Instrutora - Exibe as formas de pagamento e beneficios advindos.
    
        printf("Escolha a forma de pagamento desejada de acordo com as seguintes opcoes:\n");//Exibe - Mensagem instruindo o atendente a inserir a forma de pagamento de acordo com o desejo do cliente.
        scanf("%d",&formapay);//Entrada - Lê a forma de pagamento inserida pelo atendente.
        setbuf(stdin, NULL);//Limpa o Buffer (Evita pequenos bugs de entrada)

        if(formapay == 1){//Estrutura de Seleção IF ELSE - Inicio - Se a forma de pagamento inserida for 1 - Então A vista em dinheiro ou cheque!
            preco = preco - (preco*0.10);//Calcula o preço - Preço recebe preço - 10% de desconto!
             printf("O valor a ser pago e de: %.2f!\n",preco);//Exibe o valor a ser pago com desconto já calculado.
        } else if(formapay == 2){//Estrutura de Seleção IF ELSE - Se a forma de pagamento inserida for 2 - Então A vista no cartão de crédito!
            preco = preco - (preco * 0.15);//Calcula o preço - Preço recebe preço - 15% de desconto!
             printf("O valor a ser pago e de: %.2f!\n",preco);//Exibe o valor a ser pago com desconto já calculado.
        } else if(formapay == 3){//Estrutura de Seleção IF - Se a forma de pagamento inserida for 3 - Então pagamento em 2x no cartão de crédito!
            preco = preco;//Calcula o Preço - Preço permanece inalterado pois não há desconto nem juros para esta forma de pagamento.
             parcela = preco /2;//Calcula o valor das parcelas.
              printf("O valor a ser pago e de: %.2f dividido em 2 vezes de %.2f!\n",preco, parcela);//Exibe o valor total a ser pago, o numero de parcelas e o valor referente a cada uma.
        } else if(formapay == 4){//Estrutura de Seleção IF - Se a forma de pagamento inserida for 4 - Então pagamento em 3x no cartão de crédito!
            preco = preco + (preco*0.10);//Calcula Preço - Preço recebe preço + 10% de juros.
             parcela = preco /3;//Calcula o valor das parcelas.
             printf("O valor a ser pago e de: %.2f dividido em 3 vezes de %.2f!\n",preco, parcela);//Exibe o valor total a ser pago, o numero de parcelas e o valor referente a cada uma.
        }//Estrutura de Seleção IF ELSE - Fim

    return 0;//Encerra o Programa
}//Escopo Main - Fim
