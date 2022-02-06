//217. Contains Duplicate

//using unordered map

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> data;
        for(int i=0; i<nums.size(); i++){
            data[ nums[i] ] += 1;
            if( data[nums[i]] > 1 ) return true;
        } return false;
    }
};

//using set solution 2

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for(int& num : nums){
            if( st.find(num) != st.end() ) return true;
            st.insert(num);
        } return false;
    }
};
