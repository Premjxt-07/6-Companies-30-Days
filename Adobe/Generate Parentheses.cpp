#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


class Solution
{
    public:
   void solve(int n,string s,int open,int close,vector<string>&ans)
{
    if(open>n ||   close>n || close>open) {
        return ;
    }
    if(s.length()==2*n   and  open==close) 
        ans.push_back(s);
        
    solve(n,s+'(',open+1,close,ans);
    solve(n,s+')',open,close+1, ans);
}



    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans ;
        string s = "" ;
        solve(n,s,0,0,ans) ;
        return ans  ;
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
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 