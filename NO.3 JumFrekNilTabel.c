/* Nama File    : 3_JumFrekNilTabel.c */
/* Deskripsi    : menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali*/
/* Pembuat      : Bisma Wira Adi  - 24060122140120 */

#include <stdio.h>

int main()
{
/* Kamus */
    int T[] = { 7,4,5,7,6,5,3,5,1,4 };
    int N = sizeof(T) / sizeof(T[0]);
    int frekuensi;
    int i, j;
    int sum;
/* Algoritma */
 sum = 0;
  for (i = 0; i < N; i++){
    frekuensi = 1;
    for (j = i + 1 ; j < N;j++){
      if (T[i] != 0 && T[j] == T[i]){
        frekuensi += 1;
        T[j] = 0;
      }
    }
    if (frekuensi > 1){
      sum = sum + (frekuensi * T[i]);
    }
  }
  printf("%d", sum);
}