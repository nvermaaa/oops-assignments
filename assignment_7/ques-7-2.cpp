#include <iostream>
using namespace std;
class Matrix
{
private:
  int mat[10][10];
  int rows, cols;

public:
  Matrix(int r = 0, int c = 0)
  {
    rows = r;
    cols = c;
  }

  void input()
  {
    cout << "Enter elements (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        cin >> mat[i][j];
      }
    }
  }

  void display()
  {
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        cout << mat[i][j] << " ";
      }
      cout << endl;
    }
  }
  friend Matrix operator*(Matrix, Matrix);
};

Matrix operator*(Matrix m1, Matrix m2)
{
  Matrix result(m1.rows, m2.cols);

  if (m1.cols != m2.rows)
  {
    cout << "Matrix multiplication not possible\n";
    return result;
  }

  for (int i = 0; i < m1.rows; i++)
  {
    for (int j = 0; j < m2.cols; j++)
    {
      result.mat[i][j] = 0;
      for (int k = 0; k < m1.cols; k++)
      {
        result.mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
      }
    }
  }

  return result;
}

int main()
{
  Matrix m1(2, 3), m2(3, 2), m3;
  cout << "Matrix 1:\n";
  m1.input();
  cout << "Matrix 2:\n";
  m2.input();
  m3 = m1 * m2;
  cout << "Resultant Matrix:\n";
  m3.display();
  return 0;
}