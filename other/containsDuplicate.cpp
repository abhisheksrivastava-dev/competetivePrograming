bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i=0; i<int(nums.size())-1; i++) {
            if (nums[i]==nums[i+1])
                return true;
        }
        return false;    
        // return set<int>(nums.begin(), nums.end()).size() < nums.size();
  }
