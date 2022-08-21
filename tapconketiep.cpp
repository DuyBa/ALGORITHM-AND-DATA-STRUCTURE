#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int m, n, dc=-1, a[10000]={};
		cin>> m>> n;
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=n-1;i>=0;i--) 
		{
			if(m-n+i+1>a[i]) 
			{
				dc= i;
				break;
			}
		}
		if(dc==-1) for(int i=0;i<n;i++) cout<< i+1<< " ";
		else 
		{
			int bd=a[dc]+1;
			for(int i=0;i<dc;i++) cout<< a[i]<< " ";
			for(int i=dc;i<n;i++)
			{
				cout<< bd<< " ";
				bd++;
			}	
		}
		cout<< endl;
	}
}
