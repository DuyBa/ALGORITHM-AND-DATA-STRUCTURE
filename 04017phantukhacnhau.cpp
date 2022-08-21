#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, ck=0;
		cin>> n;
		int a[10000000]={}, b[10000000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=0;i<n-1;i++)
		{
			cin>> b[i];
			if(b[i]!=a[i]&&ck==0) 
			{
				cout<<i+1<< endl;
				ck=1;
			}
		}
	}
}
