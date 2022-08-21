#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin>> s;
		int n= s.size(), dc=-1;
		
		for(int i=n-1;i>=0;i--)
		{
			if(s[i]=='0')
			{
				dc=i;
				break;
			}
		}
		if(dc==-1) for(int i=0;i<n;i++) cout<< 0;
		else 
		{
			for(int i=0;i<dc;i++) cout<< s[i];
			cout<< 1;
			for(int i=dc+1;i<n;i++) cout<< 0;
		}
		cout<< endl;
	}
}
