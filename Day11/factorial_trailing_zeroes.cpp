class Solution {
public:
    int trailingZeroes(int n) {

        int count=0;
        while(n>0){
            n=n/5;
            count=count+n
            ;
        }
        return count;
    }
};
// every traliling zero which is created whenever has a factor of 10 =2*5 , which means factors of 2 and 5 

//         like in 10!=10! contains
// 2^8 × 3^4 × 5^2 × 7^1
// so instead of calculating from factorial , we could just get our resilt from choosing the minimum number btw 2 and 5 , that would only be the result of training zeroes, but tjis work can be done only by calculating the factors of 5 only 

// Dry run for n = 25
// count = 0

// n = 25/5 = 5
// count = 0 + 5 = 5

// n = 5/5 = 1
// count = 5 + 1 = 6

// n = 1/5 = 0
// count = 6

// return 6
// Meaning of count += n

// After each division:

// n/5   -> counts multiples of 5
// n/25  -> counts extra 5s from 25, 50, 75...
// n/125 -> counts extra 5s from 125, 250...

// So mathematically:

// Trailing Zeroes =
// ⌊n/5⌋ + ⌊n/25⌋ + ⌊n/125⌋ + ...

// For 25!:

// ⌊25/5⌋  = 5
// ⌊25/25⌋ = 1

// Total = 6