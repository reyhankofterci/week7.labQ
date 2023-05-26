#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


    void harfsayma(char *metin)
    {
        int *harleri_say = (int *) calloc(29, sizeof(int));

        if (harleri_say == NULL)
            {
                printf("Bellek tahsis edilemedi.");
                return;
            }

    while (*metin)
        {
            char c = tolower(*metin);

            if (isalpha(c))
                {
                    harleri_say[c - 'a']++;
                }
                metin++;
        }



    for (int i = 0; i < 29; i++)
        {

            if (harleri_say[i] > 0)
                {
                    printf("%d adet '%c' \n", harleri_say[i], 'a' + i);
                }
        }

        free(harleri_say);
        }




    int main()
    {
        char metin[1000];

        printf("Metni gir: ");
        fgets(metin, sizeof(metin), stdin);

        harfsayma(metin);

        return 0;
    }
