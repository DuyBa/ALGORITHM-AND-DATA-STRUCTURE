#include<bits/stdc++.h>
using namespace std;
long long len(string n)
{
	for(int i=0;i<n.size();i++) if(n[i]=='5') n[i]='6';
	stringstream s(n);
	long long x=0;
	s>> x;
	return x;
}
long long xuong(string n)
{
	for(int i=0;i<n.size();i++) if(n[i]=='6') n[i]='5';
	stringstream s(n);
	long long x=0;
	s>> x;
	return x;
}
int main()
{
	string s, n, m;
	getline(cin,s);
	string tmp;
	stringstream s1(s);
	s1>> tmp; n= tmp;
	s1>> tmp; m= tmp;
	long long n1=len(n), m1=len(m), n2=xuong(n), m2=xuong(m);
	cout<< n2+m2<< " "<< n1+m1;
}
