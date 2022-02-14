#include<iostream>
#include<vector>
using namespace std;
int first(vector<int>&arr,int x)
{
    int low = 0, high = arr.size() - 1, res = -1;
    while (low <= high)
    {
         
        int mid = (low + high) / 2;
         
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}
int last(vector<int>&arr,int x)
{
    int low = 0, high = arr.size() - 1, res = -1;
    while (low <= high)
    {
        
        int mid = (low + high) / 2;
         
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}
int main()
{
    vector<int>arr;
    arr={2,4,10,10,10,18,20};
    int x=10;
    cout <<"count of element is: "<<last(arr,x)-first(arr,x)+1;
 
    return 0;
} 