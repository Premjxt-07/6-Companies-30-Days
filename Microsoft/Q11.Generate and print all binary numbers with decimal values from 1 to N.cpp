#include<bits/stdc++.h>
using namespace std;

vector<string> generate(int N)
{   
    vector<string> s;
    string str="";
	for(int i=1;i<=N;i++){
	    int a=i;
	    while(a){
	        int b=a%2;
	        str=to_string(b)+str;
	        a=a/2;
	    }
	    s.push_back(str);
	    str="";
	}
	return s;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
