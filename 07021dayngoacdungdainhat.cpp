#include<bits/stdc++.h>
using namespace std;
int kt(string s)
{
	int d=0;
	stack<int> st;
	st.push(-1);
	char c;
	for(int i=0;i<s.size();i++)
	{
		c= s[i];
		if(c=='(') st.push(i);
		else 
		{
			st.pop();
			if(!st.empty() ) d=max(d, i- st.top());
			else st.push(i);
		}
	}
	return d;
}
int main()
{
	int t;
	cin>> t; cin.ignore();
	while(t--)
	{
		string s;
		cin>> s;
		cout<< kt(s)<< endl;
	}
}
