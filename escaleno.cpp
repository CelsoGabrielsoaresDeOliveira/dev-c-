#include <stdio.h>
#include <stdlib.h>
int main(){
	int lado1,lado2,lado3;
 printf("digite o lado 1:\n");
 scanf("%d",&lado1);
  printf("digite o lado 2:\n");
 scanf("%d",&lado2);
  printf("digite o lado 3:\n");
 scanf("%d",&lado3);
if (lado1 == lado2 && lado2 == lado3) {
        printf("Tri�ngulo equil�tero.\n");
    } else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
        printf("Tri�ngulo escaleno.\n");
    } else {
        printf("Tri�ngulo is�sceles.\n");
    }
 system("pause");
 
 	
}







