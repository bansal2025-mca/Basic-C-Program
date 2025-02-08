//WAP to check if a number is prime or not.
#include <stdio.h>
int main(){
    int n,isPrime=1;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime)
    {
       printf("%d is Prime number.\n",n);
    }
    else{
        printf("Given number is composite\n",n);
    }
    return 0;
}