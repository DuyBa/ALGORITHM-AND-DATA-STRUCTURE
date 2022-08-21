#include<bits/stdc++.h>
using namespace std;
int cv(int k, string a)
{
	int ans=0;
	for(int i=0;i<a.length();i++)
	{
		ans= ans*k + a[i]- '0';
	}
	return ans;
}
string cv1(int k, int a)
{
	string ans;
	while(a)
	{
		ans= to_string(a%k) + ans;
		a/= k;
	}
	return ans;
}
int main()
{
	int t; cin>> t; while(t--)
	{
		int k; cin>> k;
		string a, b; cin>> a>> b;
		int x= cv(k, a), y= cv(k, b), ans= x + y;
		cout<< cv1(k, ans)<< endl;
	}
}
