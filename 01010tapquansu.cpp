#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m, b[10000]={}, a[10000]={}, dem=0;
		cin>> n>> m;
		for(int i=1;i<=m;i++) 
		{
			cin>> b[i];
			a[i]=b[i];
		}
		int idx= m;
		while(b[idx]>=n-m+idx&&idx>0) idx--;
		if(idx==0) cout<< m<< endl;
		else 
		{
			b[idx]++;
			for(int i=idx+1;i<=m;i++) b[i]=b[i-1]+1;
			for(int i=1;i<=m;i++) for(int j=1;j<=m;j++) if(b[j]==a[i]) dem++; 
	    	cout<< m-dem<< endl;
		}	
	}
}
