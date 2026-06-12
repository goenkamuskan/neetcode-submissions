class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int majority_1 = 0, majority_2 = 0, count_1 = 0, count_2 = 0;
        for (const int num : nums) {
            if (num == majority_1)
                count_1++;
            else if (num == majority_2)
                count_2++;
            else if (count_1 == 0) {
                majority_1 = num;
                count_1++;
            } else if (count_2 == 0) {
                majority_2 = num;
                count_2++;
            } else {
                count_1--;
                count_2--;
            }
        }
        count_1 = 0;
        count_2 = 0;
        for (int num : nums) {
            if (num == majority_1)
                count_1++;
            else if (num == majority_2)
                count_2++;
        }
        vector<int> ans;

        if (count_1 > nums.size() / 3) {
            ans.push_back(majority_1);
        }
        if (count_2 > nums.size() / 3) {
            ans.push_back(majority_2);
        }

        return ans;
    }
};