#include <stdio.h>

float calcularPesoIdeal(float altura, char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        return (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido.\n");
        return 0;
    }
}

int main() {
    float altura;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    float pesoIdeal = calcularPesoIdeal(altura, sexo);
    if (pesoIdeal != 0) {
        printf("O peso ideal para uma pessoa de %.2f metros de altura e sexo %c é %.2f quilogramas.\n", altura, sexo, pesoIdeal);
    }

    return 0;
}


   
   
   
