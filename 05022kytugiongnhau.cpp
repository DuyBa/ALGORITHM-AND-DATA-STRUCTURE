#include<bits/stdc++.h>
using namespace std;
int a[10000], x, y, z, n;
int qhd()
{
	memset(a,0,sizeof(a));
	a[1]=x;
	for(int i=2;i<=n;i++)
	{
		if(i%2==0) a[i]= min(a[i-1]+x, a[i/2]+z);
		else a[i]= min(a[i-1]+x, a[(i+1)/2]+y+z);
	}
	return a[n];
}
int main()
{
	int t; cin>> t; while(t--)
	{
		cin>> n>> x>> y>> z;
		cout<< qhd()<< endl;
	}
}
