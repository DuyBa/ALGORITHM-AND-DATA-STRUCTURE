#include<bits/stdc++.h>
using namespace std;
int a[100000], n, b[]={6,8};
void out()
{
	for(int i=1;i<=n;i++) cout<< a[i];
	cout<< " ";
}
void bk(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=b[j];
		if(i==n) out();
		else bk(i+1);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		cin>> n;
		cout<< pow(2,n)<< endl;
		bk(1);
		cout<< endl;
	}
}
