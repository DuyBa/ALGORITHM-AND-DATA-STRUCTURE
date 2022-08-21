#include<iostream>
using namespace std;
int n, k, a[10000]={}, b[1000]={}, dem=0;
void out()
{
	int tong=0;
	for(int i=1;i<=n;i++)
	{
		if(b[i]==1) tong+=a[i];
	}
	if(tong==k)
	{
		dem++;
		for(int i=1;i<=n;i++) if(b[i]==1) cout<< a[i]<< " ";
		cout<< endl;
	}
	
}
void ql(int i)
{
	for(int j=0;j<=1;j++)
	{
		b[i]=j;
		if(i==n) out();
		else ql(i+1);
	}
}

	int main()
	{
		cin>> n>> k;
		for(int i=1;i<=n;i++) cin>> a[i];
		ql(1);
		cout<< dem;
	}

