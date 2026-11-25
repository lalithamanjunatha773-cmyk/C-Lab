#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float x, term, sum;

    printf("Enter angle in degrees :");
    scanf("%f", &x);

    printf("Enter the terms:");
    scanf("%d", &n);

    x = x*3.14/180;
    term = x;
    sum = x;

    for(i = 1; i < n; i++){
       term = -term*x*x/(2*i*(2*i+1));
       sum = sum + term;
    }

    printf("sin(x)) = %4f\n", sum);

    return 0;

}
