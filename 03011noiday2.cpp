#include<bits/stdc++.h>
using namespace std;
long long M=1e9+7;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long a, n; cin>> n;
		priority_queue <long long,vector<long long>,greater<long long> >q;
		for(int i=0;i<n;i++) 
		{
			cin>> a;
			q.push(a);
		}
		long long kq=0;
		while(q.size()>=2)
		{
			long long x=q.top(); q.pop();
			long long y=q.top(); q.pop();
			long long tmp=(x%M+y%M)%M;
			q.push(tmp);
			kq=(kq%M+tmp%M)%M;
		}
		cout<< kq<< endl;
    }
}
