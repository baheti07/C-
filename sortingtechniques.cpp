RECURSIVE bubbleSort
void bs(int arr[],int n)
{
    if(n==1) return //base case
    for(int j=0;j<=n-2;j++)
    {
        if(arr[j]>arr[j+1])    //o(n2) //o(n)
        {
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
    bs(arr,n-1);
}
OPTIMAl
void bs(int arr[],int n)
{
    if(n==1) return;
    int ds=0;
    for(int j=0;j<=n-2;j++)
    {
        if(arr[j]>arr[j+1])
        {                                //o(n2) worst case o(n) best case
            int temp=arr[j+1];           //o(n)
            arr[j+1]=arr[j];
            arr[j]=temp;
            ds=1;
        }
    }
    if(ds==0) return;
    bs(arr,n-1);
}
ITERATIVE bubbleSort
void bs(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];        //o(n2)  o(1)
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
OPTIMAl
void bs(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int ds=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];      //o(n2) wc o(n) bc
                arr[j]=temp;          //o(1)
                ds=1;
            }
        }
        if(ds==0) break;
    }
}

Merge sort
void mergesort(vector<int>&arr,int low,int high)
{
    if(low>=high) return;
    int mid=(low+high)>>1;
    mergesort(arr,low,mid);  //left
    mergesort(arr,mid+1,high);//right
    merge(arr,low,high,mid);
}
void merge(vector<int>&Arr,int low,int high,int mid)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;    
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
INSERTion sort
void ins(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0&&arr[j-1]>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
RECURSIVE
void ins(int arr[],int i,int n)
{
    
        int j=i;
        while(j>0&&arr[j-1]>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    ins(arr,i+1,n);
}
SELECTION sort
void ss(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini]) mini=j;
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
Quicksort
void qs(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
        int pindex=partition(arr,low,high);
        qs(arr,low,pindex-1);
        qs(arr,pindex+1,high);
    }
}
int partition(vector<int>&arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot&&i<=high-1) i++;
        while(arr[j]>pivot&&j>=low+1) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}