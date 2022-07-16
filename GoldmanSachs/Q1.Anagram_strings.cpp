#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>&s) {
        vector<vector<string>> vect;
        map<string,vector<string>> mp;
        for(int i=0;i<s.size();i++){
        string word=s[i];
        sort(word.begin(),word.end());
        mp[word].push_back(s[i]);
        }
        for(auto i:mp){
        vect.push_back(i.second);
        }
        return vect ;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
