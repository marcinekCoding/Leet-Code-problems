#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int tablica[MAX];

void init_tab(int tablica[])
{
    for (int i = 0; i < MAX; i++)
    {
        tablica[i] = -1;
    }
}

int fibonacci(int n)
{
    printf("sprawdzam dla n=%d\n", n);
    if (tablica[n] != -1)
    {
        printf("znalazlem juz w tablcy\n");
        return tablica[n];
    }

    if (n <= 1)
    {
        tablica[n] = n;
        return n;
    }

    tablica[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return tablica[n];
}

int main()
{
    init_tab(tablica);
    printf("%d\n", fibonacci(5));
    // printf("%d\n",fibonacci(5));
    printf("%d\n", fibonacci(6));
    printf("%d\n", fibonacci(5));

    return 0;
}