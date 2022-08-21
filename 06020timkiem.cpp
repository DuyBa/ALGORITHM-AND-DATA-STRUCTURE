#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m, d=-1;
		cin>> n>> m;
		int a[10000]={};
		for(int i=0;i<n;i++)
		{
		    cin>> a[i];
			if(a[i]==m) d=1;
		} 
		cout<< d<< endl;
	}
}
