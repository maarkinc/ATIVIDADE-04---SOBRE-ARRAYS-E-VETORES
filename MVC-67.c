//MVC-67

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-67 - Somando 10 aos elementos usando +=       *");
printf("\n**************************************************************\n");

    int v[5];
    int i;
    
     printf("DIGITE 5 NUMEROS:  ");
     
    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 5; i++) {
        v[i] += 10;
        printf("%d ", v[i]);
    }

    return 0;
}





