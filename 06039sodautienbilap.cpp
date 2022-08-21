#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		int a[100000]={}, b[100000];
		for(int i=0;i<n;i++) 
		{
			cin>> a[i];
			b[i]++;
		}
		int ck=-1;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==a[i])
				{
					cout<< a[i]<< endl;
					ck= 0;
					break;
				}
			}
			if(ck== 0) break;
		}
		if(ck==-1) cout<< "NO"<< endl;
	}
}
