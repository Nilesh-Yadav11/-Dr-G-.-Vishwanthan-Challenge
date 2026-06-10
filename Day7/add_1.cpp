class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        // out of range approach 

        // string s=" ";
        // for(int i=0;i<digits.size();i++){
        //     s+=(digits[i]+'0');
        // }
        // int num=stoi(s);
        // num=num+1;
        
        // vector<int>ans;
        // while(num>0){
        //     ans.push_back(num%10);
        //     num=num/10;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;

        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        // like if 99+1=100 , to insert 1 at the start
        digits.insert(digits.begin(),1);
        return digits;
    }
};