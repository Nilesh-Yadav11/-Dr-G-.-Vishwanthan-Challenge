class Solution {
public:
    int countOdds(int low, int high) {
        
        // vector<int>result;

        // for(int i=low;i<=high;i++){
        //     if((i&1)!=0){
        //         result.push_back(i);
        //     }
        // }

        // return result.size();
        // is correct but the vector will fail for storing large number of integers

        //  int count = 0;

        // for(int i = low; i <= high; i++) {
        //     if(i & 1) {
        //         count++;
        //     }
        // }

        // return count;
        // still fail bcz of tle 

        return (high+1)/2-low/2;
    }
};