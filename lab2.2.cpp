#include <stdio.h>

int main() {
    // Khai báo biến
    // Nhập số thập phân = float
    float chieu_dai;
    float chieu_rong;
    float chu_vi;
    float dien_tich;

    // Chiều dài + chiều rộng
    printf("Nhap chieu dai cua hinh chu nhat: ");
    // Lệnh scanf() dùng để đọc dữ liệu nhập từ bàn phím
    if (scanf("%f", &chieu_dai) != 1) {
        printf("Loi: Dau vao khong hop le (chieu dai).\n");
        return 1; // Thoát chương trình với mã lỗi
    }

    printf("Nhap chieu rong cua hinh chu nhat: ");
    if (scanf("%f", &chieu_rong) != 1) {
        printf("Loi: Dau vao khong hop le (chieu rong).\n");
        return 1; // Thoát chương trình với mã lỗi
    }

    // Tính
    // P = 2 * (chieu_dai + chieu_rong)
    chu_vi = 2 * (chieu_dai + chieu_rong);

    // S = chieu_dai * chieu_rong
    dien_tich = chieu_dai * chieu_rong;

    // Hiện kết quả
    printf("\n--- KET QUA CUA HINH CHU NHAT ---\n");
    printf("Chieu dai: %.2f\n", chieu_dai); // %.2f: In ra 2 chữ số sau dấu thập phân
    printf("Chieu rong: %.2f\n", chieu_rong);
    printf("Chu vi: %.2f\n", chu_vi);
    printf("Dien tich: %.2f\n", dien_tich);

    return 0;
}
