#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int nv, nt, rv, rt;
    
    printf("Bem vindo a reforma Real!\nPrecisamos da sua idade e seus tempos em anos de trabalho.\nDigite sua idade:\n");
    scanf("%d",&nv);
    printf("\nDigite seu tempo de trabalho:\n");
    scanf("%d",&nt);
    if (nv >= 65 && nt >= 30){
        printf("\nParabéns você está apto para se aposentar.\n\n");
    }
    else if(nv >= 60 && nt >= 35){
        printf("\nParabéns você está apto para se aposentar.\n\n");
    }
    else if(nv <= 60 || nt <= 30){
        rv = (60 - nv);
        rt = (30 - nt);
        if (rv < 0 && rt >= 0){
            printf("\nVocê ainda não está apto pra se aposentar.\nVocê falta %d de trabalho para poder se aposentar.\n\n",rt);
        }
        else if (rv >= 0 && rt <0){
            printf("\nVocê ainda não está apto pra se aposentar.\nVocê falta %d anos de vida para poder se aposentar.\n\n",rv);
        }
        else if (rv >= 0 && rt >=0){
            printf("\nVocê ainda não está apto pra se aposentar.\nVocê falta %d anos de vida e %d de trabalho para poder se aposentar.\n\n",rv,rt);
        }
    }
    system("pause");
    return 0;
}