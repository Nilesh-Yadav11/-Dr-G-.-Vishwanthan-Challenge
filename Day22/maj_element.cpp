class Solution {
public:
    int findcandidate(vector<int>& a, int size) {
        int maj_index = 0, count = 1;

        for (int i = 1; i < size; i++) {
            if (a[maj_index] == a[i]) {
                count++;
            } else {
                count--;
            }

            if (count == 0) {
                maj_index = i;
                count = 1;
            }
        }
        return a[maj_index];
    }

    bool ismajoirty(vector<int>& a, int size, int cand) {
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (a[i] == cand) {
                count++;
            }
        }
        if (count > size / 2)
            return true;
        else
            return false;
    }
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        
        int cand = findcandidate(nums, size);

        if (ismajoirty(nums, size, cand)) {
            return cand;
        }
        
        return -1;
    }
};