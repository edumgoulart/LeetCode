#include <stdio.h>
#include <stdlib.h>

int main(){
    //Leetcode Test
    int numsSize = 5;
    int nums[] = {10, 22, 11, 2, 7};
    int target = 9;

    //Leetcode Code

    int *p = (int *)malloc( 2 * sizeof(int) );
    for( int i = 0; i < numsSize; i++ ){
        for( int j = i + 1; j < numsSize; j++ ){
            printf("%d %d \n", i, j);
            if( (nums[i] + nums[j]) == target ){
                p[0] = i;
                p[1] = j;
                printf("result: [%d,%d]",p[0],p[1]);
                return 0;
            }
        }
    }
    
    

    return 0;
}