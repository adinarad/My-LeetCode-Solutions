class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        int idx=0;
        while(num>0){
            ans = ans | ((num&1)?0:1<<idx);
            ++idx;
            num = num>>1;
        }
        return ans;
    }
};