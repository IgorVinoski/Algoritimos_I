#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*


    Leta um valor intero correspondente � idade de uma pessoa em das e Informe-a em anos. meses e das
    ObS apenas para facilitar 0 C�tulo. considere t0d0 ano com 365 dias e todo m�s com 30 dias. NOS casos de
    teste nunca haver� uma Situa��o que permite 12 meses e alguns das. como 360.363 ou 364. Este � apenas um
    exerc�cio com 0bptrvo de testar racocimo matem�tico stnples.
    Entrada
    O arqutvo de entrada cont�m um valor intem
    Sa�da
    Imprtna a sa�da conrorme exempto fornecido.
    Exemplo de Entrada
    400

    Exemplo de Sa�da
    1 ano(s) 1 mes (es) 5 dia(s)

*/


main()
{

    int idade;
    cout << "Informe a sua idade: ";
    cin >> idade;

    int anos = idade/365;
    int meses = ((idade%365)/30);
    int dias = ((idade%365)%30);


    cout << anos << meses << dias;
}
