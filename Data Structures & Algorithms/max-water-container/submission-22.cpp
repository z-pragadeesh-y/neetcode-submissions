class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxarea=0;
        while(i<j){
            int width=(j-i);
            int height=min(heights[i],heights[j]);
            int area=width*height;
            maxarea=max(maxarea,area);
            if (heights[i] < heights[j]) {
                      i++;}
            else {
                      j--;
                 }
        }
        return maxarea;
    }
};
