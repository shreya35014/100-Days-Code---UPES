//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>
int main(){
    long long binary, complement = 0;
    int place = 1;
    int digit;
    printf("enter a binary number : ");
    scanf("%lld", &binary);
    while ( binary > 0){
        digit = binary % 10;
    if( digit == 0){
        complement = complement + 1 * place;
    }else{
        complement = complement + 0 * place;
    }
    place = place * 10;
    binary = binary / 10;
}
printf("1s complement = %lld\n", complement);
return 0;
}
