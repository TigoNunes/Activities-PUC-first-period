#include <stdio.h>

int main()
{
    // variavel do sexo homem
    // variavel do sexo mulher
    // variavel se gostou
    // variavel se não gostou
    // variavel porcentagem = homem que respondeu não * 100 / 10 
    
    int sexo, gostou;
    int sim = 0, nao = 0;
    int mulher_gostou = 0, homem = 0;
    float homem_n_gostou = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("De o sexo e se gostou\n");
        printf("1 - Masculino \n2 - Feminino\n");
        scanf("%d", &sexo);
        
        printf("1 - Gostou \n2 - Nao gostou\n");
        scanf("%d", &gostou);
        
        if(sexo == 1 && gostou == 2)
        {
            homem = homem + 1;
            homem_n_gostou++;
            nao = nao + 1;
        }
        else if(sexo == 1 && gostou == 1)
        {
            sim = sim + 1;
            homem = homem + 1;
        }
        else if(sexo == 2 && gostou == 2)
        {
            nao = nao + 1;
        }
        else if(sexo == 2 && gostou == 1)
        {
            mulher_gostou++;
            sim = sim + 1;
        }
    }
    printf("Numero de pessoas que responderam sim: %d\n", sim);
    printf("Numero de pessoas que responderam nao: %d\n", nao);
    printf("Numero de mulheres que responderam sim: %d\n", mulher_gostou);
    printf("Percentagem de homens que responderam nao: %.2f\n", (homem_n_gostou * 100)/homem);

    return 0;
}


