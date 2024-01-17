#include <stdio.h>

int main() {
    int angka1, angka2, hasil;

    // Input dua angka
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    // Melakukan operasi pengurangan
    hasil = angka1 - angka2;

    // Menampilkan hasil
    printf("Hasil pengurangan: %d\n", hasil);

    return 0;
}
