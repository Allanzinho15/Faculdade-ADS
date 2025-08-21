#include <stdio.h>

int main()
{

    int index;

    char *Nomesdoalunos[3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}

    };

    printf("Digite o número de aluno que queira ver as notas.....\n");
    printf("Para o aluno 0, digite 0 \n");
    printf("Para o aluno 1, digite 1 \n");
    printf("Para o aluno 2, digite 2 \n");

    scanf("%d", &index);

    printf("As notas do %s são: %s , %s ... \n", Nomesdoalunos[index][0], Nomesdoalunos[index][1], Nomesdoalunos[index][2]);

    return 0;
}