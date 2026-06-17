//MVC-64

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-64 - Contagem regressiva usando --            *");
printf("\n**************************************************************\n");

    int v[6];
    int pares = 0;
    int i;
    
    for(i = 0; i < 6; i++) {
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0) {
            pares++;
        }
    }

    printf("Pares: %d\n", pares);

    return 0;
}


