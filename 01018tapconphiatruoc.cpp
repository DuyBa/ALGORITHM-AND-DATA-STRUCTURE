#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m;
		int a[1000]={};
		cin>> n>> m;
		for(int i=1;i<=m;i++) cin>> a[i];
		int dc=m;
		while(a[dc]-a[dc-1]==1&&dc>0) dc--;
		a[dc]--;
		for(int i=dc+1;i<=m;i++) a[i]=i+n-m;
		for(int i=1;i<=m;i++) cout<< a[i]<< " ";
		cout<< endl;
	}
}
