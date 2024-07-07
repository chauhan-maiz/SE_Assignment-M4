/*5. Write a C++ program to create a class called
 Rectangle that has private member variables for 
 length and width. Implement member functions to 
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;
class rectangle
{
	int l,w;
	
	public:
		 int length_width()
		 {
			cout<<"\n\n\t Enter the length and width: ";
			cin>>l>>w;	
		 }
		 int area()
		 {
			int area=l*w;
			return area; 	
		 }	
		 int perimeter()
		 {
		 	int	p=2*(l+w);
		 	return p;
		 }
};
main()
{
	rectangle R;
		R.length_width();
		int a=R.area();
		cout<<"\n\n\t Aera of Rectangle is: "<<a;
		int p=R.perimeter();
		cout<<"\n\n\t Perimeter of Rectangle is: "<<p;
}
