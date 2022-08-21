#include<iostream>
using namespace std;
int a[10000]={}, b[10000]={}, dem=0;
int n,m;
int ck()
{
	for(int i=1;i<=m;i++) if(a[i]!=b[i]) return 0;
	return 1;
}
void out()
{
	dem++;
	if(ck()) cout<< dem;
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
		a[10000]={}, b[10000]={}, dem=0;
		cin>> n>> m;
		for(int i=1;i<=m;i++) cin>> b[i];
		in(1);
		cout<< endl;
	}
}
