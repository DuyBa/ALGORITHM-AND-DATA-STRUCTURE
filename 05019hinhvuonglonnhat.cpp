#include<bits/stdc++.h>
using namespace std;
int a[1000][1000], c[1000][1000], n, m;
int qhd()
{
	int kq=0;
	for(int i=2;i<=n;i++) for(int j=2;j<=m;j++)
	if(a[i][j]==1&&a[i-1][j]==1&&a[i][j-1]==1&&a[i-1][j-1]==1)
	{
		if(c[i-1][j]!=0&&c[i][j-1]!=0&&c[i-1][j-1]!=0)
		{
			if(abs(c[i-1][j]-c[i-1][j-1])<2&&abs(c[i][j-1]-c[i-1][j-1])<2)
			{
				c[i][j]=c[i-1][j-1]+1;
	        	
			}
			else
			{
			    c[i][j]=c[i-1][j-1]-1;
				kq= max(kq, c[i][j]);
			}
		}
	}
	for(int i=1;i<=n;i++) 
	{
		for(int j=1;j<=m;j++) cout<< c[i][j]<< " ";
		cout<< endl;
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		cin>> n>> m;
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) 
		{
			cin>> a[i][j];
			c[i][j]=a[i][j];
		}
		
		qhd();
	}
}
