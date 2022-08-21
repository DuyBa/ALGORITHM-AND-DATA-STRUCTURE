#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		string s; cin>> s;
		int a=0, b=0, ans=0;
		for(int i=0;i<s.size();i++)
		{
			char c= s[i];
			if( c=='[') a++;
			else b++;
			if(b> a)
			{
				for(int j= i+1;j< s.size();j++)
				{
					if(s[j]!= c)
					{
				    	ans+= j-i;
				     	a++; b--;
				     	swap(c,s[j]);
				     	break;
					}
				}
			}
		}
		cout<< ans<< endl;
	}
}
