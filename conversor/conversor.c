#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* CONVERSOR DE TEMPERATURA */

main() {
	float cel,fah,kel;
	int B;
	char palavra='S';

	while(palavra =='S') {

		printf("\n***CONVERSOR DE TEMPERATURA***\n");
		printf("\n1- Celcius para Fahrenheit\n2- Celcius para Kelvin\n3- Fahrenheit para Celcius\n4- Fahrenheit para Kelvin\n5- Kelvin para Celcius\n6- Kelvin para Fahrenheit");
		printf("\nDigite a opcao que deseja selecionar, 1, 2, 3, 4, 5 ou 6: ");
		scanf("%d", & B );

		switch (B) {
			case 1:
				printf("\nOpcao escolhida: Celcius para Fahrenheit\n");
				printf("\nDigite o valor em Celcius: ");
				scanf("%f",& cel);
				fah= (cel* 9/5) + 32;
				printf("\n%.2fC em Fahrenheit = %.2fF\n",cel,fah);
				break;

			case 2:
				printf("\nOpcao escolhida: Celcius para Kelvin\n");
				printf("\nDigite o valor em Celcius: ");
				scanf("%f",& cel);
				kel= cel + 273;
				printf("\n%.2fC em Kelvin = %.2fK\n",cel,kel);
				break;

			case 3:
				printf("\nOpcao escolhida: Fahrenheit para Celcius\n");
				printf("\nDigite o valor em Fahrenheit: ");
				scanf("%f",& fah);
				cel= (fah - 32) * 5/9;
				printf("\n%.2fF em Celcius = %.2fC\n",fah,cel);
				break;

			case 4:
				printf("\nOpcao escolhida: Fahrenheit para Kelvin\n");
				printf("\nDigite o valor em Fahrenheit: ");
				scanf("%f",& fah);
				kel= (fah - 32) * 5/9 + 273;
				printf("\n%.2fF em Kelvin = %.2fK\n",fah,kel);
				break;

			case 5:
				printf("\nOpcao escolhida: Kelvin para Celcius\n");
				printf("\nDigite o valor em Kelvin: ");
				scanf("%f",& kel);
				cel= kel - 273;
				printf("\n%.2fK em Celcius = %.2fC\n",kel,cel);
				break;

			case 6:
				printf("\nOpcao escolhida: Kelvin para Celcius\n");
				printf("\nDigite o valor em Kelvin: ");
				scanf("%f",& kel);
				fah= (kel- 273) * 9/5 + 32 ;
				printf("\n%.2fK em Fahrenheit = %.2fF\n",kel,fah);
				break;

			default:
				printf("\nOpcao escolhida: invalida\n");
				break;
		}
		printf("\nDesejaconverter mais uma temperatura? S/N: ");
		scanf("%s",&palavra);
	}

	system("pause");
	return 0;
}