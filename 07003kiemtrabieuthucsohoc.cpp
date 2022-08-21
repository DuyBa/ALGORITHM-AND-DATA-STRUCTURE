#include<bits/stdc++.h>
using namespace std;
int kt(string s)
{
	stack <char> st;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=')') st.push(s[i]);
		else 
		{
			int k=0;
			while(st.top()!='(')
			{
				if(st.top()=='*'||st.top()=='-'||st.top()=='/'||st.top()=='+') k=1;
				st.pop();
			}
			st.pop();
			if(k==0) return 1;
		}
	}
	return 0;
}
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		string s;
		getline(cin,s);
		if(kt(s)) cout<< "Yes";
		else cout<< "No";
		cout<< endl;
	}
}
