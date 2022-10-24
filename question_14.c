#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char eq;
    int x, y, z;
    float pon, h, ari;

    printf("Digite três números positivos: correspondente a x, y e z:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    printf("Escolha entre as equações a seguir:\n(a): Ponderada = (x + 2y + 3z)/6\n(b): Harmônica = 3/((1/x)+(1/y)+(1/z))\n(c): Aritmética = (x+y+z)/3\n\n");
    scanf(" %c",&eq);
    if(eq == 'a'){
        pon = (x + (2*y)+ (3*z))/6;
        printf("O resultado é: %.2f\n\n",pon);
    }
    else if(eq == 'b'){
        h = 3/ ((1.0/x)+(1.0/y)+(1.0/z));
        printf("O resultado é:%.2f\n\n",h);
    }
    else if(eq == 'c'){
        ari = (x+y+z)/3;
        printf("O resultado é:%.2f\n\n",ari);
    }
    system("pause");
    return 0;
}
