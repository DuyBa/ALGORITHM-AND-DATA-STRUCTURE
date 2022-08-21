#include<iostream>
using namespace std;
int a[10000]={};
int n,m;

void out()
{
	for(int i=1;i<=m;i++) cout<< a[i];
	cout<< " ";
}

void in(int i)
{
	for(int j=a[i-1]+1;j<=n-m+i;j++)
	{
		a[i]=j;
		if(i==m) out();
		else in(i+1);
	}
}



int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		cin>> n>> m;
		in(1);
		cout<< endl;
	}
}
