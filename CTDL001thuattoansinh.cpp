#include<iostream>
using namespace std;
int a[50]={}, n;
int ck(int a[])
{
	int l=1, r=n;
	while(l<=r)
	{
		if(a[l]!=a[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
void out()
{
	
	if(ck(a)==1)
	{
					for(int i=1;i<=n;i++) cout<< a[i]<< " ";
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
	cin>> n;
	bk(1);
}
