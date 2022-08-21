#include<bits/stdc++.h>
using namespace std;
void ck(string s)
{
	    stack <char> st;
		int ck=0;
		long long dem =0, mac=0;
		for(int i=0;i< s.size();i++)
		{
			char c = s[i];
			if(c== '[' || c=='(') st.push(c);
			else 
			{
				if(!st.empty()&&c==')'&& st.top()=='(') st.pop();
				else if(!st.empty()&&c==']'&& st.top()=='[')
				{
					dem++;
					mac= max(mac, dem);
					st.pop();
				}
				else if(c==']'&& (st.empty()||st.top()!='['))
				{
					dem=0;
					while(!st.empty())
					{
						st.pop();
					}
				}
			}
		}
		cout<< mac;
}

int main()
{
	string s; cin>> s;
	stack <char> st;
	ck(s);

}

