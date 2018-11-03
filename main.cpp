#include <iostream>
#include <bits/stdc++.h>
#include "matrix.h"
#include "Matrix.h"
//#include "MATRIX_H_INCLUDED"

using namespace std ;
int main ()
{
    int row, col, row2, col2;
    cout <<"enter your row for first matrix: " << endl ;
    cin >> row ;
    cout << "enter your col for first matrix: " << endl ;
    cin >> col ;
    cout <<"enter your row for second matrix: " << endl ;
    cin >> row2 ;
    cout << "enter your col for second matrix: " << endl ;
    cin >> col2 ;
    Matrix mat1(row, col) ;
    mat1.EnterElements();
    cout <<"The first Matrix is :" << endl ;
    mat1.DisplayMatrix() ;
    Matrix mat2(row2, col2) ;
    mat2.EnterElements();
    cout <<"The second Matrix is :" << endl ;
    mat2.DisplayMatrix() ;
    Matrix mat3(2,2) ;
    /* mat3=mat1+mat2 ;
     cout << mat3 << endl ; */
    int x =  0 ;
    while ( x < 19 )
    {
        cout<<"1-matrix operator+ (matrix mat1, matrix mat2)"<<endl;
        cout<<"2-matrix operator-(matrixmat1 , matrix mat2)"<<endl;
        cout<<"3-matrix operator* (matrixmat1, matrix mat2)"<<endl;
        cout<<"4-matrix operator+ (matrix mat1, int scalar)"<<endl;
        cout<<"5-matrix operator-(matrix mat1, int scalar)"<<endl;
        cout<<"6-matrix operator* (matrix mat1, int scalar)"<<endl;
        cout<<"7-matrix operator += (matrix& mat1, matrix mat2)" << endl ;
        cout<<"8-matrix operator -=(matrix& mat1, matrix mat2)" << endl ;
        cout<<"9-matrix operator+  (matrix& mat, int scalar)" << endl ;
        cout<<"10-matrix operator-  (matrix& mat, int scalar)" << endl ;
        cout<<"11-void operator++ (matrix& mat)" << endl ;
        cout<<"12-void operator-- (matrix& mat)" << endl ;
        cout<<"13-bool operator == (matrix mat1, matrix mat2)" << endl ;
        cout<<"14-bool operator != (matrix mat1, matrix mat2)" << endl ;
        cout<<"15-bool isSquare (matrix mat)" << endl ;
        cout<<"16-bool   isSymetric (matrix mat)" << endl ;
        cout<<"17-bool   isIdentity (matrix mat)" << endl ;
        cout<<"18-matrix  transpose(matrix mat) " << endl ;

        cout << "enter your choice : " << endl ;
        cin >> x ;
        if(x==1)
        {
            cout << " mat1 is " << mat1 << endl;
            cout << " mat3 is " << mat3 << endl;
            cout <<"(mat1+mat2)" <<  (mat1 + mat3) << endl << endl;
            cout <<"(mat3+mat3)" << (mat3 + mat3) << endl << endl;
        }
        if(x==2)
        {
            cout << " mat1 is " << endl << mat1 << endl;
            cout << " mat3 is " << endl << mat3 << endl;
            cout <<"(mat1-mat3)" << endl << (mat1 - mat3) << endl << endl;
            cout <<"(mat3-mat3)" << endl << (mat3 - mat3) << endl << endl;
        }
        if(x==3)
        {
            cout << " mat1 is " << endl << mat1 << endl;
            cout << " mat3 is " << endl << mat3 << endl;
            cout <<"(mat1*mat3)" << endl << mat1 * mat3 << endl << endl;
            cout <<"(mat3*mat3)" << endl << (mat3 * mat3) << endl << endl;
        }
        if(x==4)
        {
            cout <<" mat1 is " << endl ;
            cout << mat1 << endl;
            cout <<" mat2 is " << endl ;
            cout << mat2 << endl;
            cout <<" mat3 is " << endl ;
            cout << mat3 << endl;
            int scalar;
            cout << "enter your scalar" << endl ;
            cin>> scalar;
            cout <<"(mat1 + scalar)" << endl ;
            cout << (mat1 + scalar) << endl << endl;
            cout <<"(mat2 + scalar)" << endl ;
            cout << (mat2 + scalar) << endl << endl;
            cout <<"(mat3 + scalar)" << endl ;
            cout << (mat3 + scalar) << endl << endl;
        }
        if(x==5)
        {
            cout <<" mat1 is " << endl ;
            cout << mat1 << endl;
            cout <<" mat2 is " << endl ;
            cout << mat2 << endl;
            cout <<" mat3 is " << endl ;
            cout << mat3 << endl;
            int scalar;
            cout << "enter your scalar" << endl ;
            cin>> scalar;
            cout <<"(mat1 - scalar)" << endl ;
            cout << (mat1 - scalar) << endl << endl;
            cout <<"(mat2 - scalar)" << endl ;
            cout << (mat2 - scalar) << endl << endl;
            cout <<"(mat3 - scalar)" << endl ;
            cout << (mat3 - scalar) << endl << endl;
        }
        if(x==6)
        {
            cout <<" mat1 is " << endl ;
            cout << mat1 << endl;
            cout <<" mat2 is " << endl ;
            cout << mat2 << endl;
            cout <<" mat3 is " << endl ;
            cout << mat3 << endl;
            int scalar;
            cout << "enter your scalar" << endl ;
            cin>> scalar;
            cout <<"(mat1 * scalar)" << endl ;
            cout << mat1 * scalar << endl << endl;
            cout <<"(mat2 * scalar)" << endl ;
            cout << (mat2 * scalar) << endl << endl;
            cout <<"(mat3 * scalar)" << endl ;
            cout << (mat3 * scalar) << endl << endl;
        }
        if(x==7)
        {
            cout << "mat1 " << endl ;
            cout << mat1 << endl ;
            cout << "mat2 " << endl ;
            cout << mat2 << endl ;
            mat1 += mat2  ;
            cout <<"mat1 " << endl ;
            cout << mat1 << endl ;
        }
        if(x==8)
        {
            cout << "mat1 " << endl ;
            cout  << mat1 << endl ;
            cout << "mat2 " << endl;
            cout << endl << mat2 << endl ;
            mat1 =mat1-mat2  ;
            cout << "mat1" << endl ;
            cout << mat1 << endl ;
        }
        if(x==9)
        {
            int scalar ;
            cout << "enter your scalar : " << endl ;
            cin >> scalar ;
            cout << "mat1 " << endl << mat1 << endl ;
            mat1 = mat1+ scalar ;
            cout << mat1 << endl ;
        }
        if (x==10)
        {
            int scalar ;
            cout << "enter your scalar : " << endl ;
            cin >> scalar ;
            cout << "mat1 " << endl << mat1 << endl ;
            mat1 = mat1 - scalar ;
            cout << mat1 << endl ;
        }
        if (x==11)
        {
            cout <<"mat1" << endl << mat1 << endl ;
            ++mat1 ;
            cout << mat1 << endl ;
        }
        if (x==12)
        {
            cout <<"mat1" << endl << mat1 << endl ;
            --mat1 ;
            cout << mat1 << endl ;
        }
        if (x==13)
        {
            if (mat1 == mat2 )
            {
                cout << "Matrices (Mat1 , Mat2) are identical" << endl ;
            }
            else
            {
                cout << "Matrices (Mat1 , Mat2) are not identical" << endl;
            }
        }
        if (x==14)
        {
            if (mat1 != mat2 )
            {
                cout << "Matrices (Mat1 , Mat2) are not identical" << endl ;
            }
            else
            {
                cout << "Matrices (Mat1 , Mat2) are identical" << endl ;
            }
        }
        if (x==15)
        {
            if (mat1.isSquare(mat1))
            {

                cout << "the matrix (Mat1) is square" << endl ;
            }
            else
            {

                cout << "the matrix (Mat1) is not square " << endl ;
            }
        }
        if (x==16)
        {
            if (mat1.isSymetric(mat1))
            {
                cout << "the matrix (Mat1) is not symmetric" << endl ;
            }
            else
            {
                cout << "the matrix (Mat1) is  symmetric" << endl ;
            }
        }
        if (x==17)
        {
            if  (mat1.isIdentity(mat1))
            {
                cout << "the matrix (Mat1) is identity" << endl ;

            }
            else
            {
                cout << "the matrix (Mat1) is not identity" << endl ;
            }
        }
        if (x==18)
        {
            cout <<"mat1" << endl <<  mat1 << endl ;
            cout <<mat1.Transpose(mat1) << endl << endl ;
            cout <<"mat2" << endl <<  mat2 << endl ;
            cout << mat2.Transpose(mat2) << endl ;
            cout << "mat3" << endl << mat3 << endl ;
            cout << mat3.Transpose(mat3) << endl ;
        }
        }

    return 0;
}







