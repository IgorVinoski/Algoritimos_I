#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
6 - Escreva um programa que leia as coordenadas (x,y) de um ponto em um plano cartesiano (conforme
figura apresentada abaixo) e determine em qual quadrante ele se encontra. Se o ponto estiver sobre um
dos eixos, o programa deve apresentar esta informa��o e qual o eixo, se estiver na origem (uni�o dos
dois eixos) deve apresentar esta informa��o.
*/

main()
{
    int x, y;
    cout << "Digite a coordenada X: ";
    cin >> x;
    cout << "Digite a coordenada Y: ";
    cin >> y;

    if(x==0 && x==y){
        cout << "Est� sobre a origem: 0,0 ";

    }else if(x>0 && y > 0){
        cout << "Est� no primeiro quadrante, tanto x quanto y s�o positivos.";
    }else if(x<0 && y> 0){
        cout << "Est� no segundo quadrante, X negativo Y positivo. ";
    }else if(x<0 && y < 0){
        cout << "Est� no terceiro quadrante, tanto x quanto y negativos. ";
    }else if(x>0 && y < 0){
        cout << "Est� no quarto quadrante, x positivo y negativo.";
    }


}
