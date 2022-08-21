#include<bits/stdc++.h>
using namespace std;
int a[100], n;
void out(int k)
{
	cout<< "(";
	for(int i=1;i<=k-1;i++) cout<< a[i]<< " ";
	cout<< a[k]<< ") ";
}
void bk(int n, int k, int s)
{
	for(int i=n;i>=1;i--)
	{
		a[k]=i;
		if(s==i) out(k);
		else if(i<s) bk(i,k+1,s-i);
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
    	cin>> n; 
    	bk(n,1,n);
    	cout<< endl;
	}
}
