#include <stdio.h>

// Xây dựng chương trình tính tiền điện
// Nhập vào số điện tiêu thụ => hiển thị số tiền cần đóng
// Biết rằng: 
// B1: 0-50 kWh = 1.678
// B2: 51-100 kWh = 1.734
// B3: 101-200 kWh = 2.014
// B4: 201-300 kWh = 2.536
// B5: 301-400 kWh = 2.834
// B6: 401 kWh trở lên = 2.927

int main () {
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

    return 0;
}

