//4.  calculate the circle's area and circumference using class.

#include<iostream>
using namespace std;

class circle
{
	int r;
	
	public:
			float area(float r)
			{
				float area=(2*3.14)*(r*r);
				return area;
			}
			float circumference(float r)
			{
				float c=2*3.14*r;
				return c;
			}
			
};
main()
{
		
	circle C;
	float a;
	cout<<"\n\n\t Enter the radius: ";
	cin>>a;

	float q=C.area(a);
	cout<<"\n\n\t Area of circle is: "<<q;
	
	q=C.circumference(a);
	cout<<"\n\n\t Circumference of circle is: "<<q;
}
