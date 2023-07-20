 int majorityElement(vector<int>& nums) {
        int cnt=0, ele =0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                ele=nums[i];
                cnt++;
            }
            else if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        //this is to check for array like [0,1,0,1,0,1,5] here ele=5 but its not the majority ele so o/p is -1
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                cnt1++;
            }
        }
        if(cnt1> nums.size()/2){
            return ele;
        }
        return -1;
    }
//TC: O(n) SC: O(1)
