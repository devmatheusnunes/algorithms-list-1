#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    
    printf("Digite um valor de 1 a 7:\n\n");
    scanf("%d",&n);
    if (n >= 1 && n <= 7){
        switch (n){
            case 1:
                printf("Domingo.\n\n");
                break;
            case 2:
                printf("\nSegunda.\n\n");
                break;
            case 3:
                printf("\nTerça.\n\n");
                break;
            case 4:
                printf("\nQuarta.\n\n");
                break;
            case 5:
                printf("\nQuinta.\n\n");
                break;
            case 6:
                printf("\nSexta.\n\n");
                break;
            case 7:
                printf("\nSábado.\n\n");
                break;
        }
    }
    else if (n < 1 || n > 7){
        printf("\nNúmero inválido.\n\n");
    }
    system("pause");
    return 0;
}
