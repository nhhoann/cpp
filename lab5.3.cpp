#include <stdio.h>

// Build hàm hoán vị
// Nhập vào a, b => Hiển thị hoán vị giữa a và b

void swapValue(int *a, int *b) {    //a và b là con trỏ, không chứa gtri mà chỉ chứa add biến; * là con trỏ trỏ tới int
    int temp;
    
    temp = *a;
    
    *a = *b;
    
    *b = temp;
}

int main() {
    int so_thu_nhat, so_thu_hai;

    printf("Nhap gia tri thu nhat (A): ");
    scanf("%d", &so_thu_nhat);
    
    printf("Nhap gia tri thu hai (B): ");
    scanf("%d", &so_thu_hai);

    printf("\n--- TRUOC KHI HOAN VI ---\n");
    printf("Gia tri A = %d\n", so_thu_nhat);
    printf("Gia tri B = %d\n", so_thu_hai);

    swapValue(&so_thu_nhat, &so_thu_hai);

    printf("\n--- SAU KHI HOAN VI ---\n");
    printf("Gia tri A = %d\n", so_thu_nhat);
    printf("Gia tri B = %d\n", so_thu_hai);

    return 0;
}
