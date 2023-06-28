class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // optimal solution with no extra space and TC: O(m+n)
        int i=m-1, j=n-1, k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
        while(i>=0){
            nums1[k--]=nums1[i--];
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }

      // //brute force with extra space
      
      // vector<int> nums3(m+n);
      // int l=0,r=0,i=0;
      // while(l<m && r<n){
      //     if(nums1[l]<=nums2[r]){
      //         nums3[i++]=nums1[l++];
      //     }
      //     else{
      //         nums3[i++]=nums2[r++];
      //     }
      // }  
      // while(l<m){
      //     nums3[i++]=nums1[l++];
      // }
      // while(r<n){
      //     nums3[i++]=nums2[r++];
      // }
      // for(int j=0;j<m+n;j++){
      //     nums1[j]=nums3[j];
      // }

    }
};
