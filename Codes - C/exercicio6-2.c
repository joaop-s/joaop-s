#include <stdio.h>//Biblioteca - Input Output
#include <stdlib.h>//Biblioteca - C

int main()//Escopo Main - Inicio
{

    int idadeh1, idadeh2, idadem1, idadem2, soma, produto, nh, nm, vh, vm;//Declara as variaveis utilizadas. 

    printf("Insira apenas idades distintas entre cada classe!\n");//Exibe - Instrui o usuario

    printf("Insira a idade 1 - Homem!\n");//Exibe - Instrui o usuário a digitar a Idade 1 - Homem
    scanf("%d", &idadeh1);//Entrada - Recebe a idade inserida pelo usuário - Idade 1 Homem

    printf("Insira a idade 2 - Homem!\n");//Exibe - Instrui o usuário a digitar a Idade 2 - Homem
    scanf("%d", &idadeh2);//Entrada - Recebe a idade inserida pelo usuário - Idade 2 Homem

    printf("Insira a idade 1 - Mulher!\n");//Exibe - Instrui o usuário a digitar a Idade 1 - Mulher
    scanf("%d", &idadem1);//Entrada - Recebe a idade inserida pelo usuário - Idade 1 Mulher

    printf("Insira a idade 2 - Mulher!\n");//Exibe - Instrui o usuário a digitar a Idade 2 - Mulher
    scanf("%d", &idadem2);//Entrada - Recebe a idade inserida pelo usuário - Idade 1 Mulher

    if (idadeh1 == idadeh2 || idadem1 == idadem2)//Laço de condição SE - Se idade homem1 for igual idade homem2 ou idade mulher1 for igual mulher2...
    {

        printf("Idades iguais inseridas! - Reinicie o programa e tente novamente!\n");//Exibe - Mensagem alertando o usuário a inserção de idades iguais e instrui a reiniciar. 
    }
    else//Caso contrário - Inicio - Executa o programa normalmente...
    {

        if (idadeh1 > idadeh2)//Se a idade homem1 for maior que idade homem2...
        {
            vh = idadeh1;//VH (Representa homem mais velho) - Recebe idade h1
            nh = idadeh2;//NH (Representa homem mais novo) - Recebe idade h2
        }
        else if (idadeh2 > idadeh1)//Caso contrário - Se a idade homem2 for maior que idade homem1...
        {
            vh = idadeh2;//VH (Representa homem mais velho) - Recebe idade h2
            nh = idadeh1;//NH (Representa homem mais novo) - Recebe idade h1
        }

        if (idadem1 > idadem2)//Se a idade mulher1 for maior que idade mulher2...
        {
            vm = idadem1;//VM (Representa mulher mais velha) - Recebe idade m1
            nm = idadem2;//NM (Representa mulher mais nova) - Recebe idade m2
        }
        else if (idadem2 > idadem1)//Caso contrário - Se a idade mulher2 for maior que idade mulher1...
        {
            vm = idadem2;//VM (Representa mulher mais velha) - Recebe idade m2
            nm = idadem1;//NM (Representa mulher mais nova) - Recebe idade m1
        }

        soma = vh + nm;//Calcula soma das idades do homem mais velho e da mulher mais nova...
        produto = nh * vm;//Calcula o produto das idades do homem mais novo e mulher mais velha...

        printf("Soma das idades do homem mais velho e mulher mais nova e : %d!\n", soma);//Exibe a soma das idades.
        printf("Produto das idades do homem mais novo e mulher mais velha e : %d!\n", produto);//Exibe o produto das idades..
    }//Else - Laço de repetição - Fim

    return 0;//Encerra o programa
}//Escopo Main - Fim
