#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr =  new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long even=0, odd=0;
    for(int i=0;i<n;i+=2){
        if(arr[i]%2==0)
            even+=arr[i];
    }
    for(int i=1;i<n;i+=2){
        if(arr[i]%2!=0)
            odd+=arr[i];
    }
    cout << even <<" "<< odd;
	return 0;
}
