#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		queue <long long> q;
		q.push(9);
		int n; cin>> n;
		while(1)
		{
			long long top;
			top= q.front();
			q.pop();
			if(top%n==0)
			{
				cout<< top<< endl;
				break;
			}
			q.push(top*10);
			q.push(top*10+9);
		}
	}
}
