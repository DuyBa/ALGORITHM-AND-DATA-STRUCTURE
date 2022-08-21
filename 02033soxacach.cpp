#include<bits/stdc++.h>
using namespace std;
int a[10000]={}, ck[10000]={};
int n;
int ck1()
{
	for(int i=1;i<=n-1;i++) if(abs(a[i+1]-a[i])==1) return 0;
	return 1;
}
void out()
{
	if(ck1())
	{
		for(int i=1;i<=n;i++) cout<< a[i];
    	cout<< endl;
	}

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
	}
}
