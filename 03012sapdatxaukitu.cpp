#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	cin.ignore();
    while(t--)
	{
		int a[1000]={};
		string s; cin>> s;
		for(int i=0;i<s.size();i++) a[(int)s[i]]++;
		int ck=0;
		for(int i=96;i<124;i++)
		{
			if(a[i]>0&&a[i]>(s.size()+1)/2) 
			{
				ck=1;
				cout<< -1;
				break;
			}
		}
		if(ck==0) cout<< 1;
		cout<< endl; 
	}
}
