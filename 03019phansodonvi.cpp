#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		long long a, b;
		cin>> a>> b;
		long long c, d, e;
		while(b% a !=0)
		{
			c= a;
			d= b;
			e= b/a;
			cout<< 1<< "/"<< e+1<< " + ";
			a= (e+1) * c- d;
			b= (e+1) * b;
		}
		cout<< 1<< "/"<< b/a;
		cout<< endl;
	}
}
