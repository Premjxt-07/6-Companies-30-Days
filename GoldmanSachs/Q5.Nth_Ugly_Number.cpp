#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long n;
        long t2, t3, t5, c = 1, flag, mn;
        cin>>n;
        long arr[n];
        arr[0] = 1;
        long i = 0;
        long j = 0;
        long k = 0;
        while(c<n){
            t2 = arr[i]*2;
            t3 = arr[j]*3;
            t5 = arr[k]*5;
            mn =  (t2 < t3) ? ((t2 < t5) ? t2 :t5) : ((t5 < t3) ? t5: t3);
            arr[c] = mn;
            c++;
            
            if(mn == t2)
                i+=1;
            if(mn == t3)
                j+=1;
            if(mn == t5)
                k+=1;
        }    
        long res = arr[n-1];
        cout<<res;
    }
	return 0;
}