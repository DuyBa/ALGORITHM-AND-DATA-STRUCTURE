#include<bits/stdc++.h>
using namespace std;
int s, a[10000], kt, n;
void dq(int vt, int ss)
{
	if(kt==1) return;
	if(2*ss==s) 
	{
		kt=1;
		return;
	}
	if(vt<n)
	{
		if(2 * (ss+ a[vt]) <=s)
	    	dq(vt+1,ss+ a[vt]);
	    dq(vt+1, ss);
	}
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		kt= 0; s=0;
		cin>> n;
		for(int i=0;i<n;i++) 
		{
			cin>> a[i];
			s+=a[i];
		}
		if(s%2==0) dq(0,0);
		if(kt==0) cout<< "NO"; else cout<< "YES";
		cout<< endl;
	}
}
