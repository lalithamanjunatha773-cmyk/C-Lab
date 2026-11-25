#include <stdio.h>
#include <stdlib.h>

int checkPass(float p, float m, float c);


int main()
{
    float sub1, sub2, sub3, average;
    printf("Enter the marks for 3 subjects:");
    if(scanf("%f %f %f", &sub1, &sub2, &sub3) != 3){
       printf("Invalid Input! please enter numeric marks \n");
       return 1;
       }

    average = (sub1 + sub2 + sub3) / 3.0;
    printf("\n Average marks : %2f\n", average);
    if(checkPass(sub1, sub2, sub3)){
       printf("Result: PASSED");
    }
    else{
       printf("Result: FAILED");
    }
       return 0;
    }

    int checkPass(float p, float m, float c){
       if(p >= 400 && m >= 400 && c >= 400){
         return 1;
       }else{
          return 0;
          }

}
