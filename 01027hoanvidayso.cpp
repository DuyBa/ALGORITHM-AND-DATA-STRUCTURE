#include<bits/stdc++.h>
using namespace std;
int a[10000]={}, ck[10000]={}, b[10000]={};
int n;

void out()
{
	for(int i=0;i<n;i++) cout<< a[i]<< " ";
	cout<< endl;
}

void in(int i)
{
	for(int j=0;j<n;j++)
	{
		if(ck[j]==0)
		{
			ck[j]=1;
			a[i]=b[j];
			if(i==n-1) out();
	    	else in(i+1);
	    	ck[j]=0;
		}	
	}
}

int main()
{
	cin>> n;
	for(int i=0;i<n;i++) cin>> b[i];
	sort(b,b+n);
	in(0);	
}

