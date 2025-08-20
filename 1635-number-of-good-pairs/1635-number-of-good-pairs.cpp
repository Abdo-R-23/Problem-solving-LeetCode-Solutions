class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        /*
        int count =0 ;
        for (int i =0 ; i<nums.size() ; i ++){
            for(int j = i+1 ; j<nums.size() ; j++)
            if(nums[i] == nums[j])
            count++;
        }
        */
     unordered_map <int , int > freq;
        int count = 0;
        for(int num : nums){
            count = count + freq[num];
            freq[num]++;

        }
    

        return count;
    }
    
};