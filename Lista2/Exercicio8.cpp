#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
    Considerando que para um cons�rcio, sabe-se o n�mero total de presta��es, a quantidade de
    presta��es j� pagas e o valor atual da presta��o, escreva um algoritmo que determine o total pago
    pelo consorciado e o saldo devedor.
*/

main()
{
int numero_Prestacoes, prestacoes_Pagas;
float atual_Prestacoes;



cout << "Digite o numero total de presta��es: ";

cin >> numero_Prestacoes;

cout << "Digite o numero de presta��es pagas: ";
cin >> prestacoes_Pagas;

cout << "Digite o vaor atual da presta��o: ";

cin >> atual_Prestacoes;

int prestacoes_Faltantes = numero_Prestacoes - prestacoes_Pagas;

float valor_total = numero_Prestacoes * atual_Prestacoes;

float valor_faltante = prestacoes_Faltantes * atual_Prestacoes;

cout << "Ainda faltam: " << prestacoes_Faltantes << " presta��es \nO valor total � de: " << valor_total << "\nAinda falta: " << valor_faltante << " dinheiros";
}
