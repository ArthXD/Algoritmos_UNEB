#include <stdio.h>
#include <stdlib.h>

int main(){
    	//for(inicio; condicao; calculo)
    int num, soma = 0;
    
    printf ("digite um numero:  ");
    scanf("%d", &num);
    //enquanto o resto de da divisão de i for 0 o número é divisivel, portanto deve ser somado
    //declarar o valor das variáveis que estão no laço de repetição
    for (int i=1; i<num; i++){
        if(num %i== 0)
        soma = soma + i;
    }
    
    if(soma== num)
    printf("o numero %d é perfeito", num);
    else 
    printf("o numero %d nao e perfeito", num);
    
    return 0;
        
}