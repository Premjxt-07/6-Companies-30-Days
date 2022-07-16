#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
       int i,miss=0,repeat=0;
       for (int i = 0; i < n; ++i)
   {
       if(arr[abs(arr[i])-1] > 0)
           arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
           
       else
           repeat = abs(arr[i]);
   }
           for(i=0;i<n;i++)
           {
               if(arr[i]>0)
               miss=i+1;
           }
           return new int[2]{repeat,miss};
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;