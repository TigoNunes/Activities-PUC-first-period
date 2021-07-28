#include <stdio.h>

int main()
{
    // variaveis
    
    int cd; //codigo da disciplina 
    float ta, tf; // total de aulas, total de faltas,
    float ne; // notas de exercicios e trabalhos(25);
    float p1, p2, p3; // notas das provas, 25 cada;
    float pr; // nota reavaliaçã;
    float nt; // nota total;
    
    printf("Digite o código da disciplina (apenas numeros inteiros): ");
    scanf("%d", &cd);
    
    printf("Digite o total de aulas no semestre: ");
    scanf("%f", &ta);
    
    printf("Digite o total de faltas no semestre: ");
    scanf("%f", &tf);
    
    printf("Notas de exercicios e trabalhos(25 pts): ");
    scanf("%f", &ne);
    
    printf("Nota da avaliacao 1(25 pts): ");
    scanf("%f", &p1);
    printf("Nota da avaliacao 2(25 pts): ");
    scanf("%f", &p2);
    printf("Nota da avaliacao 3(25 pts): ");
    scanf("%f", &p3);
    
    // calculos
    if(tf > ta - (ta * 0.75))
    {
        printf("Reprovado");
    }
    else
    {
        nt = ne + p1 + p2 + p3;
        
        if(nt >= 60)
        {
            printf("Aprovado");
        }
        else
        {
            printf("Nota da reavaliacao: ");
            scanf("%f", &pr);
            
            if(p1 < p2 && p3)
            {
                nt = ne + pr + p2 + p3;
                if(nt >= 60 )
                {
                    printf("Aprovado");
                }
                else {
                    printf("Reprovado");
                }
            }
            else if(p2 < p1 && p3)
            {
                nt = ne + p1 + pr + p3;
                if(nt >= 60) 
                {
                    printf("Aprovado");
                }
                else 
                {
                    printf("Reprovado");
                }
            }
            else if(p3 < p1 && p2)
            {
                nt = ne + p1 + p2 + pr;
                if(nt >= 60) 
                {
                    printf("Aprovado");
                }
                else 
                {
                    printf("Reprovado");
                }
            }
        }
    }
    return 0;
}




