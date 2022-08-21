#include<bits/stdc++.h>
using namespace std;
int a[1000][1000], b[1000][1000];
void xuly()
{
	memset(b,0,sizeof(b));
	int n, m; cin>> n>> m;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>> a[i][j];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==0&&j==0)
			{
				b[i][j+a[i][j]]=1;
				b[i+a[i][j]][j]=1;
			}
			else
			{
				if(b[i][j]!=0)
				{
					if(b[i][j+a[i][j]]==0) b[i][j+a[i][j]]= b[i][j]+1;
					else b[i][j+a[i][j]]= min(b[i][j]+1,b[i][j+a[i][j]]);
					if(b[i+a[i][j]][j]==0) b[i+a[i][j]][j]= b[i][j]+1;
					else b[i+a[i][j]][j]= min(b[i][j]+1,b[i+a[i][j]][j]);
				}
			}
		}
	}
	cout<< b[n-1][m-1]<< endl;
}
int main()
{
	int t; cin>> t; while(t--)
	{
		xuly();
	}
}
