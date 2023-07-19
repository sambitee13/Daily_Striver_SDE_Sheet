public:
    long long int merge(long long arr[], int l, int m, int r)
    {
          vector<long long> temp;
          long long int cnt=0;
          int left=l;
          int right=m+1;
          while(left<=m && right<=r){
              if(arr[left]<=arr[right]){
                  temp.push_back(arr[left]);
                  left++;
              }
              else{
                  temp.push_back(arr[right++]);
                  cnt+=m-left+1;
              }
          }
          while(left<=m){
              temp.push_back(arr[left++]);
          }
          while(right<=r){
              temp.push_back(arr[right++]);
          }
          for(int i=l;i<=r;i++){
              arr[i]=temp[i-l];
          }
          return cnt;
    }
    public:
    long long int mergeSort(long long arr[], int l, int r)
    {
        long long int cnt=0;
        if(l==r) return cnt;
        int mid =l+ ((r-l)/2);
        cnt+= mergeSort(arr,l,mid);
        cnt+= mergeSort(arr,mid+1,r);
        cnt+= merge(arr,l,mid,r);
        return cnt;
        
    }
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        long long int cnt=0;
        cnt = mergeSort(arr,0,N-1);
        return cnt;
    }

