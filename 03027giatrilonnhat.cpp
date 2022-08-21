#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>> n;
	long long ans=0, s;
	for(int i=0;i<n;i++)
	{
		cin>> s;
		ans+= s+ abs(s);
	}
	cout<< ans;
}
