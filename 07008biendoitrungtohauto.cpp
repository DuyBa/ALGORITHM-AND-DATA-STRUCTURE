#include<bits/stdc++.h>
using namespace std;
int check(char x)
{
	if (x == '+' || x == '-') return 1;
	if (x == '/' || x == '*') return 2;
	if (x == '%' || x == '^') return 3;
	return 0;
}
int main()
{
	int t; cin>> t; while(t--)
	{
		string s; cin>> s;
		stack <char> st;
		for(int i=0;i<s.size();i++)
		{
			char c=s[i];
			if(c>='a'&&c<='z'||c>='A'&&c<='Z') cout<< c;
			else if(c=='(') st.push(c);
			else if(c==')')
			{
				while(s.size() && st.top()!='(')
				{
					cout<< st.top();
					st.pop();
				}
				st.pop();
			}
			else
			{
				while(st.size() && check(st.top()) >= check(c))
				{
					cout<< st.top();
					st.pop();
				}
				st.push(c);
			}
		}
		while(st.size())
		{
			if(st.top()=='(') st.pop();
			else
			{
				cout<< st.top();
		     	st.pop();
			}
		}
		cout<< endl;
	}
}
