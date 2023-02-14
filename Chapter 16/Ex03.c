#include<stdio.h>
#include<math.h>
#define DGE_TO_RAD ((4*atan(1))/180)

struct polar
{
    double r,a;
}vector1={.r=1,.a=90};

struct cartesian
{
    double x,y;
}vector2;

struct cartesian convert(struct polar v);

int main(void)
{
    vector2=convert(vector1);
    printf("Polar coordinate system: (%.2f, %.2f)\n",vector1.r,vector1.a);
    printf("Cartesian coordinate system: (%.2f, %.2f)\n",vector2.x,vector2.y);

    return 0;
}
struct cartesian convert(struct polar v)
{
    struct cartesian temp;

    temp.x=v.r*cos(v.a*DGE_TO_RAD);
    temp.y=v.r*sin(v.a*DGE_TO_RAD);

    return temp;
}