#include <iostream>

class  Figures
{
public:
	int a, b, c, d;//стороны
	int	A, B, C, D;//углы
	int number;//количество сторон

	std::string NameFigures="Фигура:";

	virtual bool check() {
		std::cout << "Правильная" << std::endl;
		return true;
	}

	virtual std::string getType() {
		return NameFigures;
	}
};

void print_info(Figures* f) {
	std::cout << f->getType() << std::endl;
	std::cout << f->check() << std::endl;
	std::cout << "Количество сторон:" << f->number << std::endl;
	if (f->number == 4) {
		std::cout << "Стороны: " << "a=" << f->a << " " << "b=" << f->b << " " << "c=" << f->c << " " << "d=" << f->d << std::endl;
		std::cout << "Углы: " << "A=" << f->A << " " << "B=" << f->B << " " << "C=" << f->C << " " << "D=" << f->D << std::endl;
	}
	if (f->number == 3) {
		std::cout << "Стороны: " << "a=" << f->a << " " << "b=" << f->b << " " << "c=" << f->c << std::endl;
		std::cout << "Углы: " << "A=" << f->A << " " << "B=" << f->B << " " << "C=" << f->C << std::endl;
	}
	std::cout << std::endl;
}

class  Triangle : public Figures
{
public:
	std::string NameFigures = "Треугольник:";

	Triangle() {}
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
	}

	bool check()override {
		if (A + B + C == 180) {
			std::cout << "Правильная" << std :: endl;			
			return true;
		}
		else {
			std::cout << "Неправильная" << std::endl;
			return false;
		}
	}

	std::string getType() override {
		return NameFigures;
	}
};

class RightTriangle : public Triangle {
public:
	std::string NameFigures = "Прямоугольный треугольник:";

	//int a = 10, b = 20, c = 30;
	//int A = 50, B = 60, C = 90;
    
	RightTriangle(int a, int b, int c, int A, int B):Triangle(a,b,c,A,B,90) {
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;		
		//this->C = 90;
	} 

	std::string getType() override {
		return NameFigures;
	}
};

class IsoscelesTriangle : public Triangle {
public:
	//int	a = 10, b = 20, c = 10;
	//int	A = 50, B = 60, C = 50;
	
	IsoscelesTriangle(int a, int b, int A, int B):Triangle(a,b,c,A,B,C) {
		this->a = a;
		this->b = b;
		this->c = a;

		this->A = A;
		this->B = B;
		this->C = A;
	}

	std::string NameFigures = "Равнобедренный треугольник:";

	std::string getType() override {
		return NameFigures;
	}
};

class Quadrilateral : public Triangle {
public:
	std::string NameFigures = "Четырёхугольник:";

	//int a = 10, b = 20, c = 30, d = 40;
	//int A = 50, B = 60, C = 70, D = 80;

	Quadrilateral() {}
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D):Triangle(a, b, c, A, B, C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class EquilateralTriangle : public Triangle {
public:
	//int	a = 30, b = 30, c = 30;
	//int	A = 60, B = 60, C = 60;

	EquilateralTriangle() {}
	EquilateralTriangle(int a, int A) {
		this->a = a;
		this->b = a;
		this->c = a;

		this->A = A;
		this->B = A;
		this->C = A;
	}

	std::string NameFigures = "Равносторонний треугольник:";

	std::string getType() override {
		return NameFigures;
	}
};

class Rectangle : public Triangle {
public:
	//int	a = 10, b = 20, c = 10, d = 20;
	//int	A = 90, B = 90, C = 90, D = 90;

	Rectangle() {}
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
	}

	std::string NameFigures = "Прямоугольник:";

	std::string getType() override {
		return NameFigures;
	}
};

class Square : public Triangle {
public:
	//int	a = 20, b = 20, c = 20, d = 20;
	//int	A = 90, B = 90, C = 90, D = 90;

	std::string NameFigures = "Квадрат:";

	Square() {}
	Square(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
		this->C = D;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class Parallelogram : public Triangle {
public:
	//int	a = 20, b = 30, c = 20, d = 30;
	//int	A = 30, B = 40, C = 30, D = 40;

	std::string NameFigures = "Параллелограмм:";

	Parallelogram() {}
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
		this->C = D;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class Rhombus : public Triangle {
public:
	//int	a = 30, b = 30, c = 30, d = 30;
	//int	A = 30, B = 40, C = 30, D = 40;

	std::string NameFigures = "Ромб:";

	Rhombus() {}
	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
		this->C = D;
	}

	std::string getType() override {
		return NameFigures;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Figures* figures =new Figures();
	print_info(figures);
	delete figures;

	Figures* triangle = new Triangle(10,20,30,50,60,70);
	triangle->number = 3;	
	print_info(triangle);
	delete triangle;	

	Figures* rightRriangle = new RightTriangle(10,20,30,50,60);
	rightRriangle->number = 3;	
	print_info(rightRriangle);
	delete rightRriangle;

	Figures* isoscelesTriangle = new IsoscelesTriangle(10,20,50,60);
	isoscelesTriangle->number = 3;
	print_info(isoscelesTriangle);
	delete isoscelesTriangle;

	Figures* equilateralTriangle = new EquilateralTriangle(30,60);
	equilateralTriangle->number = 3;	
	print_info(equilateralTriangle);
	delete equilateralTriangle;

	Figures* quadrilateral = new Quadrilateral(10,20,30,40,50,60,70,80);
	quadrilateral->number = 4;
	print_info(quadrilateral);
	delete quadrilateral;

	return 0;
}