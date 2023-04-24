#include<stdio.h>

void Function (int x,int y);

 int x=1;

 int y=2;

int main()

{

    Function(x,y) ;  

    printf("x=%d,y=%d\n", x,y);

    return 0;

}

void Function( int x,int y  )

{

    x=2;

    y=1;

}
