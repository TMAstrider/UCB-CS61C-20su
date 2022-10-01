#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    if (head == NULL) return 0;

    node *hare = head;
    node *totorise = head;
    // while (hare->next->next != NULL  && hare->next != NULL){
    while (hare->next != NULL  && hare->next->next != NULL){
        /* code */
        hare = hare->next->next;
        totorise = totorise->next;
        if (hare == totorise) {
            return 1;
        }
    }
    return 0;
}