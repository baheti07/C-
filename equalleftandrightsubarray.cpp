int equalSum(int N, vector<int> &A) {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)sum+=A[i];
        int lsum=0;
		for(int i=0; i<N; i++)
		{
		    sum-=A[i];
		    if(sum==lsum)
		    return i+1;
		    
		    else 
		    lsum+=A[i];
		}
		return -1;
    }