#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n,m,p;
		cin>> n>> m>> p;
		int a[100000]={};
		for(int i=0;i<n+m;i++) cin>> a[i];
		sort(a,a+n+m);
		cout<< a[p-1]<<endl;
	}
}
