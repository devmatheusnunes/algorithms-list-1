#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float a, b, h, soma, hip;

    printf("Digite o valor de 'a' do triângulo:\nATENÇÃO: Se não haver valor digite'0'.\n\n");
    scanf("%f",&a);
    printf("Digite o valor de 'b' do triângulo:\nATENÇÃO: Se não haver valor digite.'0'.\n\n");
    scanf("%f",&b);
    if (a == 0 || b == 0){
        printf("\nDigite o valor de 'h' do triângulo:\n\n");
        scanf("%f",&h);
        soma = (a*a)+(b*b);
        hip = sqrt(soma);
        printf("\nO resultado é:%.2f\n\n",hip);
    }
    if (a != 0 && b != 0){
        soma = (a*a)+(b*b);
        hip = sqrt(soma);
        printf("\nO resultado é:%.2f\n\n",hip);
    }
    system("pause");
    return 0;
}