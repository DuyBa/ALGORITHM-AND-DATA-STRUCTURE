#include<bits/stdc++.h>
using namespace std;
int n, m;
int b[100000]={}, c[100000]={}, d[100000]={};
vector <int> a;
void out()
{
	for(int i=1;i<=m;i++) cout<< d[i]<< " ";
	cout<< endl;
}
void bk(int i)
{
	for(int j=c[i-1]+1;j<=a.size()-1-m+i;j++)
	{
		c[i]=j;
		d[i]=a[c[i]];
		if(i==m) out();
		else bk(i+1);
	}
}
int main()
{
	cin>> n>> m;
	for(int i=0;i<n;i++) cin>> b[i];
	sort(b,b+n);
	a.push_back(0);
	for(int i=1;i<=n;i++) a.push_back(b[i-1]);
	int dc=1;
	while(dc<a.size()-1)
	{
		int xoa=dc+1;
		while(a[xoa]==a[dc])
		{
			a.erase(a.begin()+xoa);
		}
		dc++;
	}
	bk(1);
}

