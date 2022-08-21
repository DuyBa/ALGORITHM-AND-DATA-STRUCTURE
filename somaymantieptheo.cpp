#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b, t=0; cin>> a>> b;
	queue <long long> q, qq; q.push(0);qq.push(0);
	while(qq.back()<b)
	{
		long long top = q.front();
		qq.push(top);
		q.pop();
		q.push(top*10+4);
		q.push(top*10+7);
	}
	for(int i=a;i<=b;i++)
	{
		while(1)
		{
			long long x= qq.front();
			if(x<i) qq.pop();
			else
			{
				t+=x;
				break;
			}
		}
	}
    cout<< t;
}
