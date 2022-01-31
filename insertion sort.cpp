#include<iostream>
using namespace std;
void display(int *array,int size)
{
    for(int i=0;i<size;i++)
       cout<<array[i]<<" ";
    cout<<endl;   
}
void insertionsort(int *array,int size)
{
    int key,j;
    for(int i=1;i<size;i++)
    {
        key=array[i];
        j=i;
        while(j>0 && array[j-1]>key)
        {
            array[j]=array[j-1];
            j--;
        }
        array[j]=key;
    }
} 
int main()
{
    int n;
    cout<<"Enter no of element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting: ";
    display(arr,n);
    insertionsort(arr,n);
    cout<<"Array after sorting: ";
    display(arr,n);
    
}
