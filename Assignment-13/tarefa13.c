#include <stdio.h>

#define JOGO_1 1
#define JOGO_2 2
#define JOGO_3 3
#define JOGO_4 4
#define JOGO_5 5

int main (void)
{
// 1 array representando os jogos pra cada player - 4 jogos - 5 players 
//
	int games[4][5];
	int tamanho = sizeof(games)/sizeof(int);

	printf("%d",tamanho);

	for (int i = 0; i < 4; i ++)
	{
		printf("--------------[ INICIO DO JOGO %d ] ------------------ \n", i +1);
		for (int j = 0; j <= 4; j ++)
		{
			printf("Qual foi a pontuação do jogador %d no jogo %d: ", j+1, i+1);
			scanf("%d", &games[i][j]);
			getchar();
		}
		printf("---------------[FINAL DO JOGO %d ] ------------------ \n \n", i+1);

	}

	int pontuacao[5] = {0};
	int soma = 0;

	for (int i = 0; i < 5 ; i ++ )
	{
		for (int j = 0; j < 4 ; j ++ )

		{ 
			pontuacao[i] += games[j][i];

		}
	}
	
	printf(" -------------------- [ CALCULANDO SOMAS ] --------------------- \n ");
	
	for (int i = 0 ; i < 5 ; i ++ )
	
	{
		printf("Soma da pontuação do jogador [ %d ] - [ %d ]  \n", i+1, pontuacao[i]);
	}	

	int maior_valor = 0;
	int jogador;
	for (int m = 0; m <sizeof(pontuacao)/sizeof(int); m ++ )
	{
		if (maior_valor < pontuacao[m]);
		{
			maior_valor = pontuacao[m];
			jogador = m + 1;
			printf("Maior valor até o momento: %d \n", maior_valor);
		}
	}
	printf("\n --------------------- [ MAIOR MÉDIA ENCONTRADA ] --------------- \n ");
	printf("O jogador [ %d ] apresentou a média de : [ %d ] pontos ", jogador,maior_valor/5);
			
}



