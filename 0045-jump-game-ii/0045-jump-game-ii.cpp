// https://www.youtube.com/watch?v=wLPdkLM_BWo&ab_channel=CodewithAlisha
class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int current = 0;
        int farthest = 0;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, i + nums[i]);
            
            if (i == current) {
                jumps++;
                current = farthest;
            }
        }
        return jumps;
    }
};