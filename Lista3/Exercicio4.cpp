#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
4 - Escreva um programa que leia um n�mero inteiro qualquer e verifique se o n�mero � divis�vel por
3 e por 5, o programa dever� apresentar como sa�da as palavras: �DIVIS�VEL� caso o n�mero for
divis�vel por 3 e por 5 ou �N�O DIVIS�VEL� caso ele n�o for divis�vel. Construa tamb�m o diagrama de
blocos deste exerc�cio.

*/

main()
{
    int number;

    cout << "Digite o n�mero para verificar se ele � divis�vel por 3 e por 5: ";
    cin >> number;

    if(number%3==0 && number%5==0){
        cout << "� divis�vel!";
    } else {
        cout << "N�o � divis�vel!";
    }

}
