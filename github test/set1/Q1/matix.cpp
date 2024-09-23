#include <iostream>
using namespace std;
class matrix
{
private:
    int rows;
    int coloumns;
    int **data;

public:
    matrix(int _row, int _column)
    {
        rows = _row;
        coloumns = _column;
        data = new int *[rows];
        for (int i = 0; i < rows; ++i)
        {
            data[i] = new int[coloumns];
            for (int j = 0; j < coloumns; ++j)
            {
                data[i][j] = 0;
            }
        }
    }
    matrix(int _row, int _column, int value){
        rows = _row;
        coloumns = _column;
        data = new int *[rows];
        for (int i = 0; i < rows; ++i)
        {
            data[i] = new int[coloumns];
            for (int j = 0; j < coloumns; ++j)
            {
                data[i][j] = value;
            }
        }
    }
    matrix(int _row, int _column, int** arr){
        rows = _row;
        coloumns = _column;
        data = new int *[rows];
        for (int i = 0; i < rows; ++i)
        {
            data[i] = new int[coloumns];
            for (int j = 0; j < coloumns; ++j)
            {
                data[i][j] = arr[i][j];
            }
        }
    } 
    void Display()
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < coloumns; ++j)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};



int main(){
    int rows = 3;
    int coloumns = 3; 
    int** arr;
    arr = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        arr[i]= new int[coloumns]; 
        for (int j = 0; j < coloumns; ++j)
        {
            arr[i][j]=i+1;
        }
    }
    matrix m1(3,3);
    matrix m2(3,3,7);
    matrix m3(rows,coloumns,arr);
    cout << "Default Constructor: "<<endl;
    m1.Display();
    cout << "Parameterized Constructor: " << endl;
    m2.Display();
    cout << "Constructor from 2D Array: " << endl;
    m3.Display();
    return 0;
}