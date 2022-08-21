#include<iostream>
using namespace std;
int a[50], n, m;
int ck(int a[])
{
	int t=0;
	for(int i=1;i<=n;i++) t+=a[i];
	if(t==m) return 1;
	return 0;
}
void out()
{
	
	if(ck(a)==1)
	{
		for(int i=1;i<=n;i++) cout<< a[i];
		cout<< endl;
	}	
}

void bk(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
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
		n=0; m=0; a[50]={};
		cin>> n>> m;
    	bk(1);
	}

}
