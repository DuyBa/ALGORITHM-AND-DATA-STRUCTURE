#include<bits/stdc++.h>
using namespace std;
long long f[95];
int pw(long long n, long long m)
{
	if(n==1) return 0;
	if(n==2) return 1;
	if(m<=f[n-2]) return pw(n-2,m);
	return pw(n-1,m-f[n-2]);
}
int main()
{	
    long long n, m;
	f[0]=0; f[1]=1;
	for(int i=2;i<=92;i++) f[i]= f[i-2]+f[i-1];
	int t;
	cin>> t;
	while(t--)
	{
        cin>> n>> m;
		cout<< pw(n,m)<< endl;
	}
}
