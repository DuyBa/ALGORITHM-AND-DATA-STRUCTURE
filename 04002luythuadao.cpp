#include<iostream>
using namespace std;
long long M= 1e9+7;
long long pw(long long n, long long m)
{
	if(m==0) return 1;
	long long x=pw(n,m/2);
	if(m%2==0) return (x*x%M)%M;
else
 return (n*(x*x%M))%M;
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long n;
		cin>> n;
		long long m=0, k;
		k=n;
		while(k>0)
		{
			m=m*10+k%10;
			k/=10; 
    	}
		cout<< pw(n,m)<< endl;
	}
}
