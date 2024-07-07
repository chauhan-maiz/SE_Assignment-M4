//2. find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class rect_l
{
	protected:
			int l;
			
			public:
					void get_length()
					{
						cout<<"\n\n\t Enter the length of rectangle: ";
						cin>>l;
					}
};
class rect_w : public rect_l
{
	int w;
	
	public:
			void get_width()
			{
				cout<<"\n\n\t Enter the widht of rectangle: ";
				cin>>w;
			}
			
			void calcu_area()
			{
				int a;
				a=l*w;
				
				cout<<"\n\n\t Area of Rectangle: "<<a;
			}
};
main()
{
	rect_w A;
	
	A.get_length();
	A.get_width();
	A.calcu_area();
}
