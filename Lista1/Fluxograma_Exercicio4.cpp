#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
float comissao_recebida, preco_unitario;
int codigo_peca, codigo_vendedor, quantidade_vendida;


    printf("Informe o c�digo do vendedor: ");
    scanf("%d", &codigo_vendedor);


    printf("Informe o c�digo da pe�a: ");
    scanf("%d", &codigo_peca);


    printf("Informe a quantidade vendida: ");
    scanf("%d", &quantidade_vendida);


    printf("Informe o pre�o unit�rio: ");
    scanf("%f", &preco_unitario);


    comissao_recebida = (preco_unitario*quantidade_vendida)*5/100;



    printf("O vendedor %d  receber� uma comiss�o de %f .", codigo_vendedor, comissao_recebida);


}
