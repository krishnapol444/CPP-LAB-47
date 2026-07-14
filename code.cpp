#include<iostream>
int main()
{
    float length,breadth,area,perimeter;
    printf("Enter Length:");
    scanf("%f",&length);
    printf("Enter Breadth:");
    scanf("%f",&breadth);
    area = length*breadth;
    perimeter = 2*(length+breadth);
    printf("Area Of Rectangle=%.2f\n",area);
    printf("Perimeter Of Rectangle=%.2f\n",perimeter);
    return 0;
}