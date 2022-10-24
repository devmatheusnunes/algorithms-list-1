#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float bmaior, bmenor, altura, area;
    
    printf("Insira os valores:\nBase maior:\n");
    scanf("%f",&bmaior);
    printf("\nBase menor:\n");
    scanf("%f",&bmenor);
    printf("\nAltura:\n");
    scanf("%f",&altura);
    if (bmaior > 0 && bmenor > 0){
        area = ((bmaior + bmenor)*altura)/2;
        printf("\nA área é: %.2f\n\n",area);
    }
    else if (bmaior == 0 && bmenor ==0){
        printf("A área não pode ser calculada devido ao valores digitados.");
    }
    system ("pause");
    return 0;
}