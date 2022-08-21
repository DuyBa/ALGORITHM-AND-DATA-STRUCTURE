#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n, a, b; cin>> n;
		int ck= 0;
		for(int i=2;i< n/4;i++)
		{
			if(7*i>= n&& (7*i-n)%3==0)
			{
				a= (7*i-n)/3;
				b=i-a;
				ck=1;
				break;
			}
		}
		for(int i=0;i< a;i++) cout<< 4;
		for(int i=0;i< b;i++) cout<< 7;
		if(ck==0) cout<< -1;
		cout<< endl; 
	}
}
