#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca - C

int main()//Escopo Main - Inicio
{

    float litros, valor, alcool = 4.50, gasolina = 6.00;//Declara - Declara litros, valor, alcool e gasolina com seus respectivos valores fornecidos pelo exercicio. - Real
    char escolha;//Declara - Char para definir escolha no switch
    printf("Bem-Vindo!\n");//Exibe - Mensagem de boas vindas
    printf("Escolha abaixo o tipo de combustivel desejado!\n");//Exibe - Instrui o usuário a inserir o tipo de combustível desejado.
    printf("Insira A para Alcool ou G para Gasolina!\n");//Exibe - Mostra as opções disponíveis para o usuário.
    scanf("%c", &escolha);//Entrada - Recebe a escolha inserida pelo usuário...
    switch (escolha)//Estrutura de condição - Switch
    {
    case 'A'://Caso A - Álcool
    case 'a'://Caso a - Álcool

        printf("Quantos litros de alcool serao abastecidos?\n");//Exibe - Mensagem instruindo o usuário a inserir a quantidade de combustível desejada.
        scanf("%f", &litros);//Entrada - Recebe o valor inserido pelo usuário.

        if (litros <= 20)//Estrutura de condição - Se Inicio - Se a quantidade de litros for menor igual a 20...
        {

            alcool = alcool - (alcool * 0.03);//Alcool recebe alcool - 3% (Calculo do desconto)
            printf("Valor alcool por litro c/desconto: %.2f!\n", alcool);//Exibe o valor por litro do alcool com desconto
            valor = litros * alcool;//Calcula o valor total a ser pago pelo abastecimento.
            printf("Valor:%.2f!\n", valor);//Exibe o valor total a ser pago pelo abastecimento.
        }//Estrutura de condição - Se Fim...
        if (litros > 20)//Estrutura de condição - Se Inicio - Se a quantidade de litros for maior que 20...
        {
            alcool = alcool - (alcool * 0.05);//Alcool recebe alcool - 5% (Calculo do desconto)
            printf("Valor alcool por litro c/desconto: %.2f!\n", alcool);//Exibe o valor por litro do alcool com desconto
            valor = litros * alcool;//Calcula o valor total a ser pago pelo abastecimento.
            printf("Valor:%.2f!\n", valor);//Exibe o valor total a ser pago pelo abastecimento.
        }//Estrutura de condição - Se Fim - Se a quantidade de litros for maior que 20...

        break;//Encerra o caso

    case 'G'://Caso G - Gasolina
    case 'g'://Caso g - Gasolina

        printf("Quantos litros de gasolina serao abastecidos?\n");//Exibe - Mensagem instruindo o usuário a inserir a quantidade de combustível desejada.
        scanf("%f", &litros);//Entrada - Recebe o valor inserido pelo usuário.

        if (litros <= 20)//Estrutura de condição - Se Inicio - Se a quantidade de litros for menor igual a 20...
        {

            gasolina = gasolina - (gasolina * 0.04);//Gasolina recebe Gasolina - 4% (Calculo do desconto)
            printf("Valor gasolina por litro c/desconto: %.2f!\n", gasolina);//Exibe o valor por litro da gasolina com desconto
            valor = litros * gasolina;//Calcula o valor total a ser pago pelo abastecimento.
            printf("Valor:%.2f!\n", valor);//Exibe o valor total a ser pago pelo abastecimento.
        }//Estrutura de condição - Se Fim - Se a quantidade de litros for menor igual a 20...

        if (litros > 20)//Estrutura de condição - Se Inicio - Se a quantidade de litros for maior que 20...
        {
            gasolina = gasolina - (gasolina * 0.06);//Gasolina recebe Gasolina - 6% (Calculo do desconto)
            printf("Valor gasolina por litro c/desconto: %.2f!\n", gasolina);//Exibe o valor por litro da gasolina com desconto
            valor = litros * gasolina;//Calcula o valor total a ser pago pelo abastecimento.
            printf("Valor:%.2f!\n", valor);//Exibe o valor total a ser pago pelo abastecimento.
        }//Estrutura de condição - Se Fim - Se a quantidade de litros for maior que 20...
        break;//Encerra o caso

    default://Caso padrão - Caso o usuário insira opções diferentes de 'g''G''a''A'...
        printf("Voce inseriu uma opcao invalida!\n");//Exibe - Mensagem alertando o usuário sobre a inserção inválida.
        printf("Carro nao abastecido!\n");//Exibe - Mensagem de aviso - Carro não abastecido.
        printf("Tente novamente e insira uma das opcoes destacadas!\n");//Exibe - Instrui o usuário a tentar novamente e reinserir a opção de acordo.
        break;//Encerra o caso
    }//Estrutura de condição - Switch

    return 0;//Encerra o programa
}//Escopo Main - Fim
