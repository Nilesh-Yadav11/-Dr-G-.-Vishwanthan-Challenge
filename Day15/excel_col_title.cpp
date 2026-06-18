class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string result="";
        while(columnNumber>0){
            columnNumber--;

            char ans='A'+columnNumber%26;
            result=result+ans;

            columnNumber=columnNumber/26;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

// dry run 
// columnNumber = 28

// 28-1 = 27
// 27 % 26 = 1 -> 'B'
// ans = "B"

// 27 / 26 = 1

// 1-1 = 0
// 0 % 26 = 0 -> 'A'
// ans = "AB"

// 0 / 26 = 0

// return "AB"