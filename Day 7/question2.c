//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.a

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>

int main(){
    char ch;
    printf("enter character:");
    scanf("%c", &ch);
if(ch == 'a'|| ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u')
{
    printf("%c will be vowel", ch);
}
else
{
    printf("%c will be consonent", ch);
}
    return 0;
}
