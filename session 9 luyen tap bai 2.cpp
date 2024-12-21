#include <stdio.h>

int main() {
    int n, sua, giatrimoi;
    printf("Nhap so phan tu muon them vao mang: ");
    scanf("%d", &n);
    
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    printf("Cac phan tu trong mang la: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    printf("Ban muon sua phan tu thu: ");
    scanf("%d", &sua);
    printf("Gia tri moi cua phan tu la: ");
    scanf("%d", &giatrimoi);
    
    if (sua < 1 || sua > n) {
        printf("Vi tri khong hop le. Vui long thui lai.\n");
        return 1;
    }

    array[sua - 1] = giatrimoi;
    
    printf("Cac phan tu trong mang sau khi sua la: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}

