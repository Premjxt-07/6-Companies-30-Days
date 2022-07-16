#include <bits/stdc++.h>
using namespace std;

string decode(string s)
{
	stack<int>count;
	stack<string>result;
	string res="";
	int i=0;
	while(i<s.size())
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			int c=0;
			while(s[i]>='0'&&s[i]<='9')
			{
				c=c*10+(s[i]-'0');
				i++;
			}
			count.push(c);
		} else if(s[i]=='[')
		{
			result.push(res);
			res="";i++;
		}
		 else if(s[i]==']')
		{
			string temp=result.top();result.pop();
			int c=count.top();count.pop();
			for(int j=0;j<c;j++)
			{
				string str=temp+res;
				temp=str;
			}
			res=temp;
			i++;
		}
		else
		{
			res=res+s[i];i++;
		}
	}
	return res;
}
int main() {
	int t;cin>>t;
	while(t--)
	{
	    string s;cin>>s;
	    cout<<decode(s)<<endl;
	}
	return 0;
}