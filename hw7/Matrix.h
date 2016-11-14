template
    <typename Type>
class Matrix
{
    private:
        int rows, cols;
        Array<Array<Type>*> m;
        // define m as an Array of Array pointers using the
        // template you defined above
    public:
        Matrix( int newRows, int newCols )
                : rows( newRows ), cols( newCols ), m( rows )
        {
            for (int i = 0; i < rows; i++ )
                m[i] = new Array < Type >( cols );
        }
        int numRows()
        {
            return rows;
        }
        int numCols()
        {
            return cols;
        }
        Array < Type > & operator [] ( int row )
        {
            return * m[row];
        }
        void print( ostream & out )
        {
            // write this one too, but use Array::operator<<
            for(int i=0; i < rows; ++i ) {
                out << m[i];
            }
        }

        friend ostream & operator << ( ostream & out, Matrix < Type > & m )
        {
            m.print( out );
            return out;
        }
};
