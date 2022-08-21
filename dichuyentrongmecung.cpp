#include<bits/stdc++.h>
using namespace std;
int dem, a[1000][1000], n, ck[1000][1000], kk;
string s;
void out(int k)
{
	dem++;
}
void out1(int k)
{
	for(int i=0;i<k;i++) cout<< s[i];
	cout<< " ";
}
void bk(int i, int j, int k )
{
	if(i==n-1&&j==n-1&&a[i][j]==1&&kk==0)
	{
		out(k);
		return;
	}
	if(i==n-1&&j==n-1&&a[i][j]==1&&kk==1)
	{
		out1(k);
		return;
	} 
	if(a[i+1][j]==1&&i+1<n&&ck[i+1][j]==0) 
	{
		s[k]= 'D';
		ck[i+1][j]=1;
		bk(i+1,j,k+1);
		ck[i+1][j]=0;
	}
	if(a[i][j-1]==1&&j-1>=0&&ck[i][j-1]==0) 
	{
		s[k]= 'L';
		ck[i][j-1]=1;
		bk(i,j-1,k+1);
		ck[i][j-1]=0;
	}
	if(a[i][j+1]==1&&j+1<n&&ck[i][j+1]==0) 
	{
		s[k]= 'R';
		ck[i][j+1]=1;
		bk(i,j+1,k+1);
		ck[i][j+1]=0;
	}
	if(a[i-1][j]==1&&i-1>=0&&ck[i-1][j]==0) 
	{
		s[k]= 'U';
		ck[i-1][j]=1;
		bk(i-1,j,k+1);
		ck[i-1][j]=0;
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		kk=0;
		memset(ck, 0 , sizeof(ck));
		dem=0;
		cin>> n;
		for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>> a[i][j];
		if(a[0][0]==0) cout<< -1<< endl;
		else
		{
			ck[0][0]=1;
			bk(0,0,0);
	    	if(dem==0) cout<< -1;
	    	else 
	    	{
	    		cout<< dem<< " ";
	    		kk=1;
	    		bk(0,0,0);
			}
	    	cout<< endl;
		}
	}
}

