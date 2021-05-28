#include <stdio.h>
#include <stdlib.h>
#include <fenv.h>
#include <conio.h>

int toplama(int sayibir, int sayiiki);      // FONKSİYONLAR
int cikarma(int sayibir, int sayiiki);
int bolme(int sayibir, int sayiiki);
int carpma(int sayibir, int sayiiki);
int mod(int sayibir, int sayiiki);
int ust(int sayibir, int sayiiki);

int main()
{
    char degerbir;
    char degeriki;
    char islem;
    char boslukbir;
    char boslukiki;

    int sayibir;
    int sayiiki;
    int sonuc = 0;

    printf("\n *** HESAP MAKINESINE HOSGELDINIZ ***\n\n -Toplama Icin (+),\n  Cikarma Icin (-),\n  Bolme Icin (/),\n  Carpma Icin (*),\n  Us Almak Icin (^),\n  Mod Almak Icin (%%) Operatorlerini Kullaniniz.\n\n -Yanlizca Rakam Girisi Yapiniz.");
    printf("\n\n -Bir Onceki Sonucu Islemde Kullanmak Icin Kullanilan Operatorden Sonra Enter Tusuna Basin. \n  Orn. (5 +) Islemi Onceki Islemin Sonucuna 5 Ekler.\n\n");

    while(1){

        printf(" Islemi Giriniz ( Degerler ve Operator Arasinda Bosluk Birakiniz ) : ");
        degerbir = getche();                // GİRDİ ALMA
        boslukbir = getche();
        islem = getche();
        boslukiki = getche();

        if (boslukiki == '\r') {            // İKİNCİ BOŞLUKTA ENTER'A BASILIRSA
            degeriki = 10;
            printf("\n");
        }
        if (boslukiki == ' ') {             // İKİNCİ BOŞLUKTA BOŞLUK KARAKTERİ GİRİLİRSE
            scanf(" %c",&degeriki);
        }

        sayibir = degerbir - '0';            // CHAR TÜRÜ OLARAK ALINAN DEĞERLERİ İNT TÜRÜNE ÇEVİRİR
        sayiiki = degeriki - '0';

        switch (islem) {
            case '+':                       // TOPLAMA İŞLEMİ
              if (sayiiki == -38){    // İKİNCİ DEĞER GİRİLMEZSE
                sayiiki = sonuc;
              }
              sonuc = toplama(sayibir, sayiiki);
              printf("\n Sonuc = %d \n\n",sonuc);
              break;

            case '-':                       // ÇIKARMA İŞLEMİ
              if (sayiiki == -38){    // İKİNCİ DEĞER GİRİLMEZSE
                sayiiki = sonuc;
                int x;
                x = sayibir;
                sayibir = sayiiki;
                sayiiki = x;
              }
              sonuc = cikarma(sayibir, sayiiki);
              printf("\n Sonuc = %d \n\n",sonuc);
              break;

            case '/':                        // BÖLME İŞLEMİ
              if (sayiiki == -38){    // İKİNCİ DEĞER GİRİLMEZSE
                sayiiki = sonuc;
                int x;
                x = sayibir;
                sayibir = sayiiki;
                sayiiki = x;
              }
              sonuc = bolme(sayibir, sayiiki);
              printf("\n Sonuc = %d \n\n",sonuc);
              break;

            case '*':                       // ÇARPMA İŞLEMİ
              if (sayiiki == -38){    // İKİNCİ DEĞER GİRİLMEZSE
                sayiiki = sonuc;
              }
              sonuc = carpma(sayibir, sayiiki);
              printf("\n Sonuc = %d \n\n",sonuc);
              break;

            case '%':                       // MOD ALMA İŞLEMİ
              if (sayiiki == -38){    // İKİNCİ DEĞER GİRİLMEZSE
                sayiiki = sonuc;
                int x;
                x = sayibir;
                sayibir = sayiiki;
                sayiiki = x;
              }
              sonuc = mod(sayibir, sayiiki);
              printf("\n Sonuc = %d \n\n",sonuc);
              break;

            case '^':                       // ÜST ALMA İŞLEMİ
              if (sayiiki == -38){    // İKİNCİ DEĞER GİRİLMEZSE
                sayiiki = sonuc;
                int x;
                x = sayibir;
                sayibir = sayiiki;
                sayiiki = x;
              }
              sonuc = ust(sayibir, sayiiki);
              if (sayibir == 5 && sayiiki != 1 && sayiiki != 5){
                sonuc +=1;
              }
              printf("\n Sonuc = %d \n\n",sonuc);
              break;
            default:
                printf(" \n\n *** Tanimsiz Operator Girdiniz *** \n\n");
                break;
        }
    }
    return 0;
}

int toplama(int sayibir, int sayiiki){       // TOPLAMA FONKSİYONU
    int fsonuc = sayibir+sayiiki;
    return fsonuc;
}

int cikarma(int sayibir, int sayiiki){       // ÇIKARMA FONKSİYONU
    int fsonuc = sayibir-sayiiki;
    return fsonuc;
}

int bolme(int sayibir, int sayiiki){         // BÖLME FONKSİYONU
    int fsonuc = sayibir/sayiiki;
    return fsonuc;
}

int carpma(int sayibir, int sayiiki){        // ÇARPMA FONKSİYONU
    int fsonuc = sayibir*sayiiki;
    return fsonuc;
}

int mod(int sayibir, int sayiiki){           // MOD ALMA FONKSİYONU
    int fsonuc = sayibir%sayiiki;
    return fsonuc;
}

int ust(int sayibir, int sayiiki){           // ÜST ALMA FONKSİYONU
    int fsonuc = pow(sayibir,sayiiki);
    return fsonuc;
}
