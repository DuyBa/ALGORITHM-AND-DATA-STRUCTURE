#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		string s; cin>> s;
		stack <char> st;
		int ck=0;
		for(int i=0;i< s.size();i++)
		{
			char c = s[i];
			if(c== '[' || c=='{' || c=='(') st.push(c);
			else 
			{
				if(!st.empty()&&c== ']' && st.top()=='[') st.pop();
				else if(!st.empty()&&c== '}' && st.top()=='{') st.pop();
				else if(!st.empty()&&c== ')' && st.top()=='(') st.pop();
				else
				{
					ck=1;
					break;
				} 
			}
		}
		if(ck==1||st.size()!=0) cout<< "false"<< endl;
		else cout<< "true"<< endl;
	}
}
