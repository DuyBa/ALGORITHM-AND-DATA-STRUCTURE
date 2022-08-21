#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long n, m;
		cin>> n>> m;
		long long k=m, dem=0;
		while(k%2==0&&k>1)
	    {
	   		k/=2;
	   		dem++;
	   	}
	   	char s= dem+1+64;
	   	cout<< s<< endl;
	}
}
