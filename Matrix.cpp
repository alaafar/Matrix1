#include <bits/stdc++.h>
#include "matrix.h"
using namespace std ;

Matrix::Matrix( ) {}
Matrix::Matrix(int r, int c)
{
    row = r  ;
    col = c  ;
    data = new int* [row] ; //initialize empty rows
    for (int i = 0 ; i < row ; i++ )
    {
        data[i] = new int[col] ; //initialize empty rows
        for (int j = 0 ; j < col ; j++)
            data[i][j] = 0 ;
    }
}
Matrix::Matrix (const Matrix& mat1 ) //copy constructor
{
    row = mat1.row;
    col = mat1.col;
    data = new int*[mat1.row];
    for (int i=0; i<mat1.row; i++)
    {
        data[i] = new int[mat1.col];
    }
    for (int i=0; i<mat1.row; i++)
    {
        for (int j=0; j<mat1.col; j++)
        {
            data[i][j] = mat1.data[i][j] ;
        }
    }
}
Matrix::~Matrix () //destory matrix
{
    for (int i = 0 ; i < row ; i++ )
    {
        delete [] data [i] ;
    }
    delete [] data ;
}
void Matrix::EnterElements()
{
    cout << "Enter the elements :" << endl ;
    for (int i = 0 ; i < row ; i++)
    {
        for (int j = 0 ; j < col ; j++)
            cin >> data[i][j] ;
    }
}
void Matrix::DisplayMatrix()
{
    cout << "the Matrix is : " << endl ;
    for (int i =0 ; i < row ; i ++ )
    {
        for (int j = 0; j < col ; j++ )
        {
            cout << data[i][j] << "   " ;
        }
        cout << endl ;
    }

}
ostream& operator<< (ostream& out,const Matrix& mat)
{
    cout << "the matrix is : " << endl ;

    for (int i = 0 ; i < mat.row ; i++)
    {
        for (int j = 0 ; j < mat.col ; j ++ )
        {
            out << setw(5) << mat.data[i][j] << setw(2) ;
        }
        cout << endl ;
    }
    return out ;
}
istream& operator>> (istream& in, Matrix& mat)
{
    cout << "enter Your elements : " << endl ;
    for (int i = 0 ; i < mat.row ; i++ )
    {
        for (int j = 0 ; j < mat.col ; j++ )
            in >> mat.data[i][j] ;
    }
    return in ;
}
Matrix Matrix::operator+(Matrix mat1)
{
    if(row==mat1.row&&col==mat1.col)
    {
        Matrix mat3(row, col) ;
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                mat3.data[i][j]=data[i][j]+mat1.data[i][j];
        return mat3;
    }
    else
        cout<<"false";
}
Matrix Matrix::operator-(Matrix mat1)
{
    if(row==mat1.row&&col==mat1.col)
    {
        Matrix mat3(row, col) ;
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                mat3.data[i][j]=data[i][j]-mat1.data[i][j];
        return mat3;
    }
    else
        cout<<"false";
}
Matrix Matrix::operator*(Matrix mat1)
{
    if(row==mat1.row&&col==mat1.col)
    {

        Matrix mat3 (row, col) ;
        for(int i=0; i<row; i++)
            for(int y=0; y<col; y++)
                mat3.data[i][y] = 0 ;
        for(int i=0; i<row; i++)
            for(int y=0; y<col; y++)
                for(int j=0; j<col; j++)
                    mat3.data[i][y]+=data[i][j]*mat1.data[j][y];



        return mat3;
    }
    else
        cout<<"false";
}
Matrix Matrix::operator+ (int scalar){
    Matrix mat3( row ,col ) ;
    for(int i=0; i<row; i++)

        for(int y=0; y<col; y++)
            mat3.data[i][y] =data[i][y] + scalar ;

    return mat3;
}
Matrix Matrix::operator-(int scalar)
{
    Matrix mat3 (row , col );
    for(int i=0; i<row; i++)

        for(int y=0; y<col; y++)
            mat3.data[i][y] =data[i][y] - scalar ;

    return mat3;
}
 Matrix Matrix::operator*(int scalar)
{
    Matrix mat3 (row, col );
    for(int i=0; i<row; i++)

        for(int y=0; y<col; y++)
            mat3.data[i][y] =data[i][y] * scalar ;

    return mat3;
}
// Student #2 with the middle ID (e.g., 20170082)
// The last operator >> takes an istream and a matrix and return the
// the same istream so it is possible to cascade input like
// cin >> matrix1 >> matrix2 << endl;
Matrix operator+= (Matrix& mat1 , Matrix mat2)
{
   // Matrix mat2(row, col) ;
    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {
            mat1.data[i][j] += mat2.data[i][j] ;

        }
    }
    return mat1 ;
}
Matrix operator-= (Matrix& mat1 , Matrix mat2)
{
   // Matrix mat2(row, col) ;
    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {
            mat1.data[i][j] -= mat2.data[i][j] ;

        }
    }
    return mat1 ;
}
Matrix Matrix :: operator+= (int scalar)
{
    for (int i = 0 ; i <row ; i++ )
    {
        for (int j = 0 ; j <col ; j++ )
            data[i][j]=data[i][j] + scalar ;
    }

    return *this ;
}
Matrix Matrix :: operator-= (int scalar)
{
    for (int i = 0 ; i <row ; i++ )
    {
        for (int j = 0 ; j <col ; j++ )
            data[i][j]=data[i][j] - scalar ;
    }

    return *this ;
}
void Matrix::operator++()
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            data[i][j]=data[i][j]+1;
        }
    }

}
void Matrix::operator--()
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            data[i][j]=data[i][j]-1;
        }
    }

}
bool Matrix::operator == (Matrix mat1)
{
    for (int i = 0 ; i <row ; i ++ )
    {
        for (int j = 0 ; j <col ; j ++ )
            if (data[i][j] == mat1.data[i][j])
            {
                return true ;
            }
            else

            {
                return false ;
            }
    }
}
// True if not same
// all elements of two matrices must be not equal
bool Matrix::operator!= (Matrix mat1)
{
    for (int i = 0 ; i <row ; i ++ )
    {
        for (int j = 0 ; j <col ; j ++ )
            if (data[i][j] != mat1.data[i][j])
            {
                return true ;
            }
            else
            {
                return false ;
            }
    }
}
bool Matrix :: isSquare (Matrix mat)
{
    for (int i = 0 ; i <mat.row ; i ++ )
    {
        for (int j = 0 ; j <mat.col ; j ++ )
            if (mat.row ==mat.col)
            {
                return true ;
            }
            else
            {
                return false ;
            }
    }
}
Matrix Matrix ::Transpose(Matrix mat)
{
   Matrix mat3(col , row) ;
    cout << "the Transpose of Matrix : " << endl ;
    for (int i = 0 ; i <mat.row ; i ++ )
    {
        for (int j = 0 ; j <mat.col ; j ++ )
            mat3.data[j][i] = mat.data[i][j] ;
    }
    return mat3  ;

}
bool Matrix :: isSymetric(Matrix mat)
{
    //Matrix Mat1 (row , col ) ;
    //Mat1 = transpose (mat) ;


    for (int i = 0 ; i <mat.row ; i++ )
    {
        for (int j = 0 ; j <mat.col ; j++ )
             if (mat.data[j][i] == mat.data[i][j] && i==j)
            {
                return true ;
            }

            else
            {
                return false ;
            }
    }

}
// True if square and identity  //A square matrix in which all the main diagonal elements are 1’s
//  and all the remaining elements are 0’s is called an Identity Matrix
//The explanation is simple. We need to make all the elements of principal or main diagonal as 1 and everything else as 0.
bool Matrix ::isIdentity (Matrix mat)
{
    for (int i = 0 ; i < mat.row ; i ++ )
    {
        for (int j = 0 ; j < mat.col ; j ++ )
        {
            if (i==j && mat.data[i][j] != 1 )
            {
                return false ;
            }
            else if (i != j &&  mat.data[i][j] != 0 )
            {
                return false ;
            }

        }
    }
    return true ;
}
