#include<bits/stdc++.h>
using namespace std;
int a[100], n, dem;
string s;
void out(int k)
{
	dem++;
	s+="(";
	for(int i=1;i<=k-1;i++) s+= to_string(a[i])+ " ";
	s+= to_string(a[k])+ ") ";
}
void bk(int n, int k, int s)
{
	for(int i=n;i>=1;i--)
	{
		a[k]=i;
		if(s==i) out(k);
		else if(i<s) bk(i,k+1,s-i);
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		dem=0;
		s.clear();
    	cin>> n; 
    	bk(n,1,n);
    	cout<< dem<< endl;
    	for(int i=0;i<s.size();i++) cout<< s[i];
    	cout<< endl;
	}
}
