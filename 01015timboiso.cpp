#include<iostream>
using namespace std;
int dem, a[10], b[]={0,9},m, n=10;
void out()
{
	long long sum=0, dc;
	for(int i=1;i<=n;i++)
	{
		sum=sum*10+a[i];
	}		
	if(sum%m==0&&sum!=0)
	{
		cout<< sum;
		dem=1;
	} 
}
void bk(int i)
{
	if(dem==1) return;
	for(int j=0;j<=1;j++)
	{
		a[i]=b[j];
		if(i==n) out();
		else bk(i+1);
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		dem=0;
		a[11]={};
		cin>> m;
		bk(1);
		cout<< endl;
	}
}
