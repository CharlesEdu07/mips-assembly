#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mem_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i = 0;
    int result = 0;

    while (i < 10)
    {
        result += mem_array[i];
        i++;
    }

    printf("Resultado: %d\n", result);

    printf("Fim do programa");

    return 0;
}