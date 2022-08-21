#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; t=1; cin>> t; while(t--)
	{
		int n, dem=0;
		cin>> n;
		int a[100]={};
		string s; cin>> s;
		for(int i=0;i<s.size();i++) a[s[i]]++;
		for(int i=65;i<=90;i++) dem= max(dem,a[i]);
		int k= s.size()- (n-1)*(dem-1);
		if(dem <= k) cout<< 1;
		else cout<< -1;
		cout<< endl;
	}
}
