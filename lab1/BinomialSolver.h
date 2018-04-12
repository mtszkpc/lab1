#pragma once

struct BinomialSolver
{
	double a;
	double b;
	double c;
	BinomialSolver(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	double getA() const {
		return a;
	}
	double getB() const {
		return b;
	}
	double getC() const {
		return c;
	}
	double getX1() const {
		double delta = b*b - 4 * a*c;
		double x = -b - sqrt(delta);
		x = x / (2 * a);
		return x;
	}
	double getX2() const {
		double delta = b*b - 4 * a*c;
		double x = -b + sqrt(delta);
		x = x / (2 * a);
		return x;
	}
	double calculate(double x) {
		return a*x*x + b*x + c;
	}
}; 
