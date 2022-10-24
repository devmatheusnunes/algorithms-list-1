#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2;
    
    printf("Digite dois números:\n\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    if ( n1 > n2 ){
        printf("\n\nO primeiro número é maior.\n\n%.2f\n\n", n1);
    }
    else if (n1 < n2){
        printf("\n\nO segundo número é maior.\n\n%.2f\n\n", n2);
    }
    else if (n1 == n2){
        printf("\n\nOs números são iguais.\n\n%.2f, %.2f\n\n", n1,n2);
    }
    system("pause");
    return 0;
}
