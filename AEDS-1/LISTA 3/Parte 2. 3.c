#include <stdio.h>

int main()
{
    int l;
    int f = 0, fn = 1;
    
    printf("Digite quantos elementos da serie Fibonacci voce deseja ver: ");
    scanf("%d", &l);
    
    printf("1\n");
   
   for(int i = 1; i < l; i++)
   {
       fn = fn + f;
       f = fn - f;
       
       printf("%d\n", fn);
   }
   
    return 0;
}
