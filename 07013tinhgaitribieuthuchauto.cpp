#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		string s;
		cin>> s;
		stack <int> st;
		
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>47&&s[i]<58) st.push(s[i]-'0');
			else
			{
				int d=0;
				int o1= st.top(); st.pop();
				int o2= st.top(); st.pop();
				if(s[i]=='/') d= o2/o1;
				else if(s[i]=='+') d=o1+o2;
				else if(s[i]=='-') d=o2-o1;
				else if(s[i]=='*') d=o1*o2;
				st.push(d);
			}
		}
		cout<< st.top()<< endl;
	}
}
