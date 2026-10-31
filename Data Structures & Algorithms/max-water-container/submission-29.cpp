class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxl=0;
        while(i<j){
                 int area=(j-i)*min(heights[i],heights[j]);
                 maxl=max(area,maxl);
                
              if (heights[i] < heights[j]) {
                i++;
            }
            else {
                j--;
            }   
        }
            return maxl;
    }
};
