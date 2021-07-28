#include <stdio.h>

int main()
{
    // variante 'voto'
    // contabilizar cada voto - (1 a 6)
    // porcentagem de votos nulos = votos nulos * 100 / numero de outros votos
    // porcentagem de votos branco = votos branco * 100 / numero de outros votos
    // Caso 1 < voto > 6 "mensagem de erro"
    // para finalizar voto = 0
    
    int voto = 1;
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0; 
    int vn = 0, vb = 0; // vn - votos nulos, vb - votos em bramco
    float pn, pb;
    
    while(voto != 0)
    {
        printf("Digite o seu voto: ");
        scanf("%d", &voto);
        
        if(voto == 1)
        {
            v1++;
        }
        else if(voto == 2)
        {
            v2++;
        }
        else if(voto == 3)
        {
            v3++;
        }
        else if(voto == 4)
        {
            v4++;
        }
        else if(voto == 5)
        {
            vn++;
        }
        else if(voto == 6)
        {
            vb++;
        }
        else
        {
            printf("Esse codigo e invalido\n");
        }
    }
    printf("Total de votos para o candidato 1: %d\n", v1);
    printf("Total de votos para o candidato 2: %d\n", v2);
    printf("Total de votos para o candidato 3: %d\n", v3);
    printf("Total de votos para o candidato 4: %d\n", v4);
    
    pn = (vn * 100)/(v1 + v2 + v3 + v4 + vn + vb);
    pb = (vb * 100)/(v1 + v2 + v3 + v4 + vn + vb);
    
    printf("Porcentagem de votos nulos: %.2f\n", pn);
    printf("Porcentagem de votos nulos: %.2f\n", pn);

    return 0;
}
