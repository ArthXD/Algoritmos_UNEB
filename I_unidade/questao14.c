#include <stdio.h>

int main(){
	
	int termos;
	int prox, primeiro=0,segundo=1;
	
	printf("Digite o numero de termos: ");
	scanf("%d", &termos);
	
	for(int i=1;i<=termos;i++){
		prox = segundo+primeiro;
		primeiro = segundo;
		segundo=prox;
		
		printf("%d ", prox);
	}
	
	return 0;
}