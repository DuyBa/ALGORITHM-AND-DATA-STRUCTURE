#include<iostream>
using namespace std;
int a[10000]={}, ck[10000]={};
int n;
int dem=0;
void out()
{
	for(int i=1;i<=n;i++) cout<< a[i];
	cout<< endl;
}

void in(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(ck[j]==0)
		{
			ck[j]=1;
			a[i]=j;
			if(i==n) out();
	    	else in(i+1);
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
		in(1);
		cout<< endl;
	}
}
