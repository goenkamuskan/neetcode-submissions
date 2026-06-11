class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int maxFreq=0;
        int answer=nums[0];
        for( auto& pair: freq){
            if(pair.second > maxFreq) {
                maxFreq=pair.second;
                answer=pair.first;
            }
        }
        return answer;
    }
};