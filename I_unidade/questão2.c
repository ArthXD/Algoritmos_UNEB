#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;
    float a, b, c;
    
        printf("digite o valor de i:\n");
    scanf("%d", &i);
        printf("digite o valor de a:\n");
    scanf("%f", &a);
        printf("digite o valor de b:\n");
    scanf("%f", &b);
        printf("digite o valor de c:\n");
    scanf("%f", &c);
    
    switch(i){
        case 1:
        if(a>=b && a>=c){
            
            if(b>c)
            printf("%f %f %f \n", c, b, a);
            else
            printf("%f %f %f \n", b, c, a);
        }
        
         if(b>a && b>c){
            
            if(a>c)
            printf("%f %f %f \n", c, a, b);
            else
            printf("%f %f %f \n", a, c, b);
        }
        
         if(c>b && c>a){
            
            if(a>b)
            printf("%f %f %f \n", b, a, c);
            else
            printf("%f %f %f \n", a, b, c);
        }
        
        break;
        case 2: 
        if(a>=b && a>=c){
            
            if(b>c)
            printf("%f %f %f \n", a, b, c);
            else
            printf("%f %f %f \n", a, c, b);
        }
        
         if(b>a && b>c){
            
            if(a>c)
            printf("%f %f %f \n", b, a, c);
            else
            printf("%f %f %f \n", b, c, a);
        }
        
         if(c>b && c>a){
            
            if(a>b)
            printf("%f %f %f \n", c, a, b);
            else
            printf("%f %f %f \n", c, b, a);
        }
        
        break;
        
        case 3:
        if(a>=b && a>=c)
            printf("%f %f %f \n", b, a, c);
        else{
            if(b>c && b>a)
            printf("%f %f %f \n", a, b, c);
            else
            printf("%f %f %f \n", b, c, a);        }
    
        

        
    }
    
 
        
    
    
    
    return 0;
    
    
}