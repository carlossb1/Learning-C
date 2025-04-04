#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define CARA 1
#define COROA 0

int main (void)
{
	int tentativas;
	int caras = 0;
	int coroas = 0;
	int jogada;

	srand(time(0)); // inicializar a seed dos números pseudo-aleatórios - usando o time podemos ter uma aproximação legal para uma seed aleatória.

	printf("Quantas moedas você quer jogar? ");

	scanf("%d",&tentativas);


	for (int i = 0; i < tentativas; i++)
	{
		jogada = rand() % 2;
		if (jogada == CARA)
		{
			caras = caras + 1;
		}
		if (jogada == COROA)
		
		{
			coroas = coroas + 1;
		}
	}

	printf("Quantidade de caras : %d ", caras);
	printf("Quantidade de coroas : %d ", coroas);
}


