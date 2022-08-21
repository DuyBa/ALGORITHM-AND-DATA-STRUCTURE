#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		string s;
		cin>> s;
		stack <string> st;
		int d=0;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]>47&&s[i]<58) st.push(string(1,s[i]));
			else
			{
				int x=0,y=0;
				string o1= st.top(); st.pop();
				string o2= st.top(); st.pop();
				stringstream s1(o1); s1>> x;
				stringstream s2(o2); s2>> y;
				if(s[i]=='/') d= x/y;
				else if(s[i]=='+') d=x+y;
				else if(s[i]=='-') d=x-y;
				else if(s[i]=='*') d=x*y;
				string u= to_string(d);
				st.push(u);
			}
		}
		cout<< st.top()<< endl;
	}
}

