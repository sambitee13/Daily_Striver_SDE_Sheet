class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        //s-sn
        //s2-s2n
        long long N=n;
        long long sn= (N*(N+1))/2;
        long long s2n= (N*(N+1)*((2*N) +1))/6;
        long long s=0,s2=0;
        for(int i=0;i<N;i++){
            s+=arr[i];
            s2+= (long long)arr[i]*(long long)arr[i];
        }
        long long val1=s-sn; //x-y
        long long val2=s2 - s2n;
        val2=val2/val1; //x+y
        long long x= (val1+val2)/2;
        long long y= x - val1;
        return {(int)x,(int)y};
    }
};
