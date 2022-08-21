#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue <int> q;
	int t; cin>> t; cin.ignore();
	while(t--)
	{
		string s;
		cin>> s;
		if(s=="PUSH")
		{
			int k; cin>> k;
			q.push(k);
		}
		if(s=="POP") if(!q.empty()) q.pop();
		if(s=="PRINTFRONT")
		{
			if(q.empty()) cout<< "NONE"<< endl;
			else cout<< q.front()<< endl;
		}
	}
}
