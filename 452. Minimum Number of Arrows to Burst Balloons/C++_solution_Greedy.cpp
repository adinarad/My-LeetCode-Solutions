class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& pts) {
        int n=pts.size();
        if(n==0)    return 0;
        
        sort(pts.begin(), pts.end());
        
        int hi=pts[0][1];
        int cnt=1;
        for(int i=1;i<n;++i){
            int start=pts[i][0], end=pts[i][1];
            
            if(start>hi){
                ++cnt;
                hi=end;
            }
            else{
                hi = min(hi, end);
            }
        }
        return cnt;
    }
};