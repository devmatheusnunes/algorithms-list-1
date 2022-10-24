#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int ac,ad, res;
    
    printf("Digite o ano que se casaram e o ano atual:\n\n");
    scanf("%d",&ac);
    scanf("%d",&ad);
    res = ad - ac;
    if ( res >= 25 && res < 50 ){
        printf("\n25 anos – Bodas de prata.Seu tempo de casado é %d anos.\n\n",res);
    }else if( res >= 50 && res < 75 ){
        printf("\n50 anos – Bodas de ouro.Seu tempo de casado é %d anos.\n\n",res);
    }else if( res >= 75 ){
        printf("\n75 anos – Bodas de diamante.Seu tempo de casado é %d anos.\n\n",res);
    }else if( res < 25){
        printf("\nSeu tempo de casado é %d anos.\n\n",res);
    }
    system("pause");
    return 0;
}