#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numero, i, soma=0;
	
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for(i=(numero - 1);i>=0;i--){
		soma =soma + i; 
	}
	
	printf("resultado = %d", soma);
    
    
    
    return 0;
}
