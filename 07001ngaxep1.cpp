#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	stack <string> st;
	int a[100000]={0}, d=0;
	while(getline(cin,s))
	{
		stringstream ss(s);
		string tmp1, tmp2;
		ss>> tmp1; ss>> tmp2;
		if(tmp1== "push") 
		{
			stringstream s1(tmp2);
			s1>> a[d++];
			st.push(tmp2);
		}
		else if(tmp1== "pop") st.pop();
		else if(tmp1== "show") 
		{
			if(st.empty()) cout<< "empty"<< endl;
			else
			{
				for(int i=0;i< st.size();i++) cout<< a[i]<< " ";
                cout<< endl;
			}

		}
	}
}
