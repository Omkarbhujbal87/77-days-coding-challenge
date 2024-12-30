#include<stdio.h>
int main()
{ //implicit type casting
    float a=4.24;
    int b=3;
    float add=a+b;
    printf("%f\n",add);
    //explicit type casting 
    int num=(int)a;
    printf("%d\n",num);
    //char
    char ch=65;
    printf("%c\n",ch);
    printf("%d\n",ch);
}