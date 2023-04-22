vector <int> search(string pat, string txt)
        {
            //code hee.
            int n=pat.size();
            int m=txt.size();
            vector<int>ans;
            string ns=pat+"$"+txt;
            vector<int>z;
            int i=0;
            while(i<ns.length()){
                if(i<=n) z.push_back(0);
                else{
                    int left=0,right=0;
                    if(ns[left]==ns[i]){
                        right=i;
                        while(ns[left]==ns[right]&&right<ns.length()){
                            left++;
                            right++;
                        }
                    }
                    z.push_back(left);
                }
                i++;
            }
            for(int i=0;i<ns.length();i++)
            {
                if(z[i]==n) ans.push_back(i-n);
            }
            return ans;
        }