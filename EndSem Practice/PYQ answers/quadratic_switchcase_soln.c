#include <stdio.h>
#include <math.h>

int main() {
   double a, b, c;
   double root1, root2, discriminant;

   printf("Enter coefficients a, b and c: ");
   scanf("%lf %lf %lf", &a, &b, &c);

   discriminant = b*b - 4*a*c;

   switch(discriminant > 0) {
      case 1:
         root1 = (-b + sqrt(discriminant)) / (2*a);
         root2 = (-b - sqrt(discriminant)) / (2*a);
         printf("Roots are real and different: %.2lf and %.2lf", root1, root2);
         break;

      case 0:
         switch(discriminant < 0) {
            case 1:
               printf("Roots are complex and different.\n");
               printf("Root1 = %.2lf + %.2lfi and Root2 = %.2lf - %.2lfi", -b/(2*a), sqrt(-discriminant)/(2*a), -b/(2*a), sqrt(-discriminant)/(2*a));
               break;

            case 0:
               printf("Roots are real and same: %.2lf", -b/(2*a));
               break;
         }
         break;
   }

   return 0;
}
