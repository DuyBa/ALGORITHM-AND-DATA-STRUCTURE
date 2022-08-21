#include<bits/stdc++.h>
using namespace std;
int kt(string s)
{
	stack<char> st; char c;
	int n= s.length();
	for(int i=0;i<n;i++)
	{
		c= s[i];
		if(c=='{'|| c== '['|| c=='(') st.push(c);
		else 
		{
			if(!st.empty()&& c== ']'&& st.top()== '[') st.pop();
			else if(!st.empty()&& c== '}'&& st.top()== '{') st.pop();
			else if(!st.empty()&& c== ')'&& st.top()== '(') st.pop();
			else return 0;
		}
	}
	if(st.size()==0) return 1;
	return 0;
}
int main()
{
	int t; 
	cin>> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin>> s;
		if(kt(s)) cout<< "YES"<< endl;
		else cout<< "NO"<< endl;
	}
}
