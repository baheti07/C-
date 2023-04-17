struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    static bool comparison(Job a, Job b) 
    { 
    	return (a.profit > b.profit); 
    } 
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
          int res = 0, tot_job = 0;
    	sort(arr, arr+n, comparison); 
    
    	bool slot[n]; 
    	for (int i=0; i<n; i++) 
    		slot[i] = false; 
    
    
    	for (int i=0; i<n; i++) 
    	{ 
        
        	for (int j= arr[i].dead-1; j>=0; j--) 
        	{ 
        		if (slot[j]==false) 
        		{ 
        			res += arr[i].profit;  tot_job++;
			        slot[j] = true;
			        break; 
        		} 
        	} 
    	} 
    	
    	vector<int> ans;
    	ans.push_back(tot_job);
    	ans.push_back(res);
    	return ans;
    } 
};