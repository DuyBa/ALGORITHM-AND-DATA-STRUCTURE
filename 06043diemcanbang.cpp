#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		long long sum=0;
		cin>> n;
		int a[100000]={};
		for(int i=0;i<n;i++) 
		{
			cin>> a[i];
			sum+=a[i];
		}
		int ck=-1;
		long long sum1=0;
		for(int i=0;i<n;i++)
		{
		    if((sum-a[i]-sum1)==sum1)
		    {
		    	cout<< i+1<< endl;
		    	ck=0;
		    	break;
			}
			sum1+=a[i];
		}	
		if(ck==-1) cout<< -1<< endl;
	}
}
