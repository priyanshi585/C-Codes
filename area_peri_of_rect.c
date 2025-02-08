#include<stdio.h>
int main()
{
    float l , b , area , perimeter ;
    printf("Enter the lenght and breadth of rectangle: ");
    scanf("%f%f" , &l , &b);
    area = l*b ;
    perimeter = 2*(l+b);
    printf("Area of Rectangle : %.2f\n", area);
    printf("Perimter of Rectangle : %.2f\n" , perimeter);
    if(area>perimeter){
       printf("Area is greator than perimter.");
    }
    else{
        printf("Perimeter is greator than area.");
    }
    return 0;
}