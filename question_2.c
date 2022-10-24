#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float m, k;
    
    printf("Digite a distância em milhas:\n");
    scanf("%f",&m);
    printf("\nConvertendo para quilômetros...\n\n");
    k = 1.61*m;
    printf("\nA distância em quilômetros e:\n\n%4f\n\n",k);
    system("pause");
    return 0;
}