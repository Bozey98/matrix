#include <fstream>
#include <iostream>

using namespace std;

class Matrix {

private:
	int row, col, **mas;
public:
	Matrix(int length = 4);
	Matrix(int, int);
	Matrix(const Matrix&);
	
        int Element(int i, int j) const;
	~Matrix();
	void fill(const char*);
	void show() const;
	int rows() const;
	int columns() const;
	Matrix operator+(const Matrix&) const;
	Matrix operator*(const Matrix&) const;
	bool operator==(const Matrix&) const;
	Matrix operator=(const Matrix& x);
	friend istream& operator >> (istream& is, Matrix& m);
	friend ostream& operator << (std::ostream&, const Matrix&);
};
