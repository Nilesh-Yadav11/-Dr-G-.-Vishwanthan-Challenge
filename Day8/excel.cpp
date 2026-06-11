class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int result=0;
        int n=columnTitle.length();
        for(int i=0;i<n;i++){

            int count=columnTitle[i]-'A'+1;
            result=result*26+count;
        }
        return result;
    }
};