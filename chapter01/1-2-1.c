#include <stdio.h>

// Wyświetlanie tabeli przeliczeniowej stopni Fahrenheita na stopnie Celsjusza,
// dla wartości 0, 20, ..., 300.
int main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;   // dolne ograniczenie skali temperatury
  upper = 300; // górne ograniczenie
  step = 20;   // próg

  fahr = lower;
  while (fahr <= upper) {
    // Kolejność działania wynika z obcięcia wyniku dzielenia liczb całkowitych w C.
    // W C wynik 5 / 9 jest obcięty do 0.
    celsius = 5 * (fahr - 32) / 9;
    // "%" wyświetla kolejne argumenty printf.
    // "d" oznacza, że argument jest liczbą całkowitą i jako taki ma być wyświetlony.
    // printf("%d\t%d\n", fahr, celsius);
    // 3, 6 ustawia wartość szerokości kolumn, wyrównując wyniki do prawej.
    printf("%3d\t%6d\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
