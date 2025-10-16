#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[100];
	
	printf("Digite a palavra: ");
	scanf("%s", palavra);
	
	int tamanho = strlen(palavra);
//	strlen comenado de string para contar os digitos
	
	char palavraInvertida[tamanho];
	
	for(int i=0;i<tamanho;i++){
		palavraInvertida[i] = palavra[tamanho-1-i];
	}
	
	palavraInvertida[tamanho]='\0';
	
//	printf("Palavra ORIGINAL: %s\nPalavra INVERTIDA: %s\n", palavra,palavraInvertida);
		
	if(strcmp (palavra, palavraInvertida) == 0){
	   printf("EH PALINDROMO");
	} else {
	    printf("NAO EH PALINDROMO");
	}
	return 0;
}