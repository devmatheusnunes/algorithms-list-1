#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char L;

    printf(" Digite uma letra de 'a' à 'l' e veja qual mês sai!\n");
    scanf("%c",&L);
    if (L >= 'a' && L <= 'l'){
        switch (L){
            case 'a':
                printf("Janeiro, este mês possui 30 dias.\n\n");
                break;
            case 'b':
                printf("Fevereiro, este mês possui 28 dias. Porém em periodos de quatro em quatro anos ele possui 29 dias.\n\n");
                break;
            case 'c':
                printf("Março, este mês possui 31 dias.\n\n");
                break;
            case 'd':
                printf("Abril, este mês possui 30 dias.\n\n");
                break;
            case 'e':
                printf("Maio, este mês possui 31 dias.\n\n");
                break;
            case 'f':
                printf("Junho, este mês possui 30 dias.\n\n");
                break;
            case 'g':
                printf("Julho, este mês possui 31 dias.\n\n");
                break;
            case 'h':
                printf("Agosto, este mês possui 31 dias.\n\n");
                break;
            case 'i':
                printf("Setembro, este mês possui 30 dias.\n\n");
                break;
            case 'j':
                printf("Outubro, este mês possui 31 dias.\n\n");
                break;
            case 'k':
                printf("Novembro, este mês possui 30 dias.\n\n");
                break;
            case 'l':
                printf("Desembro, este mês possui 31 dias.\n\n");
                break;
        }
    }else if( L > 'l'){
        printf("Desculpe, essa letra não corrensponde a nenhum mês.\n\n");
    }
    system("pause");
    return 0;
}
