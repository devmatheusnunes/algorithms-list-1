#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float n;
    
    printf("Escreva a nota:\n");
    scanf("%f",&n);
    if (n <= 10 && n >= 9){
        printf("\nA\n\n");
    }else if(n < 9 && n >= 7){
        printf("\nB\n\n");
    }else if(n < 7 && n >= 5){
        printf("\nC\n\n");
    }else if(n < 5 && n >= 2.5){
        printf("\nD\n\n");
    }else if( n < 2.5){
        printf("\nE\n\n");
    }
    system("pause");
    return 0;
}
