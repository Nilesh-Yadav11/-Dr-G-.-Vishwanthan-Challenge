class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int total=0;

            while(num>0){
            total=total+num%10;
            num=num/10;
        }
        num=total;
        }
        return num;   
    }
};