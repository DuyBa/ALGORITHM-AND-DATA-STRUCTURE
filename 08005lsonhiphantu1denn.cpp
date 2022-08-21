#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		queue <long long> q;
		q.push(1);
		int n; cin>> n;
		while(n--)
		{
			long long top;
			top= q.front();
			q.pop();
			cout<< top<< " ";
			q.push(top*10);
			q.push(top*10+1);
		}
		cout<< endl;
	}
}
