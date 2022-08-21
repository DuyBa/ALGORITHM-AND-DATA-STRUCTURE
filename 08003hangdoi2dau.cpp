#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque <int> q;
	int t; cin>> t; cin.ignore(); while(t--)
	{
		string s; cin>> s;
		if(s=="PUSHFRONT")
		{
			int k; cin>> k;
			q.push_front(k);
		}
		if(s=="PUSHBACK")
		{
			int k; cin>> k;
			q.push_back(k);
		}
		if(s=="PRINTFRONT")
		{
			if(!q.empty()) cout<< q.front();
			else cout<< "NONE";
			cout<< endl;
		}
		if(s=="PRINTBACK")
		{
			if(!q.empty()) cout<< q.back();
			else cout<< "NONE";
			cout<< endl;
		}
		if(s=="POPFRONT")
		{
			if(!q.empty()) q.pop_front();
		}
		if(s=="POPBACK")
		{
			if(!q.empty()) q.pop_back();
		}
	}
}
