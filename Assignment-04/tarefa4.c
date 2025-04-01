#include <stdio.h>

#define PIE 3.14

int main (void)
{

	float raio;
	
	printf("Qual o raio do círculo? ");
	scanf("%f",&raio);
	float area = (raio * raio) * PIE;

	printf("A área do círculo é igual a: %f", area);

}

