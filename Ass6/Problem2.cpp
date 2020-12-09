#include <iostream>
using namespace std;

class matrix
{
    int value[2][2];
public:
    matrix()
    {
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<2;j++)
            {
                value[i][j] = 0;
            }
        }
    }

    void setMatrix(int user[2][2])
    {
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<2;j++)
            {
                value [i][j] = user[i][j];
            }
        }
    }

    void displayMatrix()
    {
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<2;j++)
            {
                cout << "\t" << value [i][j] ;
            }

            cout << endl;
        }
    }

    void getMatrix()
    {
        cout << "enter elements of matrix :" << endl;

        for (int i=0;i<2;i++)
        {
            for (int j=0;j<2;j++)
            {
                cin >> value [i][j] ;
            }
        }
    }

    friend matrix operator * (matrix M1, matrix M2)
    {
        matrix temp;
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<2;j++)
                temp.value[i][j]= (M1.value[i][0]* M2.value[0][j])+(M1.value[i][1]* M2.value[1][j]);
        }

        return temp;
    }
};

int main()
{
    matrix M1, M2, M3;

    int mat[2][2] = {{2,2},{2,2}};

    M1.setMatrix(mat);
    M2.getMatrix();


    M3 = M1*M2;

    cout << "M1 =" << endl;
    M1.displayMatrix();
    cout << "M2 =" << endl;
    M2.displayMatrix();
    cout << "M1*M2 ="<< endl << "-----------------------------" << endl;
    M3.displayMatrix();

    return 0;
}
