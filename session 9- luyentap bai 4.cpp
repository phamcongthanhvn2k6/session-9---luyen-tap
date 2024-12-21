#include <stdio.h>

int main(){
    int array[100];
    int n = 0;
    int menu;
    int trangthainhap = 0;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                printf("Nhap vao mang: \n");
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                
                for(int i = 0; i < n; i++){
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &array[i]);
                }
                trangthainhap++;
                break;
                
            case 2:
                if(trangthainhap){
                    printf("Hien thi mang: \n");
                    for(int i = 0; i < n; i++){
                        printf("%d ", array[i]);
                    }
                    printf("\n");
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");
                }
                break;
                
            case 3:
                if(trangthainhap){
                    int giatri, vitri;
                    printf("Them phan tu: \n");
                    printf("Nhap gia tri muon them: ");
                    scanf("%d", &giatri);
                    printf("Nhap vi tri muon them (1 den %d): ", n);
                    scanf("%d", &vitri);

                    if(vitri < 1 || vitri > n + 1) {
                        printf("Vi tri khong hop le. Vui long thu lai.\n");
                    } else {
                        for(int i = n; i >= vitri; i--) {
                            array[i] = array[i - 1];
                        }
                        array[vitri - 1] = giatri;
                        n++;
                    }
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");          
                }
                break;
            
            case 4:
                if(trangthainhap){
                    int sua, giatrimoi;
                    printf("Sua phan tu: \n");
                    printf("Ban muon sua phan tu thu: ");
                    scanf("%d", &sua);
                    printf("Gia tri moi cua phan tu la: ");
                    scanf("%d", &giatrimoi);

                    if(sua < 1 || sua > n) {
                        printf("Vi tri khong hop le. Vui long thu lai.\n");
                    } else {
                        array[sua - 1] = giatrimoi;
                    }
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");          
                }
                break;
                
            case 5:
                if(trangthainhap){
                    int xoa;
                    printf("Xoa phan tu: \n");
                    printf("Nhap vi tri phan tu muon xoa (1 den %d): ", n);
                    scanf("%d", &xoa);

                    if(xoa < 1 || xoa > n) {
                        printf("Vi tri khong hop le. Vui long thu lai.\n");
                    } else {
                        for(int i = xoa - 1; i < n - 1; i++) {
                            array[i] = array[i + 1];
                        }
                        n--;
                    }
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");          
                }
                break;
                
            case 6: 
                printf("Thoat chuong trinh.\n"); 
                break; 
                
            default: 
                printf("Lua chon khong hop le. Vui long chon lai.\n"); 
                break; 
        }
    } while(menu != 6);
    
    return 0;
}

