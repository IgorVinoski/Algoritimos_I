#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do
distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do
distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de f�brica
de um carro e escreva o custo ao consumidor.

*/
main()
{
    float custo_fabrica;

    cout << "Informe o custo de f�brica do ve�culo: \t";
    cin >> custo_fabrica;

    float custo_consumidor = custo_fabrica + custo_fabrica*73/100;

    cout << "O custo para o consumidor � de: " << custo_consumidor << " dinheiros";
}
