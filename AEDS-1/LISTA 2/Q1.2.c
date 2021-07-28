#include <stdio.h>

int main()
{
    float a, b, c, d;
    printf("Descubra se o aluno foi aprovado ou reprovado em uma materia.\n");
    printf("Digite as notas que o aluno tirou nos 4 exames feitos.\n");
    
    printf("Exame 1: ");
    scanf("%f", &a);
    
    printf("Exame 2: ");
    scanf("%f", &b);
    
    printf("Exame 3: ");
    scanf("%f", &c);
    
    printf("Exame 4: ");
    scanf("%f", &d);
    
    //compilação dos dados, media aritimetica simples
    float Ms;
    Ms=(a + b + c+ d)/4;
    
    printf("A media aritimetica da notas foi: %.2f. ", Ms);
    
    if(Ms >= 7) {
        printf("O aluno foi aprovado");
    } else if(Ms < 7) {
        printf("O aluno foi reprovado");
    }
    
    return 0;
}
