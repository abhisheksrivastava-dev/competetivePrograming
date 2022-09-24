vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> arr;
        // for(int i = 0;i < nums.size();i++){
        //     for(int j = 1;j < nums.size();j++){
        //         if((i != j) && (nums[i] + nums[j]) == target){
        //             arr.push_back(i);
        //             arr.push_back(j);
        //             break;
        //         }
        //     }
        //     if(arr.size() == 2){
        //         break;
        //     }
        // }
        // return arr;
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
