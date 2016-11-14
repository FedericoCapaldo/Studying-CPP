#include <iostream>
using namespace std;
#include "Array.h"
#include "Matrix.h"

template
      < typename T >

void fillMatrix( Matrix <T> & m )
{
    int i, j;
    for ( i = 0; i < m.numRows(); i++ )
        m[i][0] = T();
    for ( j = 0; j < m.numCols(); j++ )
        m[0][j] = T();
    for ( i = 1; i < m.numRows(); i++ )
        for ( j = 1; j < m.numCols(); j++ )
        {
            m[i][j] = T(i * j);
        }
}

void test_int_matrix()
{ // here is a start, but make it better
    Matrix < int > m(10,5);
    fillMatrix( m );
    cout << m;
    // PUT YOUR TRY/CATCH HERE AND TEST EXCEPTIONS
}

void test_double_matrix()
{ // here is a start, but make it better
    Matrix < double > M(8,10);
    fillMatrix( M );
    cout << M;
    // PUT YOUR TRY/CATCH HERE AND TEST EXCEPTIONS
}

int main()
{

    Matrix < int > myMatrix(3,3);
    for(int i=0; i < 3; i++ ) {
        for (int j=0; j < 3; j++) {
            myMatrix[i][j] = 5;
        }
    }
    cout << myMatrix << endl;
    test_int_matrix();
    cout << endl;
    test_double_matrix();
    return 0;
}