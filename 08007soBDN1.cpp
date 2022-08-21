#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		queue <long long> q;
		q.push(1);
		long long n; cin>> n;
		long long dem=0;
		while(1)
		{
			long long top;
			top= q.front();
			q.pop();
			if(top<=n) dem++;
			else break;
			q.push(top*10);
			q.push(top*10+1);
		}
		cout<< dem<< endl;
	}
}
