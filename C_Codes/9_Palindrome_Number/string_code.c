#include <stdbool.h>

bool isPalindrome(int x) {
    if(x<0) return false;

    char xString[20] = "/0";
    sprintf(xString, "%d", x);
    int xLen = strlen(xString);
    for(int i = 0; i < xLen/2; i++){
        if(xString[i] != xString[xLen - (i + 1)]) return false;
    }
return true;
}