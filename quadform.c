#include <stdio.h>
#include <math.h>

int main() {
  int imaginary = 0;
  double term1, term2, term3;
  printf("Enter values of A, B, and C, separated by spaces: ");
  scanf("%lf %lf %lf",&term1,&term2,&term3);

  {
    double temp = term1;
    term1 = term2 * -1;
    term2 = term2 * term2 - 4 * temp * term3;
    if (term2 < 0) {
      imaginary = 1;
      term2 *= -1;
    }
    term3 = temp * 2;
  }

  term2 = sqrt(term2);
  if (!imaginary) {
    printf("x = %.4lf\nx = %.4lf\n",(term1+term2)/term3,(term1-term2)/term3);
    return 0;
  }
  printf("x = %.4lf + %.4lfi\nx = %.4lf - %.4lfi\n",term1/term3,term2/term3,term1/term3,term2/term3);
  return 0;
}
