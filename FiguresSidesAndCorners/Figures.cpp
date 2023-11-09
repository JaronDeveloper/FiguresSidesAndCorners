#include <iostream>

class  Figures
{
public:
	int numberSidesint;//количество сторон
	std::string NameFigures = "Фигура:";

	virtual std::string getType() {
		return NameFigures;
	}

	Figures() {}
	Figures(int numberSidesint) {
		this->numberSidesint = numberSidesint;
	}

    virtual bool check() { return true; }

	virtual void info() {
		if (this->check()) {
			std::cout << "Правильная" << std::endl;
		}
		else
		{
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон:" << this->numberSidesint << std::endl;
	}
};

//Медод для вывода информации о фигурах
void print_info(Figures* f) {
	std::cout << f->getType() << std::endl;	
	f->check();
	f->info();
	std::cout << std::endl;
}

class  Triangle : public Figures
{
public:	
	int a, b, c;//Стороны
	int	A, B, C;//Углы

	std::string NameFigures = "Треугольник:";

	bool check()override {
		if (this->A + this->B + this->C != 180) {
			return false;
		}
		else
		{
			return true;
		}
	}

	Triangle(int numberSidesint, int a, int b, int c, int A, int B, int C):Figures(numberSidesint) {
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
	}
	
	void info()override {	
		if (this->check()) {
			std::cout << "Правильная" << std::endl;
		}
		else
		{
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон:" << this->numberSidesint << std::endl;
		std::cout << "Стороны: " << "a=" << this->a << " " << "b=" << this->b << " " << "c=" << this->c << std::endl;
		std::cout << "Углы: " << "A=" << this->A << " " << "B=" << this->B << " " << "C=" << this->C << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class RightTriangle : public Triangle {
public:
	std::string NameFigures = "Прямоугольный треугольник:";
	
	RightTriangle(int numberSidesint, int a, int b, int c, int A, int B) :Triangle(numberSidesint, a, b, c, A, B, 90) {}
	
	std::string getType() override {
		return NameFigures;
	}
};

class IsoscelesTriangle : public Triangle {
public:

	IsoscelesTriangle(int numberSidesint, int a, int b, int A, int B) :Triangle(numberSidesint, a, b, c, A, B, C) {
		this->c = a;

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

	int d;
	int D;

	bool check()override {
		if (this->A + this->B + this->C + this->D != 360) {
			return false;
		}
		else
		{
			return true;
		}
	}

	Quadrilateral(int numberSidesint, int a, int b, int c, int d, int A, int B, int C, int D) :Triangle(numberSidesint, a, b, c, A, B, C) {
		this->d = d;

		this->D = D;
	}

	void info()override {
		if (this->check()) {
			std::cout << "Правильная" << std::endl;
		}
		else
		{
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон:" << this->numberSidesint << std::endl;
		std::cout << "Стороны: " << "a=" << this->a << " " << "b=" << this->b << " " << "c=" << this->c << " " << "d=" << this->d << std::endl;
		std::cout << "Углы: " << "A=" << this->A << " " << "B=" << this->B << " " << "C=" << this->C << " " << "D=" << this->D << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class EquilateralTriangle : public Triangle {
public:

	EquilateralTriangle(int numberSidesint, int a, int A) :Triangle(numberSidesint, a, b, c, A, B, C) {
		this->b = a;
		this->c = a;

		this->B = A;
		this->C = A;
	}

	std::string NameFigures = "Равносторонний треугольник:";	

	std::string getType() override {
		return NameFigures;
	}
};

class Rectangle : public Quadrilateral {
public:

	Rectangle(int numberSidesint, int a, int d, int A) :Quadrilateral(numberSidesint, a, b, c, d, A, B, C, D) {
		this->c = a;
		this->b = d;

		this->B = A;
		this->C = A;
		this->D = A;
	}

	std::string NameFigures = "Прямоугольник:";

	std::string getType() override {
		return NameFigures;
	}
};

class Square : public Quadrilateral {
public:
	std::string NameFigures = "Квадрат:";
	
	Square(int numberSidesint, int a, int A) :Quadrilateral(numberSidesint, a, b, c, d, A, B, C, D) {
		this->b = a;
		this->c = a;
		this->d = a;

		this->B = A;
		this->C = A;
		this->D = A;
	}	

	std::string getType() override {
		return NameFigures;
	}
};

class Parallelogram : public Quadrilateral {
public:
	std::string NameFigures = "Параллелограмм:";
	
	Parallelogram(int numberSidesint, int a, int d, int A, int B) :Quadrilateral(numberSidesint, a, b, c, d, A, B, C, D) {
		this->b = d;
		this->c = a;

		this->D = B;
		this->C = A;
	}	

	std::string getType() override {
		return NameFigures;
	}
};

class Rhombus : public Quadrilateral {
public:
	std::string NameFigures = "Ромб:";
	
	Rhombus(int numberSidesint, int a, int A, int B) :Quadrilateral(numberSidesint, a, b, c, d, A, B, C, D) {
		this->b = a;
		this->c = a;
		this->d = a;

		this->D = B;
		this->C = A;
	}

	std::string getType() override {
		return NameFigures;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Figures* figures = new Figures(0);
	print_info(figures);
	delete figures;

	Figures* triangle = new Triangle(3, 10, 20, 30, 50, 60, 70);
	print_info(triangle);
	delete triangle;

	Figures* rightRriangle = new RightTriangle(3, 10, 20, 30, 50, 60);
	print_info(rightRriangle);
	delete rightRriangle;

	Figures* rightRriangle2 = new RightTriangle(3, 10, 20, 30, 50, 40);
	print_info(rightRriangle2);
	delete rightRriangle2;

	Figures* isoscelesTriangle = new IsoscelesTriangle(3, 10, 20, 50, 60);
	print_info(isoscelesTriangle);
	delete isoscelesTriangle;

	Figures* equilateralTriangle = new EquilateralTriangle(3, 30, 60);
	print_info(equilateralTriangle);
	delete equilateralTriangle;

	Figures* quadrilateral = new Quadrilateral(4, 10, 20, 30, 40, 50, 60, 70, 80);
	print_info(quadrilateral);
	delete quadrilateral;

	Figures* rectangle = new Rectangle(4, 10, 20, 90);
	print_info(rectangle);
	delete rectangle;

	Figures* square = new Square(4, 20, 90);
	print_info(square);
	delete square;

	Figures* parallelogram = new Parallelogram(4, 20, 30, 30, 40);
	print_info(parallelogram);
	delete parallelogram;

	Figures* rhombus = new Rhombus(4, 30, 30, 40);
	print_info(rhombus);
	delete rhombus;

	return 0;
}