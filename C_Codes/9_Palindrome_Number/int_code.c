#include <stdbool.h>
#include <stdio.h>


bool isPalindrome(int x) {
    if( x < 0 ) return false;
    unsigned long int ReversedX = 0, xCopy = x;
    while( xCopy != 0 ){
        ReversedX *= 10;
        ReversedX = ReversedX + xCopy % 10;
        xCopy /= 10;
    }
    if( ReversedX == x ) return true;
    return false;
}

int main(){
    int x = 1211;
    if(isPalindrome(x)) printf("It is Palindrome");
    return 0;
}