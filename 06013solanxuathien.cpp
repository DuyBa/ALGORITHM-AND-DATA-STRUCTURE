#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m; cin>> n>> m;
		int a[10000]={}, d=0;
		for(int i=0;i<n;i++) 
		{
			cin>> a[i];
			if(a[i]==m) d++;
		}
		if(d>0) cout<< d;
		else cout<< -1;
		cout<< endl;
	}
}
