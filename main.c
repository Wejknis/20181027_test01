#include <stdio.h>

/*wypisz zestawienie temperatur Fahrenheita-Celsjusza dla f = 0, 20, ..., 300 */
main()
{
 int fahr, celsius;
 int lower, upper, step;

 lower = 0; /* dolna granica temperatur */
 upper = 300; /* górna granica temperatur */
 step = 20; /* rozmiar kroku */
 fahr = lower;
 while (fahr <= upper) {
     celsius = 5 * (fahr-32) / 9;
     printf("%d\t%d\n", fahr, celsius);
     fahr = fahr + step;
      }
    return 0;
}

