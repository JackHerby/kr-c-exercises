// Ćwiczenie 1.3.
// Zmodyfikuj program wyświetlający tabelę konwersji w taki sposób, aby wyświetlał wiersz nagłówka.
#include <stdio.h>

int main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("%3s\t%6s\n", "F", "C");
  printf("---\t------\n");

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3d\t%6d\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
