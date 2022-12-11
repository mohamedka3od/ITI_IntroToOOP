#include <iostream.h>
#include <conio.h>

class GeoShape
{
	protected:

		float dim1, dim2;

	public:

		GeoShape()
		{ dim1 = dim2 = 0; }

		GeoShape(float x)
		{ dim1 = dim2 = x; }

		GeoShape(float x , float y)
		{ dim1 = x; dim2 = y; }

		void setDim1(float x)
		{ dim1 = x; }

		void setDim2(float x)
		{ dim2 = x; }

		float getDim1()
		{ return dim1; }

		float getDim2()
		{ return dim2; }

		virtual float calcArea()=0;

};

//class Rect: public GeoShape
class Rect: protected GeoShape
{
	public:

		Rect():GeoShape(){};

		Rect(float x , float y): GeoShape(x , y){}

		float calcArea()
		{
			return dim1 * dim2;

		}

};

//class Square: public Rect
class Square: protected Rect
{
	public:

		Square(float x) : Rect(x,x){}

		void setSide(int length)
		{
			dim1 = dim2 = length;

		}
		float calcArea()
		{
			return dim1 * dim2;


		}
};

//class Triangle : public GeoShape
class Triangle : protected GeoShape
{
	public:
		Triangle(float b, float h):GeoShape(b,h){}

		float calcArea()
		{
			return 0.5 * dim1 * dim2;


		}
};

//class Circle : public GeoShape
class Circle : protected GeoShape
{
	public:
		Circle(float r): GeoShape(r) {}

		void setRadius(float rad)
		{
			dim1 = dim2 = rad;


		}
		float calcArea()
		{

			return 22.0/7 *  dim1 * dim2;

		}
};

float sumAreas(GeoShape * p1,GeoShape * p2 , GeoShape * p3)
{
	return p1->calcArea() + p2->calcArea() + p3->calcArea();
}

int main(){
	clrscr();
 //   GeoShape gobj;      //error abstract class

	GeoShape * gptr;
	Rect r;

	gptr =(GeoShape *) & r;
	cout<<gptr->calcArea()<<endl;

	Rect r1(1,2),r2(5,10);
	Square s1(10), s2(20), s3(30);
	Circle c1(30);

	Triangle t1(10,20), t2(20,40);
	cout<<sumAreas((GeoShape *)&s1,(GeoShape *) &s2,(GeoShape *) &s3)<<endl;
	cout<<sumAreas((GeoShape *)&t1,(GeoShape *) &c1,(GeoShape *) &r2)<<endl;
	cout<<sumAreas((GeoShape *)&r1,(GeoShape *) &s2,(GeoShape *) &t2)<<endl;



	getch();
	return 0;
}