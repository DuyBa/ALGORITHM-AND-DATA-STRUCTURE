#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n, m; cin>> n>> m;
		int a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		long long n1=0,n2=0;
		int mn= min(m,n-m);
		for(int i=0;i<mn;i++) n1+= a[i];
		for(int i=mn;i<n;i++) n2+= a[i];
		cout<< n2-n1<< endl;
	}
}
