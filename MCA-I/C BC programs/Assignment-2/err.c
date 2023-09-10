#include<stdio.h>
#define CUBE(X) (X)*(X)*(X)
#define SQ(X) (X)*(X)

int main()
{
    double Int,x,_x1,y3z;  //2xb,x-y--->var names can not start with _ or numbers
    int Float,a,b,c,d; //pa@b,qa.b,char--->var names can not contain special charecters or reserved keywords which is char in this case
    char u,_2v;//int,w=t---->int is a reserved keyword and also in w=t,t is not initalised in the program;

    a=2,b=3;
    a+b;
    c=a+b;
    // a+b=1; remove it
    b-a==c;
    // d=w; read the comments above
    a=CUBE(d);
    b=SQ(d);
    u=d+62;
    c=u-1;
    u='y';
    // _2v=z;  remove it
    // y3z=CUBE(c); remove it
    x=SQ(c);
    _x1=SQ(c)*2;
    c=x+u;
    return 0;
}
