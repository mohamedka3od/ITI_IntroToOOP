#include <iostream.h>
#include <conio.h>
//stack with copy constructor
class Stack{

	private:

		int top ;
		int size;
		int *ptr;
		static int counter;


	public:

		int isFull() ;
		int isEmpty();

		static int getCounter(){

			return counter;

		}

		Stack(){

			top  = 0 ;
			size = 10;
			ptr = new int[size];

			counter ++;

			cout<<"This is the default constructor"<<endl;

		}

	//	Stack(Stack & s);


		Stack(int n){

			top  = 0;
			size = n;
			ptr  = new int[size];

			counter ++;

			cout<<"This is a constructor with one parameter"<<endl;

		}

		~Stack(){

			delete[] ptr; size = 0;

			counter --;

			cout<<"This is the destructor"<<endl;


		}


		Stack& operator =(Stack &c);

		int push(int n);
		int pop(int & n);

		friend void viewContent(Stack s);
};


int main(){


	clrscr();

	int num;

	Stack s1(2);

	s1.push(5);
	s1.push(14);
	s1.push(20);
	Stack s3 = s1;
	Stack s2(s1);

	viewContent(s1);

	viewContent(s2);
	viewContent(s3);

	if(s1.pop(num)){

		cout<<num<<endl;

	}

	if(s1.pop(num)){

		cout<<num<<endl;

	}

	if(s1.pop(num)){

		cout<<num<<endl;

	}
	else cout<<"\n Stack is empty ..."<<endl;
  /*
	cout<<"The number of objects created = "<<Stack::getCounter()<<endl;
	Stack s1 , s2(5);

	cout<<"The number of objects created = "<<Stack::getCounter()<<endl;

	{
	 Stack s3(10);
	 cout<<"The number of objects created = "<<Stack::getCounter()<<endl;
	}
	cout<<"The number of objects created = "<<Stack::getCounter()<<endl;
   */

	getch();
	return 0;


}

Stack& Stack::operator=(Stack &c){

			top  = c.top;
			size = c.size;
			ptr  = new int[size];

			for(int i =0; i<top; i++)
				ptr[i] = c.ptr[i];

			return *this;

}
/*
//copy constructor (deep copy)
Stack::Stack(Stack & s)
{

	top  = s.top;
	size = s.size;
	ptr  = new int[size];

	for(int i =0; i<top; i++)
		ptr[i] = s.ptr[i];

	cout<<"Copy Constructor Worked"<<endl;
}
*/

int Stack::isFull(){

	return (top ==size);

}
int Stack::isEmpty(){


	return (top==0) ;

}

int Stack::push(int n){



	if (isFull())
		return 0;

	ptr[top] = n;

	top++;
	return 1;
}


//stack variable initialization
int Stack::counter = 0;

int Stack::pop(int & n){


	if (isEmpty())
		return 0;
	top--;

	n = ptr[top];

	return 1;


}


void viewContent (Stack s)
{

	for(int i = 0; i<s.top; i++)
		cout<<"\n Element no ("<<i+1<<") ="<< s.ptr[i]<<endl;
}

