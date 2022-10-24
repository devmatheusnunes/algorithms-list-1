#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float n, r;

    printf("Dê o valor da venda:\n\n");
    scanf("%f",&n);
    if ( n >= 100000 ){
        r = 700 + (700 * 1.6);
        printf("Sua comissão é: %.2f\n\n",r);
    }else if ( n < 100000 && n >= 80000){
        r = 650 + (650 * 1.4);
        printf("Sua comissão é: %.2f\n\n",r);
    }else if ( n < 80000 && n >= 60000){
        r = 600 + (600 * 1.4);
        printf("Sua comisão é: %.2f\n\n",r);
    }else if ( n < 60000 && n >= 40000){
        r = 550 + (550 * 1.4);
        printf("Sua comisão é: %.2f\n\n",r);
    }else if ( n < 40000 && n >= 20000){
        r = 500 + (500 * 1.4);
        printf("Sua comisão é: %.2f\n\n",r);
    }else if ( n < 20000){
        r = 400 + (400 * 1.4);
        printf("Sua comisão é: %.2f\n\n",r);
    }
    system("pause");
    return 0;
}
