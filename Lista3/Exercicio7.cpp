#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
Escreva um programa que leia um n�mero inteiro qualquer no intervalo entre 11 e 999 (caso o
n�mero n�o estiver no intervalo apresentar mensagem de �N�MERO INV�LIDO� e encerrar o programa),
se o n�mero estiver no intervalo permitido apresente a soma dos seus algarismo. Por exemplo o n�mero
251 (2 + 5 + 1) a resposta � 8
*/

main()
{
    int number,n1=0;
    cout << "Informe um n�mero inteiro: ";
    cin >> number;

    if(number<= 11 || number >= 999){
        cout << "N�mero inv�lido. ";
    }else {
        while(number>10){
             n1 = number%10 + n1;
             number = (number/10);

        }
        n1 = n1 + number;
        cout << n1;
    }

}
