#include <stdio.h>

// Tính trung bình tổng của các số tự nhiên chia hết cho 2
// Nhập 2 giá trị max min => hiển thị trung bình cộng các số cho 2 từ min tới max

int main () {
  int min, max, i;
  float tong = 0;
  int dem = 0;

  printf ("Nhap min: ");
  scanf ("%d", &min);

  printf ("Nhap max: ");
  scanf ("%d", &max);

  for (i = min; i <= max; i++) {
      if (i % 2 == 0) {
          tong +=i;
          dem++;
      }
  }
  if (dem == 0) {
      printf ("Khong co so chan trong doan [%d, %d]\n", min, max);
  } else {
      printf ("Trung binh cong cac so chan = %.2f\n", tong / dem);
  }
  return 0;
}
