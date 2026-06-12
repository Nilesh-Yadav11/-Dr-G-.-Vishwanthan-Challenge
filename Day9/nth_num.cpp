// to find the nth digit 

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 ................

// like if n=3 , the digit would be 3 
// if n=11 , digit would be 0 

// in decimal number system 
//  1=> 1 to 9 ie. 9 no of digits
//  2=>10 to 99 ie. 90*2 =180 digits 
//  3=> 100 to 999 i.e. 900*3=>2700 digits
//  4=>1000 to 9999 i.e 9000*4=> 3600 digits 

// eg if n =250 
//  1=9 digits 
//  2= 180 digits 
//  3= 2700 digits 

//  means n belongs to 3 digits 
//  250-(9+180)=250-189=61 digit of 3 digit 

//  to find the number 
//  (61-1)/3 =>60/3= 20th no of 3 digit 
//  start=100
//  +20
//  120 is the number 

// to find the index at 250 
// (61-1)%3=60%3=0
// Ans=1  120  
// 250th digit 

class Solution {
public:
    int findNthDigit(int n) {
        
        long long digit_length=1;
        long long count=9;
        long long start=1;

        while(n>digit_length*count){
            n=n-digit_length*count;
            digit_length++;
            count=count*10;
            start=start*10;
        }

        start=start+(n-1)/digit_length;
        string num=to_string(start);
        return num[(n-1)%digit_length]-'0';
    }
};