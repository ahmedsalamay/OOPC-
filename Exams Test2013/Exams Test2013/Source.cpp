/*31
#include<iostream>
using namespace std;
class foo
{
public:
	foo() :z(0), y(x), x(0)
	{
		cout << y << endl;
	}
private:
	int x, y, z;
};
int main()
{
	foo f;
	return 0l;
}*/
//32in codeblock output Box
/*
#include<iostream>
using namespace std;
struct  Shape
{
	virtual Shape* duplicate()
	{
		std::cout << "SHAPE" << std::endl;
		return new Shape;
	}
	
};
struct Box:public Shape
{
	
	virtual Box* duplicate()
	{
		std::cout << "Box" << std::endl;
		
	}
};
int main(int argc,char**,char**argv)
{
	Shape*s1 = new Box;
	Shape*s2 = s1->duplicate();
	delete[]s1;
	return 0;
}*/
//34
//#include<iostream>
//using namespace std;
/*
class A
{
public:
	A(int x) :n(x){}
	int n;
};
int main()
{
	A a2(2);
	A a3(a2);
	cout << a3.n;
}*/
/**
class Bar
{
public:
	static int x;
protected:
	int y;
};
int Bar::x = 10;
class Barrel :public Bar
{
public:
	void foo(Bar*b, Barrel*d)
	{
		Bar::x
	}
};*/

/*

namespace Lottery
{

	const int MAX = 30;

	class Card
	{
	private:
		int value;
	public:
		Card();
		void generate();
		int getValue();

	};

	int merge(Card c1, Card c2);


}



#include <stdlib.h> 

using namespace Lottery;

Card::Card()
{
	value = 0;
}


void Card::generate()
{
	value = rand() % 100;
}

int Card::getValue()
{
	return value;
}

int  merge(Card c1, Card c2)
{
	return c1.getValue() + c2.getValue();
}

#include <iostream>
using namespace std;

using namespace Lottery;


int main()

{

	Card c1, c2; 
	//Lottery::Card c1, c2;
	c1.generate();
	c2.generate();
	cout << Lottery::merge(c1, c2);
	cin.get();



}
*/
/*
#include <iostream>
using namespace std;
// first name space
namespace first_space
{
	void func()
	{
		cout << "Inside first_space" << endl;
	}
	// second name space
	namespace second_space
	{
		void func()
		{
			cout << "Inside second_space" << endl;
		}
	}
}
using namespace first_space::second_space;
int main()
{
	func(); //first_space::second_space::func();
	cin.get();
	return 0;
}
*//*
#include<iostream>
using namespace std;
int GenerateID()
{
	static int s_nID = 0;
	return ++s_nID;   //123
	//return s_nID++;012
}

int main()
{
	std::cout << GenerateID() << std::endl;
	std::cout << GenerateID() << std::endl;
	std::cout << GenerateID() << std::endl;
	std::cin.get();
	return 0;
}*/
/*
#include <iostream>
using namespace std;
int x; 
void f0(int & a)
{
	cout << a; //prints value of x 
	a = 6; //a is a reference to x 
	// think of it as if (a) is a pointer to x, but it dereferenced implicitly 
	//(a) holds a value in left hand side like (*a), and in right hand side can changes value of x, //(a)==> (*a)
}
int& f()
{
	return x;  //implicit conversion,  return reference(address) to x 
}
int  f2(int & a)
{
	return a; // implicit dereferencing , returns value of a 
}
void main()
{
	//output : 556556105 
	x = 5; 
	cout << x;// 
	f0(x);  cout << x; //6  
	x = 5;
	int y = f(); //y in not reference to x, (y) just has the value of x, y=5 
	y++; //a=6  
	cout<<x; //x=5  
	////////////////////////////////
	x=5;
	cout << f(); //implicit dereferencing (note & f() in RHS) prints value of x //5 
	int& z = f();  //z is a reference to x 
	z++;  
	cout << x;
	//6  //////////////////////////// 
	f() = 10;  //lefthand side is a reference to x 
	cout << x;  //10 
	x = 5;
	int w = f2(x);
	w++; 
	cout << x; //5  system("pause");
}*/
/*
#include <iostream>
using namespace std; 
class A
{
public:    
	void func(){}
};
class B : public  A //class B : public virtual A 
{};
class C : public  A //class C : public virtual A
{};
class D : public B, public C
{};
int main()
{
	D d;
	d.C::func();
	return 0;
}
*//*
#include <iostream> 
using namespace std;  
class BaseClass {
public:   
	BaseClass()  
	{ cout << "This is the BaseClass constructor.\n"; }  
	~BaseClass()    
	{ cout << "This is the BaseClass destructor.\n";  system("pause");} };  
		   class DerivedClass : public BaseClass
		   {
		   public:  
			   DerivedClass()       { cout << "This is the DerivedClass constructor.\n"; }  
			   ~DerivedClass()       { cout << "This is the DerivedClass destructor.\n"; } };  
			   int main()
			   { cout << "We will now define a DerivedClass object.\n";  
			   DerivedClass object;  
			   cout << "The program is now going to end.\n";    return 0; }*/
