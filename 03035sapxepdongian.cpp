#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>> n;
	int a[n], b[n]={0}, ans=0;
	for(int i=0;i<n;i++)
	{
		cin>> a[i];
		b[a[i]]=b[a[i]-1]+1;
		ans= max(ans, b[a[i]]);
	}
	cout<< n-ans<< endl;
}
