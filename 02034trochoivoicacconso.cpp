#include<bits/stdc++.h>
using namespace std;
int n, a[100000]={}, ck[10000]={};
int ck1()
{
	for(int i=1;i<=n-1;i++) if(abs(a[i+1]-a[i])==1) return 0;
	return 1;
}
void out()
{
	if(ck1())
	{
		for(int i=1;i<=n;i++) cout<< a[i];
		cout<< endl;
	}
}
void bk(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(ck[j]==0)
		{
			a[i]=j;
			ck[j]=1;
			if(i==n) out();
			else bk(i+1);
			ck[j]=0;
		}
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		cin>> n;
		bk(1);
	}
}
