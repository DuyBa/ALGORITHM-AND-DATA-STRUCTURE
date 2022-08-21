#include<bits/stdc++.h>
using namespace std;
int a[20][20], b[20][20], dem, n, m;
void bk(int i, int j)
{
	if(i==n-1&&j==m-1) dem++;
	if(b[i+1][j]==0&&i+1<=n)
	{
		b[i+1][j]=1;
		bk(i+1,j);
		b[i+1][j]=0;
	}
	if(b[i][j+1]==0&&j+1<=m)
	{
		b[i][j+1]=1;
		bk(i,j+1);
		b[i][j+1]=0;
	}
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		dem=0;
		b[20][20]={0};
		cin>> n>> m;
		for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>> a[i][j];
		bk(0,0);
		cout<< dem<< endl;
	}
}
