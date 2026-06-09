class Solution {
public:

    int getnext_int(int &n){
            int total=0;
            while(n>0){
                int digit=n%10;
                total=total+digit*digit;
                n=n/10;
            }
            return total;
        }

    bool isHappy(int n) {
        unordered_set<int>st;

        while(n!=1 && st.find(n)==st.end()){
            st.insert(n);
            n=getnext_int(n);

            // n!=1 -> mtlb jb tk ans hi na miljaaye
        }
        return n==1;
    }
};