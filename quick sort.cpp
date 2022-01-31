#include<iostream>
using namespace std;
void swap(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void print(int*array,int size)
{
    int i;
    for(i=0;i<size;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
int partition(int *array,int low,int high)
{
    int pivot=array[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(array[j]<=pivot)
        {
            i++;
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[i+1],&array[high]);
    return (i+1);
}
void quicksort(int*array,int low,int high)
{
    if(low<high)
    {
        int pi=partition(array,low,high);
        quicksort(array,low,pi-1);
        quicksort(array,pi+1,high);
    }
}
int main()
{
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting: ";
    print(arr,n);
    quicksort(arr,0,n-1);
    cout<<"Array after sorting: ";
    print(arr,n);
}