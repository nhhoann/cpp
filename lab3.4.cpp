#include <stdio.h>
#include <math.h>

// Xây dựng menu chương trình cho 3 bài trên
// Dùng Switch-case

void hocLuc () {
    float diem;
    
    printf ("Nhap diem: ");
    scanf ("%f", &diem);

    if (diem >= 9) {
        printf ("Xuat sac");
    } else if (diem >= 8) {
        printf ("Gioi");
    } else if (diem >= 6.5 && diem < 8) {
        printf ("Kha");
    } else if (diem >= 5) {
        printf ("Trung bình");
    } else if (diem >= 3.5) {
        printf ("Yeu");
    } else {
        printf ("Kem");
    }
}

void giaiPT () {
    float a, b, c;

    printf ("Nhap a, b, c: ");
    scanf ("%f %f %f", &a, &b, &c);

    if (a == 0) {
        //bx + c = 0
        if (b == 0) {
            if (c == 0) {
                printf ("Phuong trinh vo so nghiem");
            } else {
                printf ("Phuong trinh vo nghiem");
            }
        } else {
            printf ("Phuong trinh co mot nghiem: x = %.2f", -c/b);
        }
    } else {
        //ax^2 + bx +c = 0
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf ("Phuong trinh vo nghiem");
        } else if (delta == 0){
            printf ("Phuong trinh co nghiem kep: x = %.2f", -b/(2 * a));
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a); 
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf ("Phuong trinh co hai nghiem: x1 = %.2f, x2 = %.2f", x1, x2);
        }

    }
}

void tienDien () {
    int kWh;
    long tien = 0;

    printf ("Nhap so kWh da tieu thu: ");
    scanf ("%d", &kWh);

    if (kWh <= 50) {
        tien = kWh * 1678;
    } else if (kWh <= 100) {
        tien = 50 * 1678 + (kWh - 50) * 1734;
    } else if (kWh <= 200) {
        tien = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
    } else if (kWh <= 300) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
    } else if (kWh <= 400) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kWh - 300) * 2834;
    } else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kWh - 400) * 2927;
    }
    printf ("Tien dien phai tra la: %d VND", tien);
}

int main () {
    int choice;
    do {
        printf ("\n===MENU===\n");
        printf ("1.Tinh hoc luc\n");
        printf ("2.Giai phuong trinh\n");
        printf ("3.Tinh tien dien\n");
        printf ("0.Thoat\n");
        printf ("Chon: ");
        scanf ("%d", &choice);

        switch (choice) {
            case 1:
                hocLuc ();
                break;
            case 2:
                giaiPT ();
                break;
            case 3:
                tienDien ();
                break;
            case 0:
                printf ("Thoat chuong trinh\n");
                break;
            default:
                printf ("Lua chon khong hop le\n");
        }
    } while (choice !=0);

    return 0;
}
