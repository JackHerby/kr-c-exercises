#include <stdio.h>

// Wyświetlanie tabeli przeliczeniowej stopni Fahrenheita na stopnie Celsjusza,
// dla wartości 0, 10, ..., 300.
// Wersja zmiennoprzecinkowa.
int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    // "f" oznacza, że argument jest wartością zmiennoprzecinkową.
    // Zapis "%3.0f" oznacza wypisanie liczby zmiennoprzecinkowej co najmniej 3 znakowej, bez części dziesiętnej.
    // Zapis "%6.1f" oznacza wypisanie liczby zmiennoprzecinkowej co najmniej 6 znakowej,
    // z jedną cyfrą po kropce dziesiętnej.
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