/*
#include <iostream> 
using namespace std; 
class Base                       //base class 
{
public:      virtual void show() = 0;          //normal function       
{ cout << "Base\n"; }     };
class Derv1 : public Base        //derived class 1  
{    public:       void show()          { cout << "Derv1\n"; }    };
class Derv2 : public Base        //derived class 2   
{    public:       void show()          { cout << "Derv2\n"; }    }; 
int main()
{
	Derv1 dv1;           //object of derived class 1 
	Derv2 dv2;           //object of derived class 2   
	Base* ptr; 
	ptr = &dv1;          //put address of dv1 in pointer  
	ptr->show();         //execute show() 
	ptr = &dv2;          //put address of dv2 in pointer   
	ptr->show();         //execute show()   
	system("pause");
	return 0; 
}*/
/*
template <class T1, class T2>
int largest(const T1 &var1, T2 &var2)
{
	if (sizeof(var1) > sizeof(var2))
		return sizeof(var1);
	else
		return sizeof(var2);
}
#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	char c = ' ';
	float f = 0.0;
	double d = 0.0;

	cout << "Comparing an int and a double, the largest\n"
		<< "of the two is " << largest(i, d) << " bytes.\n";

	cout << "Comparing an char and a float, the largest\n"
		<< "of the two is " << largest(c, f) << " bytes.\n";

	system("pause");
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
template <class T>
class XYZ
{
public:
	void print();
	static T pub;
private:
	static T pri;
};

template <class T>
void XYZ<T>::print()
{
	cout << pri++ << endl;
}
// Static variable initialization:
template <class T> T XYZ<T>::pub = 1;
template <class T> T XYZ<T>::pri = 1.2;

void main()
{
	XYZ<int> aaa;
	XYZ<float> bbb;

	aaa.print();
	cout << aaa.pub << endl;

	bbb.print();
	bbb.print();
	bbb.print();

	system("pause");
}
*/
/*
#include <iostream>
using namespace std;
class Package
{
private:
	int value;
public:
	Package()
	{
		value = 7; cout << value << endl;
	}
	Package(int v)
	{
		value = v; cout << value << endl;
	}
	~Package()
	{
		cout << value << endl;
	}
};
int main()
{
	Package obj1(4);
	Package obj2;
	Package obj3(2);
	return 0;
}

*//*
#include<iostream>
using namespace std;
class T
{
public:
	 int x=0;

	T();

};
// int T::x = 0;
 T::T()
 {
	 x++;
 }
  int f()
 {
	 T t;
	 return t.x-1;
 }
int main()
{
	T s;
	T a;
	cout<<a.x;
	system("PAUSE");
	return 0;
}*/
/*
#include<iostream>
using namespace std;
class P{public:virtual void print(); private:string name;};
class D:public P{ public:virtual void print(); };
class C :public P{ public:virtual void print(); };
class L{ public:L(int n); P &operator[](int i){} private:P *p; int Maxp; int np; };
*/
/*
#include <iostream>       // std::cout
#include <typeinfo>
using namespace std;
class Base
{
public:
	virtual void f(){}
};
class Drive:public Base
{

};
int main()
{
	Drive *D = new Drive;
	Base *B = D;
	B = NULL;

	try
	{
		cout << typeid(B).name() << endl;
		cout << typeid(*B).name() << endl;
		cout << typeid(D).name() << endl;
		cout << typeid(*D).name() << endl;
	}
	catch (bad_typeid& ex)
	{
		cout << ex.what();
	}
	catch (exception ex)
	{
		cout << ex.what();
	}

	delete D;
}*/
#include<iostream>
using namespace std;
#include<functional>
void foo(int x, int y){}
int main()
{
	try
	{
		cout << foo(1, 2);
	}
	catch (bad_function_call ex)
	{
		cout << ex.what();
	}

}