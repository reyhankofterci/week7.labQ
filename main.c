#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char cumle[1000];
    char kelime[100];

    printf("Bir cumle gir: ");
    fgets(cumle, sizeof(cumle), stdin);

    printf("Aranacak kelimeyi giriniz: ");
    scanf("%s", kelime);

    int cumle_uzunluk = strlen(cumle);
    int kelime_uzunluk = strlen(kelime);

    // fgets() fonksiyonu nedeniyle son karakter '\n' olduðundan kaldýrýlýr.
    if (cumle[cumle_uzunluk - 1] == '\n')
        cumle[cumle_uzunluk - 1] = '\0';

    int indis = 0;
    int bulunan = 0;

    while (indis < cumle_uzunluk)
    {
        int i = 0;
        int eslesme = 1;

        while (i < kelime_uzunluk)
        {
            if (cumle[indis + i] != kelime[i])
            {
                eslesme = 0;
                break;
            }
            i++;
        }

        if (eslesme)
        {
            printf("Kelime bulundu, baslangic indisleri: %d\n", indis);
            bulunan = 1;
        }

        indis++;
    }

    if (!bulunan)
        printf("Kelime bulunamadi.\n");

    return 0;
}
