#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		string s; cin>> s;
		stack <char> st1; stack <int> st;
		for(int i=0;i<s.size();i++) st1.push(s[i]);
		int ck= s.size()-1,dem=1, idx;
		while(s[ck]==s[ck-1])
		{
			dem++;
			ck--;
		}
		ck=s.size()+1;
		if(s[s.size()-1]=='I')
		{
			while(dem--)
			{
				st1.pop();
				idx=ck;
				st.push(ck);
				ck--;
			}
			st1.push('I');
		}
	    else 
		{
		    idx=ck-dem;
		    int o= idx;
		    while(dem--){st1.pop();st.push(o); o++;}
		    st.push(s.size()+1);
		}
		while(!st1.empty())
		{
			st1.pop();
			if(st1.empty()||st1.top()=='I')
			{
				idx--;
				st.push(idx);
			}
			else if(!st1.empty()&&st1.top()=='D')
			{
				int dem=0;
			    while(!st1.empty())
			    {
			    	char c= st1.top();
			    	if(c=='D')
			    	{
			    		dem++;
			    		st1.pop();
			    	}
			    	else break;
			    }
			    idx= idx-dem-1;
			    int o=idx;
			    dem++;
			    while(dem--)
			    {
			    	st.push(o);
			    	o++;
			    }
			}
		}
		while(!st.empty())
		{
			cout<< st.top();
			st.pop();
		}
		cout<< endl;
	}
}
