#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns
    // 0 or 1)
    
    x >>= n;

    return (x & 1);
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    // YOUR CODE HERE
    int t;
    t = 1 << n;
    *x = *x & (~t);
    t = v << n;
    *x = *x | t;
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    // YOUR CODE HERE
    int t;
    t = 1 << n;
    *x = *x ^ t; 

    // Use ^ operation
    // We compare LSB to 1, 
    // if LSB is 1 then ^ operation is False and we get 0
    // if LSB is 0 them ^ operation is True and we get 1



}

