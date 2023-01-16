#include<stdio.h>
int circle(int); //declaration
int main()
{
    int r,k;
    printf("Enter radius");
    scanf("%d",&r);
    circle(r);
}

int circle(int r)   //definition
{
    float d,c,ar;
    ar=3.14*r*r;
    d=2*r;
    c=2*3.14*r;
    printf("Diameter %f\nCircumference %f\nArea %f",d,c,ar);
}