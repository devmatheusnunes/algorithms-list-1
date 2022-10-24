#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float km, L, kml;

    printf("Digite quantos quilômetros você rodou com seu veículo e seu consumo em litros de combustível:\n\n");
    scanf("%f",&km);
    scanf("%f",&L);
    kml = km / L;
    if ( kml < 8 ){
        printf("\n\nSua média foi: %.2f\nVenda o carro ou compre um posto!\n\n",kml);
    }
    else if( kml >= 8 && kml <= 14){
        printf("\n\nSua média foi: %.2f\nEconômico!\n\n",kml);
    }
    else if( kml > 14){
        printf("\n\nSua média foi:%.2f\nSuper econômico!\n\n",kml);
    }
    system("pause");
    return 0;
}