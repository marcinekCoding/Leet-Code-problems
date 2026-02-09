#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    int is_longer = 0;
    int min_index = 0;
    int min_length = 100;
    char *wynik=malloc(100);
    int koncowy=0;

    // sprawdzam ktory wyraz jest najkrotszy, dostaje jego index
    for (int i = 0; i < strsSize; i++)
    {
        if (strlen(strs[i]) < min_length)
        {
            min_length = strlen(strs[i]);
            min_index = i;
        }
    }

    for (int i = 0; i < min_length; i++)
    {
        char pierwsza_litera = strs[min_index][i];
        for (int j = 0; j < strsSize; j++) //spawdzam i-ty wyraz w koljnych wyrazach
        {
            if (strs[j][i] != pierwsza_litera) //nie zgadza sie 
                return wynik;
        }
        wynik[i] = pierwsza_litera; //jesli we wszystkixh wyrazach sie zgadza
        koncowy=i;
    }
    wynik[koncowy+1]='\0';
    return wynik;
}

int main()
{
    char *strs[] = {"flower", "flow", "flight"};
    printf("%s",longestCommonPrefix(strs,3));
    return 0;
}