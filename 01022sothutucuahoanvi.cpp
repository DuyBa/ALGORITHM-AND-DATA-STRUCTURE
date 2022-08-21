#include<iostream>
using namespace std;
int b[100000], ck[100000], a[100000];
int n, dem;
int check()
{
	for(int i=1;i<=n;i++) if(a[i]!=b[i]) return 0;
	return 1;
}
void out()
{
	dem++;
	if(check()) cout<< dem;	
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
		b[100000]={}, ck[100000]={}, a[100000]={};
		dem=0;
		cin>> n;
		for(int i=1;i<=n;i++) cin>> b[i];
		bk(1);
		cout<< endl;
	}
}
