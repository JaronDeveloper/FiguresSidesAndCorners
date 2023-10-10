#include <iostream>

class  Figures
{
public:
	std::string NameFigures;

	Figures() {}
	Figures(int sizeArray, int sizeSide[], int sizeAngles[], char abcSide[], char abcAngles[]) {
		for (int i = 0;i < sizeArray;i++) {
			std::cout << abcSide[i] << " = ";
			std::cout << sizeSide[i] << " ";
		}
		std::cout << std::endl;
		for (int i = 0;i < sizeArray;i++) {
			std::cout << abcAngles[i] << " = ";
			std::cout << sizeAngles[i] << " ";
		}
		std::cout << std::endl;
	}

	virtual	void  check() {

		/*
	(int counternumberSides, int ANumber, int BNumber, int CNumber, int DNumber,
		std::string NameFigures)
	{
		/*
		std::cout << NameFigures << std::endl;

		if (counternumberSides == 0) {
			std::cout << "Правильная" << std::endl;
		}
		if (counternumberSides == 3) {
			if (ANumber - 10 == BNumber && 90 == CNumber) {
				std::cout << "Правильная" << std::endl;
			}
			if (ANumber + 10 == BNumber && 90 == CNumber) {
				std::cout << "Неправильная" << std::endl;
			}
			if (ANumber + 10 == BNumber && BNumber + 10 == CNumber) {
				std::cout << "Правильная" << std::endl;
			}
			if (ANumber == BNumber && BNumber == CNumber) {
				std::cout << "Правильная" << std::endl;
			}
			if (ANumber < BNumber && BNumber > CNumber || ANumber == CNumber && CNumber < BNumber) {
				std::cout << "Неправильная" << std::endl;
			}
		}
		if (counternumberSides == 4) {
			if (ANumber + 10 == BNumber && BNumber + 10 == CNumber && CNumber + 10 == DNumber) {
				std::cout << "Неправильная" << std::endl;
			}
			if (ANumber + 10 == BNumber && BNumber - 10 == CNumber && CNumber == DNumber - 10) {
				std::cout << "Неправильная" << std::endl;
			}
			if (ANumber == BNumber && CNumber == DNumber) {
				std::cout << "Правильная" << std::endl;
			}
		}
		std::cout << "Количество сторон: " << counternumberSides << std::endl;
		*/
	}

	virtual std::string getType() {
		return NameFigures;
	}
};

void print_info(Figures* f) {
	std::cout << f->getType() << std::endl;
}

//int sizeArray = 0;
//int siDe[], Angles[];
//char abcSide[], abcAngles[];

class UnknownFigures : public Figures {
public:
	std::string NameFigures = "Фигура:";
	static const int sizeArray = 0;

	void info() {
		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, 0, 0, 0, 0);
	}

	void check()override {
		if (sizeArray == 0) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}

	//Triangle():NameFigures("Треугольник") {}

	std::string getType() override {
		return NameFigures;
	}
};

class  Triangle : public Figures
{
public:
	static const int sizeArray = 3;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	std::string NameFigures = "Треугольник:";

	int a = 10, b = 20, c = 30;//стороны
	int	A = 50, B = 60, C = 70;//углы
	//int AA, BB, CC;

	void check()override {
		if (A + B + C == 180) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}

	void info() {//int a,int b,int c,int A,int B,int C) {
		//AA = A;
		//BB = B;
		//CC = C;
	   //sizeArray = 3;
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}
	//Triangle():NameFigures("Треугольник") {}

	std::string getType() override {
		return NameFigures;
	}
};

