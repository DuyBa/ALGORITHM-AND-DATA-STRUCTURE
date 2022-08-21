#include<bits/stdc++.h>
using namespace std;
int a[100000], n, dem;
void out(int k)
{
	dem++;
}
void out1(int k)
{
	cout<< "(";
	for(int i=0;i<=k-1;i++) cout<< a[i]<< " ";
	cout<< a[k]<< ") ";
}
void bk(int n, int k, int s)
{
	for(int j=n;j>=1;j--)
	{
		a[k]=j;
		if(s==j) out(k);
		else if(j<s) bk(j,k+1,s-j);
	}
}
void bk1(int n, int k, int s)
{
	for(int j=n;j>=1;j--)
	{
		a[k]=j;
		if(s==j) out1(k);
		else if(j<s) bk1(j,k+1,s-j);
	}
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		dem=0;
		cin>> n;
		bk(n,0,n);
		cout<< dem<< endl;
		bk1(n,0,n);
		cout<< endl;
	}	
}
