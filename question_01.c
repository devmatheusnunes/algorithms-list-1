#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3;
    printf("Digite três números:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    if (n2 <= n1 && n3 <= n1 && n3 <= n2){
        printf("\nNúmeros: %d, %d, %d.\n\n",n3,n2,n1);
    }
    else if (n3 <= n1 && n2 <=  n1 && n2 <= n3){
        printf("\nNúmeros: %d, %d, %d.\n\n",n2,n3,n1);
    }
    else if(n1 <= n2 && n3 <= n2 && n3 <= n1){
        printf("\nNúmeros: %d, %d, %d.\n\n",n3,n1,n2);
    }
    else if(n3 <= n2 && n1 <= n2 && n1 <= n3){
        printf("\nNúmeros: %d, %d, %d.\n\n",n1,n3,n2);
    }
    else if(n1 <= n3 && n2 <= n3 && n2 <= n1){
        printf("\nNúmeros: %d, %d, %d.\n\n",n2,n1,n3);
    }
    else if( n2 <= n3 && n1 <= n3 && n1 <= n2){
        printf("\nNúmeros: %d, %d, %d.\n\n",n1,n2,n3);
    }
    system("pause");
    return 0;
}
