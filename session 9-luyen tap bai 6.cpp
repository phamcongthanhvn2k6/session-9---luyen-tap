#include <stdio.h>
#include <math.h>

int main() {
    int array[100][100];
    int n;
    int menu;
    int trangthainhap = 0;
    do {
        printf("\nMENU\n"); 
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n"); 
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n"); 
		printf("3. In gia tri cac phan tu la le va tinh tong\n"); 
		printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n"); 
		printf("5. In ra cac phan tu nam tren duong cheo chinh\n"); 
		printf("6. In ra cac phan tu nam tren duong cheo phu\n");
		printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n"); 
		printf("8. Thoat\n"); 
		printf("Lua chon cua ban: ");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                printf("Nhap vao mang: \n");
                printf("Nhap kich thuoc cua mang: ");
                scanf("%d", &n);
                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n; j++) {
                        printf("Nhap phan tu thu [%d][%d]: ", i + 1,j+1);
                        scanf("%d", &array[i][j]);
                    }
                    printf("\n");
                }
                trangthainhap++;
                break;

            case 2:
                if(trangthainhap) {
                    printf("Hien thi mang: \n");
                    for(int i = 0; i < n; i++) {
                        for(int j = 0; j < n; j++) {
                            printf("%d ", array[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");
                }
                break;

            case 3:
                if(trangthainhap) {
                    int tongcacsole = 0;
                    printf("Cac phan tu le trong mang la: ");
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            if (array[i][j] % 2 == 1) {
                                printf("%d ", array[i][j]);
                                tongcacsole += array[i][j];
                            }
                        }
                    }
                    printf("\nTong cac so le la: %d\n", tongcacsole);
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");
                }
                break;

            case 4:
                if(trangthainhap) {
                    int tich = 1;
                    printf("Cac phan tu nam tren duong bien la: ");
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                                printf("%d ", array[i][j]);
                                tich *= array[i][j];
                            }
                        }
                    }
                    printf("\nTich cac phan tu tren duong bien la: %d\n", tich);
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");
                }
                break;

            case 5:
                if(trangthainhap) {
                    printf("Cac phan tu nam tren duong cheo chinh: ");
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            if (i == j) {
                                printf("%d ", array[i][j]);
                            }
                        }
                    }
                    printf("\n");
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");
                }
                break;

            case 6:
                if(trangthainhap) {
                    printf("Cac phan tu nam tren duong cheo phu: ");
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            if (i + j == n - 1) {
                                printf("%d ", array[i][j]);
                            }
                        }
                    }
                    printf("\n");
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");
                }
                break;

            case 7:
                if(trangthainhap) {
                    int max_sum = 0;
                    int max_row = 0;
                    for (int i = 0; i < n; i++) {
                        int row_sum = 0;
                        for (int j = 0; j < n; j++) {
                            row_sum += array[i][j];
                        }
                        if (row_sum > max_sum) {
                            max_sum = row_sum;
                            max_row = i;
                        }
                    }
                    printf("Dong co tong gia tri cac phan tu lon nhat la dong %d:\n", max_row);
                    for (int j = 0; j < n; j++) {
                        printf("%d ", array[max_row][j]);
                    }
                    printf("\nTong gia tri cua dong %d: %d\n", max_row, max_sum);
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");
                }
                break;

            case 8:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    } while(menu != 8);

    return 0;
}

