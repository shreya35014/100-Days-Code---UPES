//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
int main(){
    long long first, last, middle, power = 1, number , swapped;
    printf("enter a number: ");
    scanf("%d", &number);
    if(number < 10){
    swapped = number;
    }
    else{
        last = number % 10;
    long long temp = number;
    while (temp >= 10){
        temp = temp / 10;
        power = power * 10; 
    }
    first = temp;
    middle = (number % power) / 10;
    swapped = last * power + middle * 10 + first;
}
printf("number after swapping = %d\n", swapped);
return 0;
}
