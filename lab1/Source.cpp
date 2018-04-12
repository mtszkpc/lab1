#include <iostream>
#include "BinomialSolver.h"
#include "VerboseObject.h"
#include <string>
#include <memory>

using namespace std;
int main() {

	{
		VerboseObject* o0 = new VerboseObject("Object 0");
		VerboseObject o1("Object 1");
		unique_ptr<VerboseObject> o2(new VerboseObject("Object 2"));

		cout<<o0->saySomething()<<endl;
		cout<<o1.saySomething()<<endl;
		cout<<o2->saySomething()<<endl;
		delete o0;
	}



	BinomialSolver b1(1.0, -5.0, 4.0);
	cout << "Pierwiastki rownania x*x - 5x + 4 = 0 to: " << endl;
	cout << "x1 = " << b1.getX1() << ", x2 = " << b1.getX2() << endl;
	cout << "Wartosc wielomianu x*x - 5x + 4 dla x = 1 to: ";
	cout << b1.calculate(1.0) << endl;
	cout << "Wartosc wielomianu x*x - 5x + 4 dla x = 3 to: ";
	cout << b1.calculate(3.0) << endl;
	BinomialSolver b2(1.0, 2.0, 1.0);
	cout << "Pierwiastki rownania x*x + 2x + 1 = 0 to: " << endl;
	cout << "x1 = " << b2.getX1() << ", x2 = " << b2.getX2() << endl;
	cout << "Wartosc wielomianu x*x + 2x + 1 dla x = 1 to: ";
	cout << b2.calculate(1.0) << endl;
	cout << "Wartosc wielomianu x*x + 2x + 1 dla x = -1 to: ";
	cout << b2.calculate(-1.0) << endl;
	cout << b2.a << b2.b << b2.c << endl;
	getchar();
	return 0;
}