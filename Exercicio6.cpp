#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
Leia um valor inteiro, que � o tempo de dura��o em segundos de um determinado evento em uma f�brica, e
informe-o expresso no formato
Entrada
O arquivo de entrada cont�m um valor inteiro N.
Sa�da
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme
exemplo Fornecido.

Exemplo de Entrada
556
1
140153
Exemplo de Sa�da
38: 55: 53
*/

main()
{
int time;
int horas;
int rhoras;
int minutos;
int segundos;

cout << "Informe os segundos de execu��o: ";

cin >> time;

horas = time/(60*60);
rhoras = time%(60*60);

minutos = rhoras/60;
segundos = rhoras%60;



cout << horas <<":" << minutos<< ":" << segundos;
}
