#include<bits/stdc++.h>
using namespace std;
string s;
int qhd()
{
	int n=s.size(), a[100000]={0};
	if(s[0]=='0') return 0;
	
	a[0]=1; a[1]= 1;
	for(int i=2;i<=s.size();i++)
	{
		if(s[i-1]>'0') a[i]= a[i-1];
		if(s[i-2]=='1'or(s[i-2]=='2'&&s[i-1]<'7')) a[i]+=a[i-2];
	}
	return a[s.size()];
}
int main()
{
	int t; cin>> t; while(t--)
	{
		cin>> s;
		cout<< qhd()<< endl;
	}
}
