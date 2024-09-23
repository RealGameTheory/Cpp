#include <iostream>
using namespace std;
class matrixpractice
{
private:
    int rows;
    int coloumns;
    int **matrix;
public:
    matrixpractice(int __rows,int __coloumns){
        rows=__rows;
        coloumns=__coloumns;
        matrix=new int*[rows];
        for (int i = 0; i < rows; ++i)
        {
            matrix[i]=new int[coloumns];
            for (int j = 0; j < coloumns; ++j)
            {
                matrix[i][j]=0;
            }
            
        }
        
    };
    ~matrixpractice(){
        cout<<"matrix destroyed"<<endl;
    };
    void setvalue(){
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < coloumns; ++j)
            {
                cin>>matrix[i][j];
            }
            
        }
        
    }
    matrixpractice operator*(const matrixpractice& other){
        matrixpractice m3(rows,other.coloumns);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < other.coloumns; ++j)
            {
                m3.matrix[i][j] = 0;
                for (int k = 0; k < coloumns; ++k)
                {
                    m3.matrix[i][j]+=matrix[i][k]*other.matrix[k][j];
                }
                
            }
            
        }
        return m3;
        
    }
    void display(){
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < coloumns; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
        cout<<endl;
        }
        
    }
};

int main(){
    matrixpractice m1(2,2),m2(2,2);
    m1.setvalue();
    m1.display();
    m2.setvalue();
    m2.display();
    matrixpractice m3=m1*m2;
    m3.display();
    return 0;
}