//APPROACH 1 TC: O(log(m*n))
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int n=matrix.size();
        int m=matrix[0].size();
        int lo=0, hi=(n*m)-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            if(matrix[mid/m][mid%m] > target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return false;
    }

//APPROACH 2 TC:O(n)

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i =0 , j=matrix[0].size()-1;
        while(i<matrix.size() && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
