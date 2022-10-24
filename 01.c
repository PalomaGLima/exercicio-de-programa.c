#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3 = 0;
    printf("digite dois numeros\n");
    scanf("%d %d", &n1, &n2);

    n3 = n1;
    n1 = n2;
    n2 = n3;

    printf("%d e %d\n", n1, n2);

    return 0;
}
