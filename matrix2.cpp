#include <iostream>
using namespace std;

class matrix
{
private:
    int rows;
    int columns;
    int **data;

public:
    matrix(int _rows, int _columns)
    {
        rows = _rows;
        columns = _columns;
        data = new int *[rows];
        for (int i = 0; i < rows; ++i)
        {
            data[i] = new int[columns];
            for (int j = 0; j < columns; ++j)
            {
                data[i][j] = 0;
            }
        }
    }

    void setvalue(int row, int column, int value)
    {
        data[row][column] = value;
    }

    void Display()
    {
        cout << "Matrix contents:" << endl;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Matrix multiplication overload
    matrix operator*(const matrix &other)
    {
        if (columns != other.rows)
        {
            cout << "Matrix dimensions are incompatible for multiplication." << endl;
            exit(1);
        }

        matrix result(rows, other.columns);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < other.columns; ++j)
            {
                result.data[i][j] = 0;
                for (int k = 0; k < columns; ++k)
                {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};

int main()
{
    matrix m1(2, 2);
    matrix m2(2, 3);

    m1.setvalue(1, 1, 4);
    m1.Display();

    m2.setvalue(0, 0, 2);
    m2.setvalue(0, 1, 3);
    m2.setvalue(1, 0, 1);
    m2.setvalue(1, 1, 5);
    m2.setvalue(2, 0, 0);
    m2.setvalue(2, 1, 2);
    m2.Display();

    matrix m3 = m1 * m2;
    cout << "Result of matrix multiplication:" << endl;
    m3.Display();

    return 0;
}
