#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
/*
Fa�a um programa que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se
que este sofreu um desconto de 10 %.
*/

     float price;

     cout << "Enter product price : \n";
     cin >> price;

     cout << "The price after the discount: " << price*90/100;

}
