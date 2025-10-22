#include <stdio.h>
#include <stdlib.h>



  struct ListNode {
      int val;
      struct ListNode *next;
  };
  
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {   
    int digit, carry = 0;
    struct ListNode * ini, * previousNode, * new;

    digit = l1->val + l2->val;
    if ( digit >= 10 ){
        digit = digit - 10;
        carry = 1;
    }
    ini = ( struct ListNode * )malloc( sizeof( struct ListNode ) );
    ini->val = digit;
    previousNode = ini;
    ini->next = NULL;

    while( l1->next != NULL || l2->next != NULL ){
        if( l1->next == NULL ){
            l2 = l2->next;
            if( l2->val < 9 ){
                digit = l2->val + carry;
                carry = 0;
            } else {
                digit = 9;
                if( carry == 1 ) digit = 0;
            }
        } else if( l2->next == NULL ){
            l1 = l1->next;
            if( l1->val < 9 ){
                digit = l1->val + carry;
                carry = 0;
            } else {
                digit = 9;
                if( carry == 1)  digit = 0;
            }
        } else {
            l1 = l1->next;
            l2 = l2->next;
            if( ( l1->val + l2->val ) < 9 ){
                digit = l2->val + l1->val + carry;
                carry = 0;
            } else if( ( l1->val + l2->val ) == 9 ) {
                digit = 9;
                if( carry == 1 ) digit = 0;
            } else{
                digit = l2->val + l1->val + carry - 10;
                carry = 1;
            }
        }
        new = ( struct ListNode * )malloc( sizeof( struct ListNode ) );
        new->val = digit;
        previousNode->next = new;
        previousNode = new;
        new->next = NULL;
    }
    if( carry == 1 ){
        new = ( struct ListNode * )malloc( sizeof( struct ListNode ) );
        new->val = 1;
        previousNode->next = new;
        new->next = NULL;

    }
    return ini;
}