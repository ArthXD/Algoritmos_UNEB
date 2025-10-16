#include <stdio.h>

int main()
{
    
        float n1, n2, n3, np1, np2, np3; 
        float mp;
    
    printf ("informe o primeiro valor:\n");
    scanf ("%f", &n1);
    printf ("informe o segundo valor:\n");
    scanf ("%f", &n2);
    printf ("informe o terceiro valor:\n");
    scanf ("%f", &n3);
    
        if (n1>=6)
        {
            np1 = 5;
            
        }
        
        else{
            
            np1 = 2.5;
        }
         if (n2 >=6)
        {
            np2 = 5;
            
        }
        
        else{
            
            np2 = 2.5;
        }
         if (n3>=6)
        {
            np3 = 5;
            
        }
        
        else{
            
            np3 = 2.5;
        }
        
       mp = (n1*np1 + n2*np2 + n3*np3)/(np1+np2+np3);
        
            printf("a média ponderada dos números é: %f", mp);
        
        return 0;
    
    
}