#include <stdio.h>



int main() {
    int quantidade_alunos;
    int aprovados = 0, exame_final = 0, reprovados = 0;

    // Solicita ao usuário a quantidade de alunos
    printf("Quantidade de alunos na turma:");
    scanf("%d", &quantidade_alunos);

    // Loop para cada aluno
    for (int i = 1; i <= quantidade_alunos; ++i) {
        float nota_av1, nota_av2, media;

        // Solicita ao usuário as notas de Av1 e Av2 para cada aluno
        printf("Nota de Av1 do aluno %d: ", i);
        scanf("%f", &nota_av1);
        printf("Nota de Av2 do aluno %d: ", i);
        scanf("%f", &nota_av2);

        // Calcula a média do aluno
        media = (nota_av1 + nota_av2) / 2;

        // Classifica o aluno com base na média
        if (media >= 6) {
            aprovados++;
        } else if (media >= 4) {
            exame_final++;
        } else {
            reprovados++;
        }
    }

    // Imprime a quantidade de alunos aprovados, em exame final e reprovados
    printf("\nQuantidade de alunos:\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Exame final: %d\n", exame_final);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}
