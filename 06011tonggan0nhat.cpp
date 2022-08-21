#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		int a[10000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		int d1=9999999,d2=0;
		for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(abs(a[i]+a[j])<d1)
			{
				d1=abs(a[i]+a[j]);
				d2=a[i]+a[j];
			 } 
		}
		cout<< d2<< endl;
	}
}
