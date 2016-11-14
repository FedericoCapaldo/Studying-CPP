#include <cassert>
#include <iomanip>

template
    <typename Type>
class Array {

    private:
        int len;
        Type * buf;
    public:
        Array( int newLen )
                : len( newLen ), buf( new Type[newLen] )
        {
        }

        Array( const Array & l )
                : len( l.len ), buf( new Type[l.len] )
        {
            for ( int i = 0; i < l.len; i++ ) {
                buf[i] = l.buf[i]; // note = is incorrect if buf elements are pointers
            }
        }

        int length()
        {
            return len;
        }

        Type & operator [] ( int i )
        {
            assert( 0 <= i && i < len );
            return buf[i];
        }

        void print( ostream & out )
        {
            for (int i = 0; i < len; ++i) {
                out << buf[i] << " "; // #include <iomanip>
            }
            cout << endl;
        }

        friend ostream & operator << ( ostream & out, Array & a )
        {
            a.print( out );
            return out;
        }

        friend ostream & operator << ( ostream & out, Array * ap )
        {
            ap->print( out );
            return out;
        }
      // note the overloading of operator << on a pointer as well
};