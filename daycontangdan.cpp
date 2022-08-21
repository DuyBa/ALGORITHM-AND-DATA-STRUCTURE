#include<bits/stdc++.h>
using namespace std;
int a[100000], b[10000], c[10000], n, dem,co;
string s[10000];
int ck()
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		if(c[i]==1) tong++;
	}
	if(tong<2) return 0;
	
	int idx, res;
	for(int i=0;i<n;i++) 
	{
		if(c[i]==1) 
		{
			idx=i;
			res=a[i];
			break;
		}
	}
	
	for(int i=idx+1;i<n;i++)
	{
		if(c[i]==1)
		{
			if(a[i]<res) return 0;
			else 
			{
				res=a[i];
			}
		}
	}
	return 1;
}
void out()
{
	int dem=n-1;
	for(int i=0;i<n;i++)
	{
		c[dem]=b[i];
		dem--;
	}
	if(ck())
	{
		for(int i=0;i<n;i++)
		{
			if(c[i]==1) 
			s[co]+= to_string(a[i])+" ";
		}
		co++;
	}
}
void bk(int i)
{
	for(int j=0;j<=1;j++)
	{
		b[i]=j;
		if(i==0) out();
		else bk(i-1);
	}
}
int main()
{
	dem=0;
	co=0;
	cin>> n;
	for(int i=0;i<n;i++) cin>> a[i];
	bk(n-1);
	sort(s,s+co);
	for(int i=0;i<co;i++)
	{
		for(int j=0;j<s[i].size();j++) cout<< s[i][j];
		cout<< endl;
	}
	
	
}
