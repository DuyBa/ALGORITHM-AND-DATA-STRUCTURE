#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		string s; cin>> s;
		stack <string> st;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>64 && s[i]<91)
			{
				st.push(string(1,s[i]));
			}
			else
			{
				string o1= st.top(); st.pop();
				string o2= st.top(); st.pop();
				string tmp= "("+ o2 + s[i]+ o1 + ")";
				st.push(tmp);
			}
		}
		cout<< st.top()<< endl;
	}
}
