// parents.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
class A
{
public:
	void publ_method() { std::cout <<"publ_method" ; };
protected:
	void prot_method() { std::cout << "prot_method"; };

private:
	void private_method() { std::cout << "private_method"; };

};

class B : public A {};
class C : protected A {};
class D : private A {};
int main()
{
	A a;
	B b;
	C c;
	D d;

	a.publ_method();
	//Только внутри класса:
	//a.private_method();
	//Для классов-наследников
	//a.prot_metod();

	b.publ_method();
	//b.private_method();
	//b.prot_metod();

	//c.publ_method();
	//c.private_method();
	//c.prot_metod();

	//d.publ_method();
	//d.private_method();
	//d.prot_metod();
}