#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
int estoque_medio, quant_minima, quant_maxima;
printf("Digite a quantidade m�nima: ");
scanf("%d", &quant_minima);
printf("Digite a quantidade m�xima: ");
scanf("%d", &quant_maxima);


estoque_medio = (quant_maxima+quant_minima)/2;

printf("O estoque m�dio � de: %d", estoque_medio);
}
