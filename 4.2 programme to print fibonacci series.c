#include <stdio.h>
int main() {

  int i, n, t1 = 0, t2 = 1, t;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i)
   { t=t1+t2;
    printf("%d, ", t);
    t1 = t2;
    t2 = t;
  }

  return 0;
}
