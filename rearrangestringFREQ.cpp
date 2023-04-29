#include<bits/stdc++.h>
using namespace std;
string rearrange(string s)
{
    vector<int>freq(26);
    int mf=0,i=0;
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
        if(freq[s[i]-'a']>freq[mf]) mf=(s[i]-'a');
    }
    if(freq[mf]>(s.length()+1)/2) return "";
    while(freq[mf])
    {
        s[i]=('a'+mf);
        i+=2;
        freq[mf]--;
    }
    for(int j=0;j<26;j++)
    {
        while(freq[j])
        {
            if(i>=s.length()) i=1;
            s[i]=('a'+j);
            freq[j]--;
            i+=2;
        }
    }
    return s;
}
int main()
{
    string s="aaabc";
    cout<<rearrange(s);
}