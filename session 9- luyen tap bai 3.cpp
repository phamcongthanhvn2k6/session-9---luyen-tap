#include <stdio.h>

int main() {
    int array[100];
    int n, xoa;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    if (n > 100 || n < 0) {
        printf("Khong hop le, vui long nhap lai!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Cac phan tu trong mang truoc khi xoa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Nhap vi tri phan tu muon xoa (1 den %d): ", n);
    scanf("%d", &xoa);

    if (xoa < 1 || xoa > n) {
        printf("Vi tri khong hop le. Vui long thu lai.\n");
        return 1;
    }

    for (int i = xoa - 1; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    n--;

    printf("Cac phan tu trong mang sau khi xoa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

