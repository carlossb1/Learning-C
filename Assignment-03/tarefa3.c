#include <stdio.h>

int main (void)
{
	char *primeiro_nome;
	char *sobrenome;

	puts("Qual seu primeiro nome? ");
	scanf("%s",&primeiro_nome);

	puts("Qual sobrenome? ");
	scanf("%s",&sobrenome);

	printf("Bem vindo %s %s !", *primeiro_nome, *sobrenome);

	free(primeiro_nome);
	free(sobrenome);



}	
