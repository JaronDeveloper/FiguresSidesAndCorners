#include <iostream>

class  Figures
{
public:
	int A, B, C, D; //углы 
	int a, c, b, d; //стороны 	

	Figures() {}
	Figures(int a, int b, int c, int A, int B, int C) {
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	}
	Figures(int a, int b, int c,int d, int A, int B, int C,int D) {
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	}
	virtual void print_info(std::string NameFigures) {
		std::cout << NameFigures << std :: endl;
	}
};

class  Triangle : public Figures
{
public:
	Triangle() {
		a = 10, b = 20, c = 30;
		A = 50, B = 60, C = 70;
	}
};

class Quadrilateral : public Figures {
public:
	Quadrilateral() {
		a = 10, b = 20, c = 30, d = 40;
		A = 50, B = 60, C = 70, D = 80;	
	}	
};

class RightRriangle : public Figures {
public:
	RightRriangle() {
		a = 10, b = 20, c = 30;
		A = 50, B = 60, C = 90;
	}	
};

class IsoscelesTriangle : public Figures {
public:
	IsoscelesTriangle() {
		a = 10, b = 20, c = 10;
		A = 50, B = 60, C = 50;
	}	
};

class EquilateralTriangle : public Figures {
public:
	EquilateralTriangle() { 
		a = 30, b = 30, c = 30;
		A = 60, B = 60, C = 60;		
	}	
};

class Rectangle : public Figures {
public:
	Rectangle() {
		a = 10, b = 20, c = 10, d = 20;
		A = 90, B = 90, C = 90, D = 90;		
	}	
};

class Square : public Figures {
public:
	Square() {
		a = 20, b = 20, c = 20, d = 20;
		A = 90, B = 90, C = 90, D = 90;		
	}
};

class Parallelogram : public Figures {
public:
	Parallelogram() {
		a = 20, b = 30, c = 20, d = 30;
		A = 30, B = 40, C = 30, D = 40;
	}	
};

class Rhombus : public Figures {
public:
	Rhombus() {
		a = 30, b = 30, c = 30, d = 30;
		A = 30, B = 40, C = 30, D = 40;
	}
};

int main() {	
	setlocale(LC_ALL, "Russian");	

    Triangle triangle;
	Figures* f;
	f = &triangle;
	f->print_info("Треугольник:");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);
	
	Quadrilateral quadrilateral;
	f = &quadrilateral;
	f->print_info("Четырёхугольник:");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	RightRriangle rightRriangle;
	f = &rightRriangle;
	f->print_info("Прямоугольный треугольник:");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	IsoscelesTriangle isoscelesTriangle;
	f = &isoscelesTriangle;
	f->print_info("Равнобедренный треугольник:");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);
	
	EquilateralTriangle equilateralTriangle;
	f = &equilateralTriangle;
	f->print_info("Равносторонний треугольник:");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	Rectangle rectangle;
	f = &rectangle;
	f->print_info("Прямоугольник:");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	Square square;
	f = &square;
	f->print_info("Квадрат:");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	Parallelogram parallelogram;
	f = &parallelogram;
	f->print_info("Параллелограмм:");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	Rhombus rhombus;
	f = &rhombus;
	f->print_info("Ромб:");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);
	
	return 0;
}