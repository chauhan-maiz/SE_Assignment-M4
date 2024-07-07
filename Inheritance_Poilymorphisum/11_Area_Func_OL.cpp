//11.calculate the area of circle, rectangle and triangle using Function Overloading

#include<iostream>
using namespace std;

class Calc

{
	int l,w,r,b,h;
	public:
	void Area(int x,int y)
	{
		l=x;
		w=y;
		cout<<"\n\n\t Area of Rect: "<<l*w;
	}
	void Area(int q)
	{
		r=q;
		int pi=3.14;
		cout<<"\n\n\t Area of Circle: "<<pi*r*r;
	}
	void Area(int v,float k)
	{
		b=v;
		h=k;
		cout<<"\n\n\t Area of Triagle: "<<0.5*(b*h);
	}
};
		
main()
{
	Calc A;
	
	A.Area(2,2);
	A.Area(2);
	A.Area(2,2.2f);
}
