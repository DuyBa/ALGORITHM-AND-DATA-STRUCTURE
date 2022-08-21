#include<bits/stdc++.h>
#include<sstream>
using namespace std;
string s1, s[100],c[100];
int n, m, a[10000]={}, n1;
void out()
{
	for(int i=1;i<=m;i++) cout<< c[i]<< " ";
	cout<< endl;
}
void bk(int i)
{
	for(int j=a[i-1]+1;j<=n1-m+i;j++)
	{
		a[i]=j;
		c[i]=s[a[i]-1];
		if(i==m) out();
		else bk(i+1);
	}
}
int main()
{
	cin>> n>> m;
	scanf("\n");
	getline(cin, s1);
	string tmp;
	stringstream ss1(s1);
    n1=0;
	while(ss1 >> tmp)
	{
		int ck=0;
		for(int i=0;i<n1;i++) if(s[i]==tmp) ck=1;
		if(ck==0) s[n1++]=tmp;
	}
	sort(s,s+n1);
	bk(1);
}
