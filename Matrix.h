#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <bits/stdc++.h>
using namespace std ;
class Matrix
{
private :
    int row, col ;
    int **data ;
public :
    Matrix () ;
    Matrix (int r, int c ) ;
    Matrix (const Matrix& mat1 ) ;
    ~Matrix () ;
    void EnterElements() ;
    void DisplayMatrix() ;
    friend ostream& operator<< (ostream& out,const Matrix& mat) ;
    friend istream& operator>> (istream& in, Matrix& mat) ;
    Matrix operator+(Matrix mat1) ;
    Matrix operator-(Matrix mat1) ;
    Matrix Transpose (Matrix mat1) ;
    bool isIdentity (Matrix mat) ;
    bool isSymetric (Matrix mat) ;
    bool isSquare (Matrix mat) ;
    bool operator!= (Matrix mat1) ;
    bool operator== (Matrix mat1) ;
    void operator++() ;
    void operator--() ;
    Matrix operator+(int scalar) ;
    Matrix operator-(int scalar) ;
    Matrix operator*(int scalar) ;
    Matrix operator+= (int scalar) ;
    Matrix operator-= ( int scalar) ;
    friend Matrix operator+= (Matrix& mat1 , Matrix mat2) ;
    friend Matrix operator-= (Matrix& mat1 , Matrix mat2) ;
   // Matrix operator-= (Matrix mat1) ;
    Matrix operator*(Matrix mat1) ;


};


#endif // MATRIX_H_INCLUDED
