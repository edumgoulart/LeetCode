#include <stdbool.h>

bool lemonadeChange( int* bills, int billsSize ) {
    int bills5 = 0, bills10 = 0;
    for( int i = 0 ; i < billsSize ; i++ ){
        if( bills[i] == 5 ){
            bills5++;
        }
        if( bills[i] == 10 ){
            if( bills5 <= 0 ) return false;
            bills5--;
            bills10++;
        }
        if( bills[i] == 20 ){
            if( bills5 <= 0 ) return false;
            bills5--;
            if( bills10 <= 0 ){
                if(bills5 < 2) return false;
                bills5 -= 2;
            }else bills10--;
        }
    }
    return true;
}