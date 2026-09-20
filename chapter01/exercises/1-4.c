// Ćwiczenie 1.4.
// Napisz program, który wyświetla analogiczną tabelę konwersji stopni Celsjusza na stopnie Fahrenheita.

#include <stdio.h>

int main() {
  float celsius, fahr;
  int lower, upper, step;

  lower = -30;
  upper = 30;
  step = 1;

  printf("%3s\t%6s\n", "C", "F");
  printf("---\t------\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * 9.0) / 5.0 + 32.0;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}
