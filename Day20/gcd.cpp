class Solution {
public:
    // euclidian algorithm for finding gcd of two numbers 
    int gcd(int a ,int b){
        if(a==0) return b;
        if(b==0) return a;
        if(a==b) return a;
        if(a>b){
            return gcd(a-b,b);}
        else{
            return gcd(a,b-a);}}
    int findGCD(vector<int>& nums) {
        
        int mini=nums[0];
        int maxi=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
    return gcd(mini,maxi);
    }
};