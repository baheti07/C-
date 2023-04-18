 string mergeAlternately(string word1, string word2) {
        string ans="";
        int p1=0,p2=0;
        int n1=word1.length();
        int n2=word2.length();
        int i=0;
        while(p1!=n1&&p2!=n2){
            if(i%2==1) ans+=word2[p2++];
            else ans+=word1[p1++];
            i++;
        }
        if(p1!=n1){
            ans+=word1.substr(p1,n1);
        }
        if(p2!=n2){
            ans+=word2.substr(p2,n2);
        }
        return ans;
    }