#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, y, fa, fb, fy, err_su_y;
  do {
    printf(" Inserire estremi\n");
    scanf("%lf", &a);
    fa = a * a * cos(a) + 1.;
    scanf("%lf", &b);
    fb = b * b * cos(b) + 1.;
    printf("\n");
  } while (fa * fb >= 0.);
  do {
    y = (a + b) * 0.5;
    fy = y * y * cos(y) + 1.;
    if( fy == 0. )
      break;
    if( fa*fy < 0.0001 ) {
      b = y;
      fb = fy;
    }
    else {
      a = y;
      fa = fy;
    }
    err_su_y = fabs( (b-a) * 0.5 );
  } while(err_su_y >= 1.e-15);
  printf("%4.3lf\n", y);

}



