#include<bits/stdc++.h>
using namespace std;
int c[20][20], a[100], b[100]={0}, n, cm=1e9, fopt=1e9;
void bk(int i)
{
	int gtri=0;
	for(int j=2;j<=n;j++)
	{
		if(b[j]==0)
		{
			b[j]=1; a[i]=j;
			gtri= gtri+ c[a[i-1]][a[i]];
			if(i==n)
			{
				int s=gtri+ c[a[n]][a[1]];
				fopt= min(fopt, s);
			}
			else if(gtri+ cm*(n-i+1)< fopt){
				bk(i+1);
			}
			gtri= gtri- c[a[i-1]][a[i]];
			b[j]=0;
		}
	}
}
int main()
{
	cin>> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>> c[i][j];
			if(i!=j) cm= min( cm, c[i][j]);
		}
	}
	a[1]=1;
	bk(2);
	cout<< fopt<< endl;
}
