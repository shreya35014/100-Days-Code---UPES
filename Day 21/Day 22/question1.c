//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int main(){
    int number, orignal, digit;
    int sum = 0;
    printf("enter a number: ");
    scanf("%d", &number);
    orignal = number;
    while(number > 0){
        digit = number % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++){
            factorial = factorial * i;
        }
        sum = sum + factorial;
        number = number / 10;
    }
    if (sum == orignal){
      printf("%d is a strong number.\n", orignal);
    }else{
        printf("%d is not a strong number.\n", orignal);
    }
    return 0;
}
