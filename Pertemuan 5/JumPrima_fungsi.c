/*Nama File : JumPrima_function*/
/*Deskripsi : menampilkan jumlah deret prima sampai ke N untuk N>0 dengan sub-program fungsi*/
/*Nama      : Bisma Wira Adi Wicaksono*/
/*NIM       : 24060122140120*/
/*Tanggal   : 25 Maret 2023*/


#include <stdio.h>
#include <stdbool.h>

// Fungsi untuk mengecek apakah bilangan prima atau tidak
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Fungsi untuk menampilkan bilangan prima dan jumlahnya
void displayPrime(int n) {
    int sum = 0;
    bool found = false;
    
    printf("Bilangan prima yang terbentuk dari %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            found = true;
            printf("%d ", i);
            sum += i;
        }
    }
    if (!found) {
        printf("\nTidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0\n");
    } else {
        printf("\ndengan Jumlahan Deret Bilangannya adalah Sn=%d\n", sum);
    }
}

// Program utama
int main() {
    int n;
    
    printf("Masukkan nilai N: ");
    scanf("%d", &n);
    
    displayPrime(n);
    
    return 0;
}
