#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		string s; cin>> s;
		string tmp; tmp.resize(s.length());
		tmp[0]= s[0];
		for(int i=1;i<s.length();i++)
		{
			if(tmp[i-1]=='0')
			{
				if(s[i]=='0') tmp[i]='0';
				else tmp[i]='1';
			}
			else
			{
				if(s[i]=='0') tmp[i]='1';
				else tmp[i]='0';
			}
		}
		cout<< tmp<< endl;
	}
}
