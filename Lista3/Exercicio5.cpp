#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
5 - Escreva um programa que leia as notas de um aluno em tr�s disciplinas (matem�tica, f�sica e
qu�mica), verificar se as notas s�o v�lidas, uma nota para ser considerada v�lida deve ter valor entre
0.0 e 10.0, caso alguma nota n�o for v�lida informar ao usu�rio e finalizar o programa, receba tamb�m
o percentual de frequ�ncia que pode ser entre 0.0 e 100.0 (validar a frequ�ncia tamb�m). Caso as tr�s
notas e a frequ�ncia estejam no intervalo v�lido, calcule a m�dia aritm�tica do aluno e determine se ele
foi aprovado ou reprovado (m�dia >= 7 e frequ�ncia >= 75.0% � aprovado, caso contr�rio reprovado)
*/

main()
{
    float nota1, nota2, nota3, freq;


        cout << "Digite a nota de matem�tica: ";
        cin >> nota1;
        cout << "Digite a nota de f�sica: ";
        cin >> nota2;
        cout << "Digite a nota de qu�mica: ";
        cin >> nota3;

        if((nota1>= 0.0 ||nota1 <= 10.0) && (nota2>= 0.0 ||nota2 <= 10.0)&& (nota3>= 0.0 ||nota3<= 10.0)){
            cout << "Digite o percentual de frequ�ncia: ";
            cin >> freq;

            if(freq<0.0 || freq >100.0){
                cout << "Frequ�ncia inv�lida. ";
            }

            float media = (nota1+nota2+nota3)/3.0;

            if(media >= 7 && freq >= 75){
                cout << "Aprovado!! ";
            }else {
                cout << "Reprovado. ";
            }


        }else {
            cout << "NOTAS INV�LIDAS!";
        }

}
