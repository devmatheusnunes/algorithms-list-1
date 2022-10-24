#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float G, R;
    
    printf("Digite o valor em radiano:\n\n");
    scanf("%f",&R);
    printf("\nConvertendo em graus...\n\n");
    G = (180/3.14)*R;
    printf("\nO resultado é:\n\n%.4f\n\n",G);
    system("pause");
    return 0;
}
