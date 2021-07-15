class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        for (int i = 0; i<v.size(); i++) {
            for (int j = 0; j<v.size(); j++) {
                if ( i==j) continue; 
                if ( v[i]+v[j]==target ) {
                    return {i,j}; 
                }
            }
        }
        return {-1};
    }
};
