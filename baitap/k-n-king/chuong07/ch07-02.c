/* In bảng giá trị bình phương bằng vòng lặp for */
#include <stdio.h>
int main() {
  int i, n;
  printf("Chương trình này in một bảng các giá trị bình phương.\n");
  printf("Nhập số lượng giá trị trong bảng: ");
  scanf("%d", &n);
  while (getchar() != '\n') {
  }
  for (i = 1; i <= n; ++i) {
    printf("%10d%10d\n", i, i * i);
    if (i < n && i % 24 == 0) {
      printf("Nhấn Enter để tiếp tục...");
      getchar();
    }
  }
  return 0;
}