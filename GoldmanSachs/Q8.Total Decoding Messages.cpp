#include <iostream>
using namespace std;
int dp[1002];
    int find(string s,int n)
    {
      if(n==s.length()-2)
      {
          return dp[n];
      }
      int ans=find(s,n+1);
        int v=(int)(s[n])-48;
        int v1=(int)(s[n+1])-48;
        if((v>0 && v<2 && v1!=0)||(v>0 && v<=2 && v1<7))
            ans+=dp[n+2];
        else if(v==0)
            ans=0;
        return dp[n] =ans;
    
    }
int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
        if(n==1)
       {
           if(s[0]=='0')
               cout<<0<<endl;
           else
               cout<<1<<endl;
       }
       else
       {
        if(s[n-1]=='0')
            dp[n-1]=0;
        else
            dp[n-1]=1;
        int x=(int)(s[n-2])-48;
        int y=(int)(s[n-1])-48;
        if((x>0 && x<3 && y>0 && y<7)||(x<2 && x>0 && y!=0))
            dp[n-2]=2;
        else if((x==0)||(y==0 && x>2))
            dp[n-2]=0;
        else 
            dp[n-2]=1;
        
        cout<<find(s,0)<<endl;
       }
	}
	return 0;
}