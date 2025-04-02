#include <stdlib.h>
#include <stdio.h>


int main (void)
{
	
	int soma_notas = 0;
	
	int* notas_dinamicas; //inicia o pointer com tipo inteiro para poder permitir a pointer arithmetic, auxiliando a função calloc na alocação de memória em sequência para armazenamento das ints.
			      
	int quantidade_elementos;

	printf("Quantos elementos você quer utilizar dinamicamente? ");
	
	scanf("%d",&quantidade_elementos);

	notas_dinamicas = (int*) calloc(quantidade_elementos,sizeof(int)); //aloca memória suficiente para armazenar a quantidade de ints que o usuário deseja, e inicializa os valores com 0.
	printf("Insira uma nota para iniciar ");
	
	scanf("%d", &notas_dinamicas[0]);


	for (int i = 1; i <= quantidade_elementos; i ++ )
	{
		char opcao;
		printf("Você deseja continuar? [y] / [n] \n");
		scanf("%c", &opcao);

		if (opcao == 'y' || opcao == 'Y')
		{
			int nota;
			printf("Insira a nota: ");
			scanf("%d", &nota);
			notas_dinamicas[i] = nota;
			getchar(); // Utilizado pra limpar o caractere de linha nova do buffer depois do scanf	
		}			// tava quebrando a cabeça tentando entender por quê o loop estava skipando

		if (opcao == 'n' || opcao == 'N')
		{
			break;
			return 1;
		}


	}

	int soma = 0;

	for (int i=0; i<=quantidade_elementos; i++){ //somar os elementos dentro do buffer das notas
		soma = soma + notas_dinamicas[i];
	}

	printf("O valor total das notas foi de : [ %d ] ", soma);

	printf("A média alcançada foi de : [ %f ]", (float) soma/quantidade_elementos); //typecast na soma para poder obter valores decimais

}

