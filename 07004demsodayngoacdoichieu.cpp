#include<bits/stdc++.h>
using namespace std;
int kt(string s)
{
	stack <char> st;
	char c;
	int d= 0;
	for(int i=0;i<s.size();i++)
	{
		c= s[i];
		if(c== '(') st.push(c);
		else 
		{
			if(!st.empty()) st.pop();
			else
			{
				st.push('(');
				d++;
			}
		}
	}
	return d + st.size()/2;
}
int main()
{
	int t; cin>> t; cin.ignore();
	while(t--)
	{
		string s;
		cin>> s;
		cout<< kt(s)<< endl;
	}
}
