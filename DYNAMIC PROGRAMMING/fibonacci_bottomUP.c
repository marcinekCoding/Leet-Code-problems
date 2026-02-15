#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int tablica[MAX];

void init_tab(int tablica[]) 
{
        tablica[0]=0;
        tablica[1]=1;

        for(int i=2;i<MAX;i++) 
        {
            tablica[i]=tablica[i-1]+tablica[i-2];
        }
}

int fibonacci(int n)
{
    if (n < 0 || n >= MAX) return -1; // Kod błędu
    return tablica[n];
}
int main() {
    
    init_tab(tablica);
    printf("Liczba finonacciego to: %d",fibonacci(33));

    return 0;
}