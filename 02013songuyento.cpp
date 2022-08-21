#include<bits/stdc++.h>
using namespace std;
vector <int> nt;
vector <string> ss;
int n, m, p;
string s;
int snt(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	}
	return 1;
}
void dq( int i, string h, int tong, int x)
{
	for(int j=i;j< nt.size(); j++)
	{
		if(tong== p&& x==n)
		{
			ss.push_back(h); 
			return;
		}
		else if(tong< p&& x< n) dq(j+1, h+ to_string(nt[j])+ " ", tong+ nt[j], x+1);
		else return;
	}
}
int main()
{
    for(int i=2;i<200;i++) if(snt(i)) nt.push_back(i);
	int t; cin>> t; while(t--)
	{
		cin>> n>> m>> p;
		ss. clear();
		int b= upper_bound(nt.begin(), nt.end(), m) -nt.begin();
		dq(b, "",0,0);
		cout<< ss.size()<< endl;
		for(string s : ss) cout<< s<< endl;
	}
}
