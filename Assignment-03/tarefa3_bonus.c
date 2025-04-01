#include <stdio.h>

int main (void)
{
	char primeiro_nome[20];
	char sobrenome[20];

	puts("Qual seu primeiro nome? ");
	scanf("%s",&primeiro_nome);

	puts("Qual sobrenome? ");
	scanf("%s",&sobrenome);

	printf("Bem vindo %s %s !", primeiro_nome, sobrenome);



}	
