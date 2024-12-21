#include <stdio.h>

int main() {
    int array[100];
    int n, giatri, vitri;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    if (n > 100 || n < 0) {
        printf("Khong hop le, vui lòog nhap lai!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Cac phan tu trong mang truoc khi them:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Nhap gia tri muon them: ");
    scanf("%d", &giatri);
    printf("Nhap vi tri muon them (1 den %d): ", n);
    scanf("%d", &vitri);

    if (vitri < 1 || vitri > n + 1) {
        printf("Vi tri không hop le. Vui long thu lai.\n");
        return 1;
    }

    for (int i = n; i >= vitri; i--) {
        array[i] = array[i - 1];
    }

    array[vitri - 1] = giatri;
    n++;

    printf("Cac phan tu trong mang sau khi them:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

