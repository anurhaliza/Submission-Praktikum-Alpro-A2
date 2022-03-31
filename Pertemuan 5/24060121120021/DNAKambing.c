/*Nama File :  DNAKambing.c*/
/*Nama Pembuat : Resma Adi Nugroho */
/*Tanggal : 30 Maret 2022 */
/*Deskripsi : Menentukan berapa banyak saudara dan tidak saudara dari selisih kumpulan DNA*/

#include<stdio.h>
#include<stdlib.h>

// Program Utama
int main(void){
    // Kamus
    int N,k,i,saudara,tidaksau;
    int D[100];

    // Algoritma
    printf("==========================================\n");
    printf("===========Program DNA Kambing============\n");
    printf("Masukan banyak DNA : ");
    scanf("%d",&N);
    saudara = 0;
    tidaksau = 0;
    if(N>0){
        for(i=0;i<N;i++){
            printf("Masukan DNA ke-%d : ",i+1);
            scanf("%d",&D[i]);
        }
        for(i=0;i<N-1;i++){
            for(k=i+1;k<N;k++){
               if(abs(D[i]-D[k])<3){
                    saudara++;
                } else {
                    tidaksau++;
                }
            }
        }
    
        printf("Banyak DNA Kambing yang bersaudara : %d\n", saudara);
        printf("Banyak DNA Kambing yang tidak bersaudara : %d", tidaksau);
    } else {
        printf("Masukan harus lebih dari 0");
    }
    return 0;
}