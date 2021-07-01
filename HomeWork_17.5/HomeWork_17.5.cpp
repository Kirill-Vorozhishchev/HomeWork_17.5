#include <iostream>

class vector
{
public:
	vector() : x(10), y(10), z(10)
	{}
	vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void show()
	{
		std::cout << x << ' ' << y << ' ' << z << '\n';
	}
private:
	double x;
	double y;
	double z;
};

class example
{
private:
	int a;

public:
	example()
	{
		a = 0;
	}

	example(int newA)
	{
		a = newA;
	}

	int GetA()
	{
		return 5;
	}

	void SetA(int newA)
	{
		a = newA;
	}
};

int main()
{
	vector v;
	v.show();

	example temp(5);
	std::cout << temp.GetA();
}