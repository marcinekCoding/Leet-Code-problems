#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0) return "";
    
    int is_longer = 0;
    int min_index = 0;
    int min_length = strlen(strs[0]);
    int koncowy = 0;

    // sprawdzam ktory wyraz jest najkrotszy, dostaje jego index
    for (int i = 0; i < strsSize; i++)
    {
        if (strlen(strs[i]) < min_length)
        {
            min_length = strlen(strs[i]);
            min_index = i;
        }
    }

    char *wynik = malloc(min_length+1);
    wynik[0] = '\0';
    int i=0;
    for (i=0; i < min_length; i++)
    {
        char pierwsza_litera = strs[min_index][i];
        for (int j = 0; j < strsSize; j++) // spawdzam i-ty wyraz w koljnych wyrazach
        {
            if (strs[j][i] != pierwsza_litera)
            { // nie zgadza sie
                wynik[i] = '\0';
                return wynik;
            }
        }
        wynik[i] = pierwsza_litera; // jesli we wszystkixh wyrazach sie zgadza
    }
    wynik[i] = '\0';
    return wynik;
}

int main()
{
    char *strs[] = {"flower", "flow", "flight"};
    printf("%s", longestCommonPrefix(strs, 3));
    return 0;
}