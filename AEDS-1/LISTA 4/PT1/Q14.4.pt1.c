#include <stdio.h>

int main()
{
    int alunos;
    float notas, media = 0;
    
    printf("Sr.Usuario, digite o numero de alunos de uma turma: ");
    scanf("%d", &alunos);
    
    for(int i = 1; i <= alunos; i++)
    {
        printf("\nDigite a nota do aluno %d: ", i);
        scanf("%f", &notas);
        
        media = media + notas;
    }
    printf("\nA media aritmetica destas notas e: %.2f", media / alunos);

    return 0;
}
