#include<bits/stdc++.h>
using namespace std;
string a[1000]; int  c[1000][1000];
int main()
{
	memset(c,0,sizeof(c));
	int n, m;
	cin>> n>> m;
	for(int i=0;i<n;i++) cin>> a[i];
	int ck=0;
	for(int i=0;i<m;i++) 
	{
		if(a[0][i]=='#'&&a[0][i]==a[0][i-1]) c[0][i]=ck;
		else if(a[0][i]=='#'&&a[0][i]!=a[0][i-1]) 
		{
			ck++;
			c[0][i]=ck;
		}
	}
	for(int i=1;i<n;i++)
	{
		if(a[i][0]=='#'&&a[i][0]==a[i-1][0]) c[i][0]=ck;
		else if(a[i][0]=='#'&&a[i][0]!=a[i-1][0])
		{
			ck++;
			c[i][0]=ck;
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			if(a[i][j]=='#')
			{
				if(a[i][j]==a[i-1][j]) c[i][j]= c[i-1][j];
				if(a[i][j]==a[i][j-1]) c[i][j]= c[i][j-1];
			} 
			if(a[i][j]=='#'&&a[i][j]!=a[i-1][j]&&a[i][j]!=a[i][j-1])
			{
				ck++;
				c[i][j]=ck;
			}
		}
	}
	cout<< ck;
}
