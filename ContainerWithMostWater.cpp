//11. Container With Most Water


class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l = 0;
        int r = height.size()-1;
        int max_wtr = 0 ;
        
        while(l<r){
            int l_h = height[l];
            int r_h = height[r];
            
            int min_hight = min(l_h,r_h);
            max_wtr = max(max_wtr, min_hight*(r-l));
            if(l_h < r_h) l++;
            else r--;
            
        }
        
        return max_wtr;
    }
};
