#include<bits/stdc++.h>
using namespace std;
void ql(string a)
{
	int n= a.size();
	int r= n-1;
	while(a[r]=='0')
	{
		a[r]='1';
		r--;
	}
	if(r==n-1) a[n-1]='0';
	else if(r!=-1) a[r]='0';
    cout<< a;
}
int main()
{
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		int n;
		string s;
		cin>> s;
		ql(s);
		cout<< endl;
	}
}
