#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�mero de votos
brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um representa em rela��o ao
total de eleitores.

*/
main()
{
int number_voters, blank_votes, null_votes, valid_votes;

cout << "Enter the number of voters: ";
cin >> number_voters;

cout << "Enter the number of blank votes: ";
cin >> blank_votes;

cout << "Enter the number of null votes: ";
cin >> null_votes;

cout << "Enter the number of valid votes: ";
cin >> valid_votes;


cout << "The percentage of null votes is: " <<  ( (float) null_votes/number_voters)*100  << "%\nThe percentage of blank votes: " <<  ( (float) blank_votes/number_voters)*100 << "%\nThe percentage of valid votes: " << (  (float)valid_votes/number_voters)*100 << "%";


}
