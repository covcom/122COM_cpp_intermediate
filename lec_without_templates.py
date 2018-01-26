def add( a, b ):
    return a + b;

def main():
    i = add( -1, 2 )
    f = add( 1.1, 2.2 )
    s = add( "Monty", "Python" )
    l = add( [1,2,3], [4,5,6] )
    b = add( True, False )

    print( i, f, s, l, b )

if __name__ == '__main__':
    main()