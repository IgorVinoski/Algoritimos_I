#include<iostream>

#include<cstdio>

#include<cstdlib>

void meses(int);
using namespace std;
/*
8 - Elabore um algoritmo que receba um ano (num�rico inteiro) e o n�mero do m�s (1 � Janeiro, 2 �
Fevereiro, e assim sucessivamente) informe se o ano � bissexto ou n�o. Lembrete:
S�o bissextos todos os anos m�ltiplos de 400, ex.: 1600, 2000, 2400, 2800...
S�o bissextos todos os m�ltiplos de 4 e n�o m�ltiplos de 100, ex.: 1996, 2004, 2008, 2012, 2016...
N�o s�o bissextos todos os demais anos.
Usando o comando switch exiba o n�mero de dias do m�s informado, sabendo que nos anos que n�o
s�o bissexto o m�s 2 (fevereiro) tem 28 dias.
*/

main()
{
    int ano, mes;
    cout << "Informe o ano: ";
    cin >> ano;
    cout << "Informe o m�s: ";
    cin >> mes;

    if(ano%400 == 0|| (ano%4==0 && ano%100 !=0)) {
                cout << "� bissexto. ";
                meses(mes);
    }else{
        cout << "N�o � bissexto. ";
        if(mes == 2){
            cout << "tem 28 dias.";
        }else{
            meses(mes);
        }
    }


}
  void meses(int a)
    {
        switch(a){
            case 1:
                cout << "tem 31 dias. ";
                break;
            case 2:
                cout << "tem 29 dias.";
                break;
            case 3:
                cout << "tem 31 dias. ";
                break;
            case 4:
                cout << "tem 30 dias.";
                break;
            case 5:
                cout <<  "tem 31 dias.";
                break;
            case 6:
                cout << "tem 30 dias.";
                break;
            case 7 ... 8:
                cout << "tem 31 dias.";
                break;
            case 9:
                cout << "tem 30 dias.";
                break;
            case 10:
                cout << "tem 31 dias.";
                break;
            case 11:
                cout << "tem 30 dias.";
                break;
            case 12:
                cout << "tem 31 dias.";
                break;

        }
    }
