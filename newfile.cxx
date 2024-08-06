#include <stdio.h>
int main()
{
    float r, area;
    printf("Enter the radius: \n" );
     scanf("%f", &r);
     area = 3.14 * r * r;
     printf("Area of the circle is %f squre meter \n", area);
    return 0;
}