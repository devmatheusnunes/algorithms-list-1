#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float n1, area;
    
    printf("Escreva o raio:\n");
    scanf("%f",&n1);
    if (n1>0){
        printf("\nCauculando...\n");
        area=(n1*n1)* 3.141592;
        printf("\nA área do circulo é:\n\n%.4f\n\n",area);
    }
    else{
        printf("\nA área não pode ser calculada pois o valor é negativo.\n\n");
    }
    system("pause");
    return 0;
}