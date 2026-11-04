class Solution {
public:
    int findDuplicate(vector<int>& numbers) {
        int n=numbers.size();
        for(int i=0;i<n;i++){
           int g= count(begin(numbers), end(numbers), numbers[i]);
           if(g>1){
            return numbers[i];
           }
        }
        return -1;
    }
};
