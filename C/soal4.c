#include <stdio.h>

int main(){
    int berhenti = 0;
    while(!berhenti){
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");

        int pilihan; scanf("%d", &pilihan);

        float a, b;
        switch(pilihan){
            case 1:
                printf("Masukkan nilai pertama: ");
                scanf("%f", &a);
                printf("Masukkan nilai kedua: ");
                scanf("%f", &b);
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f", a, b, (a+b));
                break;
            case 2:
                printf("Masukkan nilai pertama: ");
                scanf("%f", &a);
                printf("Masukkan nilai kedua: ");
                scanf("%f", &b);
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f", a, b, (a-b));
                break;
            case 3:
                printf("Masukkan nilai pertama: ");
                scanf("%f", &a);
                printf("Masukkan nilai kedua: ");
                scanf("%f", &b);
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f", a, b, (a*b));
                break;
            case 4:
                printf("Masukkan nilai pertama: ");
                scanf("%f", &a);
                printf("Masukkan nilai kedua: ");
                scanf("%f", &b);
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f", a, b, (a/b));
                break;
            case 5:
                printf("Terimakasih, telah menggunakan kalkulator GUNTUR");
                berhenti = 1;
                break;
            default:
                printf("Input anda salah, silahkan coba lagi");

        }
        printf("\n\n");
    }
    
}