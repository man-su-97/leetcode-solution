//Q 16. 3Sum Closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target){

    sort(nums.begin(),nums.end());

    int closestSum = nums[0] + nums[1] + nums[nums.size()-1];

    for(int i=0;i<nums.size()-2;i++){
        int start = i+1;
        int end = nums.size()-1;

        while(start < end){
            int currentSum = nums[i]+nums[start]+nums[end];

            if(currentSum > target){
                end--;
            }
            else{
                start++;
            }

            if(abs(currentSum - target) < abs(closestSum - target)){
                closestSum = currentSum ;
            }
        }

    }
    return closestSum;
        
}
};
