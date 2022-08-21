#include<iostream>
using namespace std;
int a[100000], ck[100000], n;
void out()
{
	for(int i=1;i<=n;i++) cout<< a[i];
	cout<< " ";
}
void ql(int i)
{
	for(int j=n;j>=1;j--)
	{
		if(ck[j]==0)
		{
			a[i]=j;
			ck[j]=1;
			if(i==n) out();
			else ql(i+1);
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
	    a[100000]={};
		ck[100000]={};
		cin>> n;
		ql(1);
		cout<< endl;
	}
}
