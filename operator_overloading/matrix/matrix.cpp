#include <iostream>
using namespace std;
class matrix{
    private:
    int rows;
    int coloumns;
    int **data;
    public:
    matrix(int _row, int _column){
        rows=_row;
        coloumns=_column;
        data = new int*[rows];
        for (int i = 0; i < rows; ++i)
        {
            data[i]=new int[coloumns];
            for (int j = 0; j < coloumns; ++j)
            {
                data[i][j]=0;
            }
            
        }
        
    }
    void setvalue(){
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < coloumns; ++j)
            {
                cin >> data[i][j];
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
    matrix operator*(const matrix &other){ 
        matrix m3(rows, other.coloumns);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < other.coloumns; ++j)
            {
                m3.data[i][j] = 0;
                for (int k = 0; k < coloumns; ++k)
                {
                    m3.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return m3;
    }
};
int main(){
    matrix m1(2,2);
    matrix m2(2,2);
    m1.setvalue();
    m1.Display();
    m2.setvalue();
    m2.Display();
    matrix m3 = m1 * m2;
    m3.Display(); 
    return 0;
}