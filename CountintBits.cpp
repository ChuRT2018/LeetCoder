/* ²Î¿¼ÌÖÂÛ */
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num + 1,0);
        for(int i = 0; i < num + 1 ; i++){
            ans[i] = ans[i & (i - 1)] + 1;
        }
        return ans;
    }
};