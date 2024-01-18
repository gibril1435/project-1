#include <stdio.h>

int main() {
    int angka1, angka2, hasil;
    char operasi;

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    printf("Pilih operasi (+ untuk pertambahan, - untuk pengurangan): ");
    scanf(" %c", &operasi);

    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            printf("Hasil pertambahan: %d\n", hasil);
            break;

        case '-':
            hasil = angka1 - angka2;
            printf("Hasil pengurangan: %d\n", hasil);
            break;

        default:
            printf("Operasi tidak valid. Silakan pilih + atau -.\n");
            break;
    }

    return 0;
}
