 #include<iostream>
 #include<vector>
 #include<stack>
 using namespace std;
 int largestRectangleArea(vector<int>& heights) {
        stack<int> st; 
        int maxA = 0; 
        int n = heights.size(); 
        for(int i = 0;i<=n;i++) {
            while(!st.empty() && (i==n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop(); 
                int width; 
                if(st.empty()) width = i; 
                else width = i - st.top() - 1; 
                
              
                maxA = max(maxA, width * height); 
            }
            st.push(i); 
        }
        return maxA;
    }
int main()
{
    vector<int>heights;
    heights={2,1,5,6,2,3};
    cout<<largestRectangleArea(heights);
    return 0;
}    