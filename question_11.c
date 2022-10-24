#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n, r;
    
    printf("Digite um valor e saiba se ele é divisivel por 3 ou 5 mas não pelos dois juntos!\n\n");
    scanf("%d",&n);
    if((n%3 == 0 || n%5 ==0) && (n%3 != n%5)){
        printf("\n\nEste número é divisivel por 3.\n\n");
    }else{
        printf("\n\nO valor é divisivel ou não por 3 e 5 ao mesmo tempo.\n\n");
    }
    system("pause");
    return 0;
}