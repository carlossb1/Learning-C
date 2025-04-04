#include <stdio.h>


int main (void)
{
	float seconds ;

	float hours;

	float minutes;
	
	float seconds2;


	printf("Quantos segundos você quer transformar em HH:MM::SS? ");

	scanf("%f",&seconds);


	hours = (int) seconds /  3600 ;
	
	minutes =  ((int) seconds % 3600) / 60;

	seconds2 = seconds - (hours * 3600) - (minutes * 60);
	

	// Melhorar a forma com que os valores são exibidos
	
	printf("%0.0f Horas " , hours);
	printf("%0.0f Minutos ", minutes);
	printf("%0.0f Segundos ", seconds2);
}



