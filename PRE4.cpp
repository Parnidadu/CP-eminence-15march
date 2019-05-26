#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin >>  arr[i];
    }
    for(int i=0;i<n/2;i++){
        long sum = arr[i]+arr[(n-i)-1];
        cout << sum/10<<" "<<sum%10<<endl;
    }
	return 0;
}
