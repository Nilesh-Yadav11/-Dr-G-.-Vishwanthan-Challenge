class Solution {
public:
   int arraySign(vector<int>& nums) {
    // int signFunc(long long x){
    //     if(x>0){
    //         return 1;
    //     }
    //     if(x<0){
    //         return -1;
    //     }
    //     else{
    //         return 0;
    //     }
    // }
    // int arraySign(vector<int>& nums) {
    //     long long product=1;
    //     for(int i=0;i<nums.size();i++){
    //         product=product*nums[i];
    //     }
    //     return signFunc(product);
    // } -> runtime error 

    int sign = 1;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            return 0;
    }

    if (nums[i] < 0) {
        sign = -sign;
    }
}
    return sign;
   }
};