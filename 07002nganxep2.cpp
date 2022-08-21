#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	stack <string> st;
	int t; cin>> t; cin.ignore();
	while(t--)
	{
	    getline(cin,s);
		stringstream ss(s);
		string tmp1, tmp2;
		ss>> tmp1; ss>> tmp2;
		if(tmp1== "PUSH") st.push(tmp2);
		else if(tmp1== "POP") st.pop();
		else if(tmp1== "PRINT") 
		{
			if(st.empty()) cout<< "NONE"<< endl;
			else cout<< st.top()<< endl;
		}
	}
}
