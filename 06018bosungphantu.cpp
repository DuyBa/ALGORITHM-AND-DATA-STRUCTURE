#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		int a[10000]={}, b[100000]={};
		for(int i=0;i<n;i++)
		{
			cin>> a[i];
			b[a[i]]++;
		} 
		sort(a,a+n);
		int dem=0;
		int be=a[0], lon= a[n-1];
		for(int i=be;i<=lon;i++)
		if(b[i]==0) dem++;
		cout<< dem<< endl;
	}
}
