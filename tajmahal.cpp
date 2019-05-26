#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
 
 
int main()
{
 
  int n;
    cin>>n;
    long * ans=new long[n];
    long  * arr=new long[n];
  for(int i=0;i<n;i++){
   cin >> arr[i]; 
  }
 
  for(int i=0;i<n;i++){
        arr[i]-=i-1;
        if(arr[i]<0)
            arr[i]=0;
        long te=arr[i]/n;
        if(arr[i]%n!=0)
            te+=1;
        ans[i]=(n*te+i);
    }
 
  int mini=INT_MAX;
  int ind;
  for(int i=0;i<n;i++){
  if(ans[i]<mini) {
    mini = ans[i];
    ind = i;
  }
  }
  cout << ind+1;
	return 0;
}
