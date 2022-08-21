#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int n, a[100000];
    cin>> n;
	for(int i=0;i<n;i++) cin>> a[i];
	sort(a,a+n);
	long long ans = max(a[0] * a[1], max(a[0] * a[1] * a[n - 1], max(a[n - 1] * a[n - 2], a[n - 1] * a[n - 2] * a[n - 3])));
	if( ans > 0) cout<< ans;
	else cout<< 0;
	cout<< endl;
}
