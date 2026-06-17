//MVC-73

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-73 - Média dos elementos                      *");
printf("\n**************************************************************\n");


    int v[5];
    int soma = 0;
    float media;
    int acima = 0;
    int i;
    
    printf("DIGITE 5 NUMEROS:  ");
    
    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    media = soma / 5.0;

    for(i = 0; i < 5; i++) {
        if(v[i] > media) {
            acima++;
        }
    }

    printf("Media = %.2f\n", media);
    printf("Acima da media = %d\n", acima);

    return 0;
}



