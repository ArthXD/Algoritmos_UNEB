#include <stdio.h>
#include <stdlib.h>

int main() {
	//for(inicio, condicao,calculo)
	int fat, num, res=1;

	printf ("digite o numero que deseja calcular o fatorial: \n");
	scanf ("%d", &fat);


		for(num = 1; num<=fat; num++) {

			res=res*num;

		}


	printf("%d", res);




	return 0;
}
