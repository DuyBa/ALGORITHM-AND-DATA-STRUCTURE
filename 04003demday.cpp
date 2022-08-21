#include<iostream>
using namespace std;
int M= 123456789;
long long pw(long long n, long long m)
{
	if(m==0) return 1;
	long long x=pw(n,m/2);
	if(m%2==0) return (x%M*x%M)%M;
	return (n%M*x%M*x%M)%M;
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long n;
		cin>> n; 
		cout<< pw(2,n-1)<< endl;
	}
}
