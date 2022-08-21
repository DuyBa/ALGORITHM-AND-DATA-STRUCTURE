#include<iostream>
using namespace std;
long long M= 1e9+7;
long long power(long long a, long long n)
{
	long long res =1;
	a%=M;
	if(a==0) return 0;
	while(n>0)
	{
		if(n%2!=0) res=((res%M)*(a%M))%M;
		n/=2;
		a=((a%M)*(a%M))%M;
	}
	return res%M;
}
int main()
{
	long long n, m;
	while(cin>> n>> m)
	{
		if(n==0&&m==0) break;
		else 
		{
			cout<< power(n,m)<< endl;
		}
	}
}
