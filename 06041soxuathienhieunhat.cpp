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
		int a[100000]={}, b[100000]={};
		for(int i=0;i<n;i++) 
		{
			cin>> a[i];
			b[i]++;
		}
		sort(a,a+n);
		int j=0;
		for(int i=0;i<n;i++)
		{
			if(b[i]==1)
			{
				int j=i+1;
		    	while(j<n && a[j]==a[i])
		    	{
		    		b[i]++;
		    		b[j]=0;
		    		j++;
		    	}
			}
		}
		int m=b[0], dc=0;
		for(int i=0;i<n;i++)
		{
			if(b[i]>m) 
			{
				m=b[i];
				dc=i;
			}
		}
		if(m>n/2) cout<< a[dc];
		else cout<< "NO";
		cout<< endl;
	}
}
