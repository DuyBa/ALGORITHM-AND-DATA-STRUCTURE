#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int t; cin>> t; while(t--)
	{
		string s; cin>> s;
		stack <char> st,stt;
		s= '+' + s;
		stt.push('+');
		for(int i=0;i<s.size();i++)
		{
			char c= s[i];
			if(isalpha(c)) st.push(c);
			else
			{
				if(c=='+' || c== '-')
				{
					if(stt.top()=='+') st.push(c);
					else st.push((c=='+') ? '-':'+');
				}
				if(c=='(') stt.push(st.top());
				else if(c==')') stt.pop();
			}
		}
		string ss;
		while(st.size()>1)
		{
			ss= st.top() +ss;
			st.pop();
		}
		cout<< ss<< endl;
	}
}
