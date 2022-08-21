#include<bits/stdc++.h>
using namespace std;
struct node {
	int hs;
	int sm;
	node *next;
};
struct List{
	node *head, *tail;
};	
void init(List &l){
	l.head= l.tail = NULL;
}
node *taonode(int h, int s)
{
	node *p= new node;
	if(p== NULL) exit(1);
	p -> hs = h;
	p -> sm =s;
	p -> next = NULL;
	return p;
}

void addtail(List &l, node *p)
{
	if(l.head== NULL) l.head= l.tail= p;
	else 
	{
		l.tail -> next = p;
		l.tail = p;
	}
}

void nhap(List &l)
{
	string s;
	getline(cin,s);
	string tmp;
	stringstream ss(s);
	while(ss>> tmp)
	{
		if(tmp!="+")
		{
			for(int i=0;i<tmp.size()-1;i++)
			{
				if(tmp[i]=='*'&&tmp[i+1]=='x'&&tmp[i+2]=='^')
	        	{
		         	tmp[i]=' ';
	         		tmp[i+1]=' ';
	  	        	tmp[i+2]=' ';
	        	}
			}
			stringstream s1(tmp);
			int o1=0, o2=0;
			s1>> o1; s1>> o2;
			node *p= taonode(o1, o2);
			addtail(l, p);
		}
	}	
}

void cong(List &l, List l1, List l2)
{
	node *p = new node, *q = new node;
	if(l1.head -> sm > l2.head -> sm)
	{
		l= l1;
		p= l2.head;
	}
	else
	{
		l= l2;
		p= l1.head;
	}
	q= l.head;
	while( q-> sm > p-> sm ) q= q-> next;
	while(q!= NULL)
	{
		q-> hs += p->hs;
		p= p-> next; q= q-> next;
	}
}
void xuat(List l)
{
	node *p= l.head;
	while(p!= l.tail)
	{
		if(p->hs) cout<< p->hs<< "x^"<< p->sm;
		p= p->next;
		if(p->hs)
		{
			if(p->hs>0)cout << " + ";
		}
	}
}
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		List l, l1, l2;
		init(l); init(l1); init(l2);
		nhap(l1);
		nhap(l2);
		cong(l, l1, l2);
		xuat(l);
	}
}
