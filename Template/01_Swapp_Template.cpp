//1.swap the two values using template.

#include<iostream>
using namespace std;

template<class j>

void swapp(j a,j b)
{
	j temp=0;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\n\n\t a: "<<a;
	cout<<"\n\n\t b: "<<b;
}



main()
{
	int a,b;
	
	cout<<"\n\n\t Enter a: ";
	cin>>a;
	
	cout<<"\n\n\t Enter b: ";
	cin>>b;
	
	swapp(a,b);
	
}
