/*Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números
ímpares lidos..*/


#include <stdio.h> 
#include <stdlib.h>


	int main() {
	int i, num, pares = 0, impares = 0;
	for (i = 1; i <= 10; i++) {
	printf("Digite o %dº número: ", i);
	scanf("%d", &num);
	if (num % 2 == 0)
	pares++;
	else
	impares++;
	}
	printf("Pares: %d\n", pares);
	printf("Ímpares: %d\n", impares);

	

 	system ("Pause");	
	return 0;
}

