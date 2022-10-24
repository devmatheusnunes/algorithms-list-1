#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1;
    float raiz;
    
    printf("Digite um número:\n\n");
    scanf("%d",&n1);
    if( n1%2 == 0 && n1 > 0){
        raiz = sqrt(n1);
        printf("\nEste número é par e sua raiz quadrada é: %.2f\n\n",raiz);
    }else{
        printf("\nEsse número não é par.\n\n");
    }
    system("pause");
    return 0;
}