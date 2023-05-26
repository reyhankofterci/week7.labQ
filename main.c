#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[100];
    int sayac=0,kelime_sayisi=1;

    printf("Metin giriniz:");
    gets(metin);

    while(metin[sayac] != '\0')
    {
        char karakter= metin[sayac];
        if(karakter == ' ')
        kelime_sayisi++;
        sayac++;
    }

        printf("Girilen metin icerisinde %d tane kelime bulunur.", kelime_sayisi);

        return 0;
}
