#include <iostream.h>
#include <conio.h>
#include <math.h>

class Complex{

	private :

		float real;
		float imag;
		char id;

	public :

		Complex();
		Complex(float r);
		Complex(float r , float i);

		Complex(Complex & c);

		~Complex();

		void setId(char c);
		void setReal(float r);
		void setImag(float i);

		//setter overloading
		void setAll();
		void setAll(float r);
		void setAll(float r , float i);
		void setAll(float r , float i , char c);

		float getReal();
		float getImag();

		Complex add(Complex &c);
		Complex sub(Complex &c);

		Complex operator +(Complex &c){//com1 + com2

			Complex temp(real+c.real , imag+c.imag);

			return temp;

			//return Complex(real+c.real,imag+c.imag);

		}


		Complex operator + (float f){ //com1+f

			Complex temp(real + f , imag);
			return temp;

		}

		friend Complex operator +(float f , Complex & c){//f + comp1

			Complex temp(f+c.real , c.imag);
			return temp;

			//return c+f


		}

		Complex operator++ ()//prefix ++x
		{
			real++;
			imag++;

			return *this;


		}
		Complex operator++ (int dumy)//postfix
		{
			Complex temp(*this);

			real++;
			imag++;

			return temp;


		}

		Complex& operator = (Complex & c) //for cascading =

		{
			real = c.real;
			imag = c.imag;
			id   = c.id;
			return *this;
		}

		Complex& operator+= (Complex & c)
		{

			real += c.real;
			imag += c.imag;

			return *this;

		}

		int operator== (Complex & c)
		{
			if((real == c.real) && (imag == c.imag))
				return 1;
			return 0;

			// return ((real ==c.real) && (imag==c.imag));

		}
		operator float ()
		{

			return real;

		}

		friend istream& operator>>(istream & in , Complex & c);
		friend ostream& operator<<(ostream & out, Complex & c);

		void print();

};


int main(){

	clrscr();

	Complex c1(12,7), c2(10, -5);

	Complex c3;

	c3 = c1 + c2;
   //	c3=++c1;

   //	c3 = c1;
	c1.print();

	c3 =c1 += c2;
	c3.print();

	c3=c1+13.65;

	c3 = c2++;

	c2 = c1 = c3;

   //	c1.print();
   //	cout << c2.getReal() << " " <<c2.getImag()<<"\n";
   //	c2.print();
  //	c3.print();

	c3 = 6.2+c2;
	c3.print();

	c1.setAll(9,7);
	c2.setAll(13);
	c3.setAll(9,7);
	cout <<"c1 equals to c3 ? "<<(c1==c3)<<endl;
	if(!(c1==c2))
		cout<<"c1 is not equal to c2"<<endl;
	cout<<"the float of c1 "<<float(c1)<<endl;
	float f = (float) c2;
	cout<<"the casting of c2 is: "<<f<<endl;

	cin>>c2;
	cout<<c2;

	getch();
	return 0;
}

Complex::Complex(){

	this->real =0;
	this->imag = 0;
	this->id='d';
	cout<<"\n DefaultConstructor with no param calling\n";

}

Complex::Complex(float r){

	this->id='r';
	this->real = r;
	this->imag = r;
	cout<<"\n DefaultConstructor with one param calling\n";

}

Complex::Complex(float r , float i){

	this->id='i';
	this->real = r;
	this->imag = i;
	cout<<"\n DefaultConstructor with two param calling\n";

}

Complex::Complex(Complex & c){   //copy constructor


	this->real = c.real;
	this->imag = c.imag;

	this->id = c.id;

	cout<<"Copy Constructor Worked\n";


}

Complex::~Complex(){

	cout<<"\n Destructor for id : "<<id<<" is calling\n";


}
void Complex::setId(char c){

	id = c;
}
void Complex::setReal(float r){

	real = r;


}

void Complex::setImag(float i){

	imag = i;

}
void Complex::setAll(){

	real = imag =0;

}
void Complex::setAll(float f){

	real = f;
	imag = f;

}
void Complex::setAll(float r , float i){

	real = r;
	imag = i;

}
void Complex::setAll(float r , float i , char c){

	real = r;
	imag = i;
	id   = c;

}

float Complex::getReal(){

	return real ;

}

float Complex::getImag(){

	return imag ;

}

Complex Complex::add( Complex & c){

	Complex temp;

	temp.setId ('a');
	temp.real = real + c.real;
	temp.imag = imag + c.imag;

	return temp;


}

Complex Complex::sub( Complex & c){

	Complex temp;
	temp.setId ('s');
	temp.real = real + c.real;
	temp.imag = imag + c.imag;

	return temp;

}
void Complex::print(){

	if (imag < 0){


		cout<< real <<" - "<<fabs(imag)<<"i\n";

	}
	else{


		cout<<real<<" + "<<imag<<"i \n";

	}


}
istream& operator>>(istream & in, Complex& c)
{
	cout<<"\n Enter real part: ";
	in>>c.real;
	cout<<"Enter imag part";
	in>>c.imag;

	return in;

}
ostream& operator<<(ostream& out, Complex& c)
{

	if( c.imag < 0)
		out<<c.real<<" - "<<fabs(c.imag)<<"i"<<endl;
	else
		out<<c.real<<" + "<<c.imag<<"i"<<endl;
	return out;

}