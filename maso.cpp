#include<bits/stdc++.h>
using namespace std;
int n, a[100000], ck[10000]={}, dem, co;
string s,t;
vector <int> b[100000];
vector <string> c[10000];
void out()
{
	for(int i=0;i<n;i++) b[dem].push_back(a[i]);
	dem++;
}
void bk(int i)
{
	for(int j=1;j<=n;j++)
	{
		a[i]=j;
		if(i==n-1) out();
		else bk(i+1);
	}
}
void out1()
{
	for(int i=0;i<dem;i++)
	{
		for(int j=0;j<n;j++) cout<< t[j];
		for(int j=0;j<n;j++) cout<< b[i][j];
		cout<< endl;
	}
}
void ql(int i)
{
	for(int j=0;j<n;j++)
	{
		if(ck[j]==0)
		{
			ck[j]=1;
			t[i]=s[j];
			if(i==n-1) out1();
			else ql(i+1);
			ck[j]=0;
		}
	}
}
int main()
{
	cin>> n;
	cin.ignore();
	for(int i=0;i<n;i++) s[i]=i+65;
	bk(0);
	ql(0);
}
