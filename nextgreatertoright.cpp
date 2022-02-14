#include <iostream>
#include<stack>
 
using namespace std;
 
/* prints element and res pair for all
elements of arr[] of size n */
void printNGE(int arr[], int n)
{
    stack<int>s;
    int res[n];
    for (int i = (2*n - 1); i >= 0; i--) {
        if (!s.empty()) {
            while (!s.empty() && s.top() <= arr[i%n]) {
                s.pop();
            }
        }
        res[i] = s.empty() ? -1 : s.top();
        s.push(arr[i%n]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " --> " << res[i] << endl;
}

int main()
{
    int arr[] = { 11, 13, 21, 3,45,22 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    
    printNGE(arr, n);
    return 0;
}
#timecomplexity-O(n)