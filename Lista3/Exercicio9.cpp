#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
    9 � Escreva um programa que receba o valor bruto do sal�rio de um funcion�rio e o valor da presta��o
de um empr�stimo, em seguida o sistema dever� calcular o percentual que esta presta��o representa
no sal�rio bruto e caso o percentual for menor ou igual � 25% do sal�rio a consigna��o ser� concedida,
caso contr�rio dever� exibir mensagem dizendo que o valor da presta��o � maior que o permitido.
*/

main()
{
    float salario, prest_emprest;
    cout << "Informe o salario: ";
    cin >> salario;

    cout << "Informe o valor da presta��o do emprestimo: ";
    cin >> prest_emprest;

    if(prest_emprest/salario *100 <= 25){
        cout << "Concedido";
    }else{
        cout << "N�o concedido. ";
    }
}
