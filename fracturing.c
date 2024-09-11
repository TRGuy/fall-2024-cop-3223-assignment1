#include <stdio.h>
#include <math.h>
#define PI 3.14159
//asume the shape of circle for all calculations

double calculateDistance(double x, double y, double a, double b){
    printf("– Point #1 entered: x1 = %.2lf ; y1= %.2lf \n",x,y);
    printf("– Point #2 entered: x2 = %.2lf ; y2= %.2lf \n",a,b);
    double distance=sqrt(pow((a-x),2)+pow((b-y),2));
    printf("– The distance between the two points is %.2lf \n",distance);
    return distance;
}

double calculatePerimeter(double x, double y, double a, double b, double d){
    printf("– Point #1 entered: x1 = %.2lf ; y1= %.2lf \n",x,y);
    printf("– Point #2 entered: x2 = %.2lf ; y2= %.2lf \n",a,b);
    double circumfrence=PI*d;
    printf("– The perimeter of the city encompassed by your request is %.2lf \n",circumfrence);
    return 2.0;
}
double calculateArea(double x, double y, double a, double b, double d){
    printf("– Point #1 entered: x1 = %.2lf ; y1= %.2lf \n",x,y);
    printf("– Point #2 entered: x2 = %.2lf ; y2= %.2lf \n",a,b);
    double area=PI*pow(d/2,2);
    printf("– The area of the city encompassed by your request is %.2lf \n",area);
    return 1.0;
}

double askforuserinput(){
    double input=0;
    scanf("%lf",&input);
    return input;
}
int main(int argc,char **argv)
{
    double x=0;
    double y=0;
    double a=0;
    double b=0;
    scanf("%lf%lf%lf%lf",&x,&y,&a,&b);
    double d=calculateDistance(x,y,a,b);
    calculatePerimeter(x,y,a,b,d);
    calculateArea(x,y,a,b,d);
    calculateWidth(x,y,a,b,d);
    askforuserinput();
    return 0;
}