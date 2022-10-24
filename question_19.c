#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int dd, mm, aa;
    
    printf("Digite o dois valores inteiros de dois algarismos e um valor intiro de quatro algarismos:\n\n");
    scanf("%d",&dd);
    scanf("%d",&mm);
    scanf("%d",&aa);
    if (dd >= 1 && dd <= 30){
        if(mm >= 4 && mm <= 12 && (mm != 5) && (mm !=7) && (mm !=8) && (mm != 10) && (mm != 12)){
            switch (mm){
                case 4:
                printf("Abril, %d de %d.\n\n",dd,aa);
                break;
                case 6:
                printf("Junho, %d de %d.\n\n",dd,aa);
                break;
                case 9:
                printf("Setembro, %d de %d.\n\n",dd,aa);
                break;
                case 11:
                printf("Novembro, %d de %d.\n\n",dd,aa);
                break;
            }
        }
    }
    if (dd >= 1 && dd <= 31){
        if(mm >= 1 && mm <= 12 && (mm != 2) && (mm != 4) && (mm != 6) && (mm != 9) && (mm != 11)){
            switch (mm){
                case 1:
                    printf("Janeiro, %d de %d\n\n",dd,aa);
                    break;
                case 3:
                    printf("Março, %d de %d",dd,aa);
                    break;
                case 5:
                    printf("Maio, %d de %d",dd,aa);
                    break;
                case 7:
                    printf("Julho, %d de %d",dd,aa);
                    break;
                case 8:
                    printf("Agosto, %d de %d",dd,aa);
                    break;
                case 10:
                    printf("Outubro, %d de %d",dd,aa);
                    break;
                case 12:
                    printf("Desembro, %d de %d",dd,aa);
                    break;
            }
        }
    }
    if(dd >=1 && dd <= 28){
        if (mm == 2){
            printf("Fevereiro, %d de %d",dd,aa);
        }
    }
    system("pause");
    return 0;
}
