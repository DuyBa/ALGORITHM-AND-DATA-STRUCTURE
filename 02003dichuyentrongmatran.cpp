#include<bits/stdc++.h>
using namespace std;
int dem, a[11][11], n, ck[10][10];
string s;
void out(int k)
{
	dem=1;
	for(int i=0;i<k;i++) cout<< s[i];
	cout<< " ";
}
void bk(int i, int j, int k )
{
	if(i==n-1&&j==n-1)
	{
		out(k);
		return;
	} 
	if(a[i+1][j]==1&&i+1<n&&ck[i+1][j]==0) 
	{
		s[k]= 'D';
		ck[i+1][j]=1;
		bk(i+1,j,k+1);
		ck[i+1][j]=0;
	}
	if(a[i][j+1]==1&&j+1<n&&ck[i][j+1]==0) 
	{
		s[k]= 'R';
		ck[i][j+1]=1;
		bk(i,j+1,k+1);
		ck[i][j+1]=0;
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		a[11][11]={};
		ck[10][10]={};
		dem=0;
		cin>> n;
		for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>> a[i][j];
		if(a[0][0]==0) cout<< -1<< endl;
		else
		{
			bk(0,0,0);
	    	if(dem==0) cout<< -1;
	    	cout<< endl;
		}

	}
}
