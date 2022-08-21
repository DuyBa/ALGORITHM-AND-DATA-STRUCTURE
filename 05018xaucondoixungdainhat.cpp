#include<bits/stdc++.h>
using namespace std;
int a[1000][1000], kq;
string s;
int qhd(string s)
{
	int kq=1;
	memset(a,0,sizeof(a));
	int n= s.size();
	for(int i=0;i<n;i++) a[i][i]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			int k=i+j;
			if(s[k]==s[j]&&i>1) a[j][k]= a[j+1][k-1];
			else if(s[j]==s[k]&&i==1) a[j][k]=1;
			else a[j][k]=0;
			if(a[j][k]) kq= max(kq, k-j+1);
		}
	}
	return kq;
}
int main()
{
	int t; cin>> t; while(t--)
	{
		kq=0;
		cin>> s;
		cout<< qhd(s)<< endl;
	}
}
