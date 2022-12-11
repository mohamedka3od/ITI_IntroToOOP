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

		Complex add(Complex c);
		Complex sub(Complex c);

		void print();

};


int main(){

	clrscr();

	Complex arr[3] = {Complex(2),Complex(),Complex(5,7)};
	for(int i = 0 ;i<3 ; i++)
		arr[i].print();

	Complex * cptr;
	cptr = new Complex(2.1,7.3); //allocate one complex
	cptr->print();
	//cptr = new Complex[12];//12 comp contiguous with default cons

	getch();
	return 0;
}

Complex::Complex(){

	real = imag = 0;
	id='d';
	cout<<"\n DefaultConstructor with no param calling"<<endl;

}

Complex::Complex(float r){

	id='r';
	real = imag = r;
	cout<<"\n DefaultConstructor with one param calling"<<endl;

}

Complex::Complex(float r , float i){

	id='i';
	real = r;
	imag = i;
	cout<<"\n DefaultConstructor with two param calling"<<endl;

}

Complex::~Complex(){

	cout<<"\n Destructor for id : "<<id<<" is calling"<<endl;


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

Complex Complex::add( Complex c){

	Complex temp;

	temp.setId ('a');
	temp.real = real + c.real;
	temp.imag = imag + c.imag;

	return temp;


}

Complex Complex::sub( Complex c){

	Complex temp;
	temp.setId ('s');
	temp.real = real + c.real;
	temp.imag = imag + c.imag;

	return temp;

}
void Complex::print(){

	if (imag < 0){


		cout<< real <<" - "<<fabs(imag)<<"i"<<endl;

	}
	else{


		cout<<real<<" + "<<imag<<"i"<<endl;

	}



}