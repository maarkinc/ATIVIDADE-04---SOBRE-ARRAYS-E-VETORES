//MVC-70

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-70 - Dividindo elementos usando /=            *");
printf("\n**************************************************************\n");


int v[10];
int maior;
int i;

printf("DIGITE 10 NUMEROS:  ");

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    maior = v[0];

    for(i = 1; i < 10; i++) {
        if(v[i] > maior) {
            maior = v[i];
        }
    }

    printf("Maior = %d\n", maior);

    return 0;
}






