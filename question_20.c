#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra;

    printf("Digite uma letra:\n");
    scanf("%c",&letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("\nEssa letra é uma vogal.\n\n");
    }
    else if(letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && isalpha(letra)){
        printf("\nEssa letra é consoante.\n\n");
    }else{
        printf("\nEsse caractere é inválido.\n\n");
    }
    system("pause");
    return 0;
}