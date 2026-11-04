#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,discriminant,root1,root2;

    printf("Enter coefficients a, b and c:");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b*b) - (4*a*c);

    if(discriminant > 0){
      printf("\nRoots are real and distinct\n");
      root1 = (-b + sqrt(discriminant)) / (2*a);
      root2 = (-b - sqrt(discriminant)) / (2*a);
      printf("Root1 = %2f\n", root1);
      printf("Root2 = %2f\n", root2);
      }
    else if(discriminant == 0){
      printf("\nRoots are real and equal\n");
      root1 = -b/(2*a);
      printf("Root1 = Root2 = %2f\n", root1);
      }
      else{
      printf("\n Roots are imaginary\n");
      float realPart = -b/(2*a);
      float imagPart = sqrt(-discriminant)/(2*a);
      printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
      printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
      }
    return 0;
}
