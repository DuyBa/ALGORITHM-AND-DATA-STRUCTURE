#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int a[100000]={};
		int n;
		cin>> n;
		for(int i=0;i<n;i++) cin>> a[i];
		int dc=-1;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i-1]<a[i])
			{
				dc=i-1;
				break;
			}
		}
		if(dc==-1) for(int i=0;i<n;i++) cout<< i+1<<" ";
		else 
		{
			int dc1;
			for(int i=dc+1;i<n;i++) if(a[i]>a[dc]) dc1=i;
			swap(a[dc],a[dc1]);
			sort(a+dc+1,a+dc+1+n-dc-1);
			for(int i=0;i<n;i++) cout<< a[i]<< " ";
		}
		cout<< endl;
	}
}
