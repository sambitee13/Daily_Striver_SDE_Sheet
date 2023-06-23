//optimal sol. TC: O(n)  SC: O(n)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        
        //arr=[[1,3],[2,6],[8,10],[15,18]]
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++){
            //push interval into ans
        //case1: ans in empty
        //case2: when current interval's 1st element is greater than the element at the back of the interval in ans 
        //like after (1,6) new interval formed for (8,10)
            if(ans.empty() || arr[i][0]> ans.back()[1]){
                ans.push_back(arr[i]);
            }
            //expand the current interval in ans like (1,3) and (2,6) gives interval (1,6)
            else{
                ans.back()[1]=max(ans.back()[1],arr[i][1]);
            }
        }
        return ans;
    }
};


//brute force TC: O(2n)  SC: O(n)

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& arr) {
//         
//         sort(arr.begin(),arr.end());
//         vector<vector<int>> ans;
//         for(int i=0;i<arr.size();i++){
//             int start=arr[i][0];
//             int end= arr[i][1];
//             if(!ans.empty() && end<= ans.back()[1]){
//                 continue;
//             }
//             for(int j=i+1;j<arr.size();j++){
//                 if(arr[j][0]<=end){
//                     end=max(end,arr[j][1]);
//                 }
//                 else{
//                     break;
//                 }
//             }
//             ans.push_back({start,end});
//         }
//         return ans;
//     }
// };

