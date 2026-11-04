#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 21, is_prime = 1, i;
    if(n <= 1){
       is_prime = 0;
    }
    else{
      for(i = 2; i < n; i++){
        if(n%i == 0){
            is_prime = 0;
            break;
            }
      }
    }

    if(is_prime == 1){
        printf("%d is a prime number.\n",n);

    }else{
        printf("%d is not a prime number\n",n);
        }
    return 0;
}
