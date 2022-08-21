#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		long long n; cin>> n; long long a[n];
		deque <long long> dq;
		for(long long i=0;i<n;i++) cin>> a[i];
		for(long long i=0;i<n;i++)
		{
			int ck=0;
			for(long long j=i;j<n;j++)
			{
				if(a[i]< a[j])
				{
					for(long long k=j;k<n;k++)
					{
						if(a[j]>a[k])
						{
							ck=1;
							dq.push_back(a[k]);
							break;
						}
					}
					break;
				}
			}
			if(ck==0) dq.push_back(-1);
		}
		while(n--)
		{
			cout<< dq.front()<< " ";
			dq.pop_front();
		}
		cout<< endl;
	}
}
