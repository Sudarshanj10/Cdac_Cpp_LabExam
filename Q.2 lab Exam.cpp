//Q.2 Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a 
//class named 'Rectangle' with a function named 'Area' which returns the area. Length 

#include<iostream>
using namespace std;
class Rectangle
{
	
	private :
		int a,b;
	public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}	
		void space()
		{
			cout<<"area is="<<a*b;
		}
			void set(int i,int j)
		{
			a=i;
			b=j;
		}	
		void area()
		{
			cout<<"area is="<<a*b;
			cout<<"area is="<<i*j;
		}
		

};
main()
{
	Rectangle obj;
	obj.get(4,5);
	obj.set(5,6);
	obj.space();
	obj.area();
	
}