class Quadrilateral : public Figures {
public:
	std::string NameFigures = "Четырехугольник:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	int a = 10, b = 20, c = 30, d = 40;
	int A = 50, B = 60, C = 70, D = 80;
	//int AA, BB, CC, DD;
	void check()override {
		if (A + B + C + D == 360) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}
	void info() {//int a,int b,int c,int d,int A,int B,int C,int D) {

		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class RightRriangle : public Figures {
public:
	std::string NameFigures = "Прямоугольный треугольник:";

	static const int sizeArray = 3;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 90;
	//int CC;
	void check()override {
		if (C == 90) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}
	void info() {//int a,int b,int c,int A,int B,int C) {
		//	CC = C;

		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class RightRriangle2 : public Figures {
public:
	std::string NameFigures = "Прямоугольный треугольник:";

	int a = 10, b = 20, c = 30;
	int A = 50, B = 40, C = 90;

	static const int sizeArray = 3;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int CC;
	void check()override {
		if (C == 90) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}
	void info() {//int a, int b, int c, int A, int B, int C) {
		//	CC = C;

		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class IsoscelesTriangle : public Figures {
public:

	int	a = 10, b = 20, c = 10;
	int	A = 50, B = 60, C = 50;

	std::string NameFigures = "Равнобедренный треугольник:";

	static const int sizeArray = 3;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int aa, cc;
	//int AA,CC;
	void check()override {
		if (A == C && a == c) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}
	void info() {//int a, int b, int c, int A, int B, int C) {
		/*
		CC = C;
		AA = A;
		aa = a;
		cc = c;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}

};

class EquilateralTriangle : public Figures {
public:

	int	a = 30, b = 30, c = 30;
	int	A = 60, B = 60, C = 60;

	std::string NameFigures = "Равносторонний треугольник:";

	static const int sizeArray = 3;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int CC,AA,BB;
	void check()override {
		if (C == 60 && A == 60 && B == 60) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}
	void info() {//int a, int b, int c, int A, int B, int C) {
		/*
		CC = C;
		AA = A;
		BB = B;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}
	std::string getType() override {
		return NameFigures;
	}
};

class Rectangle : public Figures {
public:

	int	a = 10, b = 20, c = 10, d = 20;
	int	A = 90, B = 90, C = 90, D = 90;

	std::string NameFigures = "Прямоугольник:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int AA, BB, CC, DD;
	void check()override {
		if (A == 90 && B == 90 && C == 90 && D == 90) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}

	void info() {//int a, int b, int c, int d, int A, int B, int C, int D) {
		/*
		AA = A;
		BB = B;
		CC = C;
		DD = D;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class Square : public Figures {
public:

	int	a = 20, b = 20, c = 20, d = 20;
	int	A = 90, B = 90, C = 90, D = 90;

	std::string NameFigures = "Квадрат:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int AA, BB, CC, DD;
	void check()override {
		if (A == 90 && B == 90 && C == 90 && D == 90) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}

	void info() {//int a, int b, int c, int d, int A, int B, int C, int D) {
		/*
		AA = A;
		BB = B;
		CC = C;
		DD = D;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class Parallelogram : public Figures {
public:

	int	a = 20, b = 30, c = 20, d = 30;
	int	A = 30, B = 40, C = 30, D = 40;

	std::string NameFigures = "Параллелограмм:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int AA, BB, CC, DD;
	void check()override {
		if (A == C && B == D) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}

	void info() {//int a, int b, int c, int d, int A, int B, int C, int D) {
		/*
		AA = A;
		BB = B;
		CC = C;
		DD = D;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class Rhombus : public Figures {
public:

	int	a = 30, b = 30, c = 30, d = 30;
	int	A = 30, B = 40, C = 30, D = 40;

	std::string NameFigures = "Ромб:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int AA, BB, CC, DD;
	void check()override {
		if (A == C && B == D) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
	}

	void info() {//int a, int b, int c, int d, int A, int B, int C, int D) {
		/*
		AA = A;
		BB = B;
		CC = C;
		DD = D;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "Количество сторон: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

int main() {

	setlocale(LC_ALL, "Russian");
	Figures* unknownFigures = new UnknownFigures();
	print_info(unknownFigures);
	UnknownFigures unknownFigures1;
	unknownFigures1.check();
	unknownFigures1.info();

	Figures* triangle = new Triangle();
	print_info(triangle);
	Triangle t;
	t.check();
	t.info();//10, 20, 30, 50, 60, 70);

	Figures* quadrilateral = new Quadrilateral();
	print_info(quadrilateral);
	Quadrilateral q;
	q.check();
	q.info();


	Figures* rightRriangle = new RightRriangle();
	print_info(rightRriangle);
	RightRriangle r;
	r.check();
	r.info();

	Figures* rightRriangle2 = new RightRriangle2();
	print_info(rightRriangle2);
	RightRriangle2 r2;
	r2.check();
	r2.info();

	Figures* isoscelesTriangle = new IsoscelesTriangle();
	print_info(isoscelesTriangle);
	IsoscelesTriangle i;
	i.check();
	i.info();

	Figures* equilateralTriangle = new EquilateralTriangle();
	print_info(equilateralTriangle);
	EquilateralTriangle e;
	e.check();
	e.info();

	Figures* reectangle = new Rectangle();
	print_info(reectangle);
	Rectangle re;
	re.check();
	re.info();

	Figures* square = new Square();
	print_info(square);
	Square s;
	s.check();
	s.info();

	Figures* parallelogram = new Parallelogram();
	print_info(parallelogram);
	Parallelogram p;
	p.check();
	p.info();

	Figures* rhombus = new Rhombus();
	print_info(rhombus);
	Rhombus rh;
	rh.check();
	rh.info();

	/*
	UnknownFigures unknownFigures;
	Figures* f= &unknownFigures;
	f->PrintInfoFigures(0,0,0,0,0,"Фигура: ");
	std::cout << std::endl;

	Triangle t;
	f = &t;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	Quadrilateral qL;
	f = &qL;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Четырехугольник: ");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	RightRriangle rightRriangle;
	f = &rightRriangle;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Прямоугольный треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	RightRriangle2 rightRriangle2;
	f = &rightRriangle2;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Прямоугольный треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	IsoscelesTriangle isoscelesTriangle;
	f = &isoscelesTriangle;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Равнобедренный треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	EquilateralTriangle equilateralTriangle;
	f = &equilateralTriangle;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Равносторонний треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	Rectangle rectangle;
	f = &rectangle;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Прямоугольник: ");
	Figures(f->a, f->b, f->c,f->d, f->A, f->B, f->C, f->D);

	Square square;
	f = &square;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Квадрат: ");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	Parallelogram parallelogram;
	f = &parallelogram;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Параллелограмм: ");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	Rhombus rhombus;
	f = &rhombus;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Ромб: ");
	Figures(f->a, f->b, f->c,f->d,f->A, f->B, f->C, f->D);
	*/
	return 0;
}