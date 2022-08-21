#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		int s, d; cin>> s>> d;
		if(d*9< s) cout<< -1<< endl;
		else
		{
			int a[100000]= {0};
			s--;
			for(int i= d-1; i>=0;i--)
			{
				if(s>=9)
				{
					a[i]=9;
					s= s-9;
				}
				else
				{
					if(i==0) a[i]= s+1;
					else a[i]= s;
					s=0;
				}
			}
			for(int i=0;i<d;i++) cout<< a[i];
			cout<< endl;
		}
	}
}
