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

		float calcArea()
		{ return 0.0; }
};

class Rect: public GeoShape
{
	public:

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

class Triangle : public GeoShape
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


int main(){
	clrscr();

	Triangle myT(20,10);
	cout << myT.calcArea() << endl;

	Circle myC(7);
	cout << myC.calcArea() << endl;

	Rect myR(2,5);
	cout << myR.calcArea() << endl;

	Square myS(5);
	cout << myS.calcArea() << endl;


	//Violating the Square, Circle Constraint
   //	myS.setDim2(4) ;
   //	myC.setDim2(3) ;



	getch();
	return 0;
}