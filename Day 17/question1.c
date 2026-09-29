//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
int main(){
    int n, orignal, remainder, sum;
    printf("enter n:");
    scanf("%d", &n);
    while(n != 0);
    orignal = n;
    {
      remainder = n % 10;
      sum = sum + remainder * remainder * remainder;
      n = n / 10;
    }
    if(sum == remainder)
    {
        printf("amstrong number");
    }
    else{
        printf("not a amstrong number");
    }
return 0;
}
