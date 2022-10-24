#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, r;
    char op;
    
    printf("Bem Vindo a calculadora!\n\nEscolha operador:\nAdição = a\nSubtração = s\nMultiplicação = m\nDivisão = d\n\n");
    scanf("%c",&op);
    if (op == 'a'){
        printf("\n\nDigite os valores que deseja operar:\n\n");
        scanf("%f",&n1);
        scanf("%f",&n2);
        r = n1 + n2;
        printf("\n\nO resultado é: %.2f\n\n",r);
    }
    else if (op == 's'){
        printf("\n\nDigite os valores que deseja operar:\n\n");
        scanf("%f",&n1);
        scanf("%f",&n2);
        r = n1 - n2;
        printf("\n\nO resultado é: %.2f\n\n",r);
    }
    else if(op == 'm'){
        printf("\n\nDigite os valores que deseja operar:\n\n");
        scanf("%f",&n1);
        scanf("%f",&n2);
        r = n1 * n2;
        printf("\n\nO resultado é: %.2f\n\n",r);
    }
    else if(op == 'd'){
        printf("\n\nDigite os valores que deseja operar:\n\n");
        scanf("%f",&n1);
        scanf("%f",&n2);
        r = n1 / n2;
        printf("\n\nO resultado é: %.2f\n\n",r);
    }
    system("pause");
    return 0;
}