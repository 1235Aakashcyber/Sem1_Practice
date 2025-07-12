#include<stdio.h>


float squareArea(float side);
float circleArea(float radius);
float recArea(float l, float b);
int main(){


    float side;
    float radius;
    float l;
    float b;
    char n;



     printf("Enter S,C,R to calculate square area, circle area or rectangle area respectively : ");
     scanf("%c", &n);
     if (n=='s' || n=='S'){
	printf("Area of Square is %f \n", squareArea(side));
     }

    else if(n=='c' || n=='C'){
       printf("Area of circle is %f \n", circleArea(radius));
    }
    else if(n=='r' || n=='R'){
      printf("Area of Rectangle is %f \n", recArea(l,b));
    }
    else {
	printf("Invalid Input :( ");
    }
return 0;
}

float squareArea(float side){
 printf("Enter side of square : ");
	scanf("%f", &side);
return side * side;
}

float circleArea(float radius){
    float pi=3.14;
     printf("Enter Radius : ");
        scanf("%f", &radius);
    return pi*radius*radius;
}

float recArea(float l, float b){
      printf("Enter side a : ");
        scanf("%f", &l);
        printf("Enter side b : ");
        scanf("%f", &b);
    return l*b;
}