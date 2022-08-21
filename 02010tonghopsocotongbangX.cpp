#include<bits/stdc++.h>
using namespace std;
int a[10000], c[100000], m, n, ck, dem;
string s[100000];
void out(int n)
{
	ck=1;
	s[dem]+= "{";
	for(int i=0;i<n;i++) s[dem]+= to_string(c[i]) + " ";
	s[dem]+= to_string(c[n])+ "}";
	dem++;
}
void bk(int j, int k, int s)
{
	for(int i=j; i<n; i++)
	{
	    if(a[i]==s) 
		{
			ck=1;
			c[k]=a[i];
			out(k);
		}
		else 
		if(a[i]<s)
		{
			c[k]=a[i];
			bk(i,k+1,s-a[i]);
		} 
	}
	
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		dem=0;
		ck=0;
		cin>> n>> m;
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		bk(0,0,m);
		if(ck==0) cout<< -1;
		else
		{
			cout<< dem+1<< " ";
			for(int i=0;i<dem;i++) cout<< s[dem]<< " ";
		}
		cout<< endl;
	}
}
