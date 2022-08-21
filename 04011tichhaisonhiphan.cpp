#include<bits/stdc++.h>
using namespace std;
long long cv(string a)
{
	long long ans= 0;
	for(int i=0;i<a.size();i++)
		ans= ans* 2 + (a[i]-'0');
	return ans;
}
int main()
{
	int t; cin>> t; while(t--)
	{
		string a, b;
		cin>> a>> b;
		cout<< (long long) cv(a) * cv(b)<< endl;
	}
}
