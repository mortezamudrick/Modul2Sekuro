#include<stdio.h>
#include<math.h>
#include"kalku.h"

int main() {
    int done=0;
    int choice;

    while(done==0) {
        printf("Selamat datang di program kalkulator\n");
        printf("Tekan 1 untuk melakukan penjumalahan\n");
        printf("Tekan 2 untuk melakukan pengurangan\n");
        printf("Tekan 3 untuk melakukan perkalian\n");
        printf("Tekan 4 untuk melakukan pembagian\n");
        printf("Tekan 5 untuk melakukan perpangkatan\n");
        printf("Tekan 6 untuk melakukan pengintagralan\n");
        printf("Tekan 7 untuk keluar dari program\n");

        scanf("%d",&choice);

        if(choice==1) {
            tambah();
        }
        else if(choice==2) {
            kurang();
        }
        else if(choice==3) {
            kali();
        }
        else if(choice==4) {
            bagi();
        }
        else if(choice==5) {
            pangkat();
        }
        else if(choice==6) {
            trapInt();
        }
        else if(choice==7) {
            done=1;
        }
        else {
            printf("Pilihan Anda tidak valid");
        }
    }
}

