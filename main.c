#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char kelime1[100], kelime2[100];

    printf("1. kelimeyi gir: ");
    scanf("%s", kelime1);

    printf("\n2. kelimeyi gir: ");
    scanf("%s", kelime2);

    //esitse
    if (strcmp(kelime1, kelime2) == 0)
    {
        printf("\n Kelime aynidir.\n");
    }

    //esit degilse
    else
    {
        int uzunluk1 = strlen(kelime1);
        int uzunluk2 = strlen(kelime2);

        if (uzunluk1 > uzunluk2)
        {
            printf("1. kelime daha uzun.\n");
        }
        else if (uzunluk2 > uzunluk1)
        {
            printf("2. kelime daha uzun.\n");
        }
        else
        {
            printf("Kelime uzunluklari birbirine esit.\n");
        }
    }

    return 0;
}
