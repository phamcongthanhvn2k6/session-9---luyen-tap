#include <stdio.h>
#include<math.h>

int main(){
    int array[100];
    int n = 0;
    int menu;
    int trangthainhap = 0;
    do {
        printf("\nMENU\n"); 
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n"); 
		printf("2. In ra gia tri cac phan tu dang quan ly\n"); 
		printf("3. In ra gia tri cac phan tu chan va tinh tong\n"); 
		printf("4. In ra gia tri lon nhat va nho nhat trong mang\n"); 
		printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n"); 
		printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n"); 
		printf("7. Them mot phan tu vao vi tri chi dinh\n"); 
		printf("8. Thoat\n"); 
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
                    int tongcacsochan=0;
                    printf("Cac phan tu chan trong mang la: ");
                    for ( int i=0;i<n;i++){
                    	if( array[i] % 2 ==0){
                    		printf("%d",array[i]);
                    		tongcacsochan+=array[i];
						}
					printf("Tong cac so chan la: %d",tongcacsochan);
					}   
                } else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");          
                }
                break;
            
            case 4:
                if(trangthainhap){
                    int giatrilonnhat = array[0], giatrinhonhat = array[0]; 
                    printf("Tim gia tri lon nhat va nho nhat la: \n");
                    
                    for ( int i=0;i<n;i++){
                    	if(array[i] < giatrinhonhat){
                    		giatrinhonhat = array[i];
						}
						if (giatrilonnhat > array[i]){
							giatrilonnhat = array[i];
						}
					printf("Gia tri lon nhat la: %d",giatrilonnhat);
					printf("gia tri nho nhat la: %d",giatrinhonhat);
					}
				}
					 
                else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");          
                }
                break;
                
            case 5:
                if(trangthainhap){
                    int tong = 0;
                    printf("Cac phan tu trong mang la so nguyen to: ");
                    for (int i=0;i< n;i++){
                    	int trangthai =1;
                    	if(array[i]<=1){
                    		trangthai=0;
						}
						for ( int j=2;j<= sqrt(array[i]);j++){
							if(array[i] % j == 0){
								trangthai=0;
								break ;
							}
						}
						if(trangthai){
							printf("%d\n",array[i]);
							tong +=array[i];
						}
					}
                    printf("\n tong cac so nguyen to la: %d",tong);
                    }
                 else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");          
                }
                
                break;
                
            case 6: 
            	int lap,x;
            	if(trangthainhap){
                printf("Nhap vao mot so: ");
                scanf("%d",&x);
                for ( int i=0;i<n;i++){
                	if( array[i] == x){
                		lap++;
					}
				}
				printf("So phan tu %d trong mang: %d\n", x,lap);
				}
			
				else {
                    printf("Ban chua nhap mang, vui long nhap mang truoc! \n");          
                }
                break; 
              
			case 7:
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
			
			case 8:
				 printf("Thoat chuong trinh. \n");
				 break;
				 
            default: 
                printf("Lua chon khong hop le. Vui long chon lai.\n"); 
                break; 
        }
    } while(menu != 8);
    
    return 0;
}
