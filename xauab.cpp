#include<bits/stdc++.h>
using namespace std;
string s="AB",s1;
int n, dem;
long long ck;
void out()
{
	dem++;
	for(int i=0;i<n;i++) cout<< s1[i];
	if(dem< ck) cout<< ",";
}
void bk(int i)
{
	for(int j=0;j<=1;j++)
	{
		s1[i]=s[j];
		if(i==n-1) out();
		else bk(i+1);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		dem=0;
		cin>> n;
		ck= pow(2,n);
		bk(0);
		cout<< endl;
	}
}
