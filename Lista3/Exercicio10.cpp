#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
10 � Escreva um programa que receba tr�s valores inteiros, A, B, C, verificar se eles podem ser valores
dos lados de um triangulo e, se forem, se � um tri�ngulo escaleno, equil�tero ou is�scele, considerando
os seguintes conceitos:
� O comprimento de cada lado de um triangulo � menor do que a soma dos outros dois lados.
� Chama-se equil�tero o tri�ngulo que tem tr�s lados iguais.
� Denominam-se is�sceles o tri�ngulo que tem o comprimento de dois lados iguais.
� Recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes.
*/

main()
{
    int a, b, c;

    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;

    cout << "Informe o valor de C: ";
    cin >> c;


    if((a+b) > c && (c+b) > a && (c+c) > b){
        if(a==b && b==c){
            cout << "Equil�tero.";
        }else if(a==b || a==c || c==b){
            cout << "Is�celes. ";
        }else{
            cout << "Escaleno. ";
        }
    }else{
        cout << "N�o formam um triangulo. ";
    }
}
