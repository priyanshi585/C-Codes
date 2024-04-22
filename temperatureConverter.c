Question: Write a C program to convert celcius into fehrenite and vice versa.
Code:
#include <stdio.h>
int main() {
    
  float temp, fehr;
  printf("Enter Temperature in Centigrate\n");
  scanf("%f",&temp);
  fehr= (1.8*temp)+32;
  printf("Temperature in Fehrenite= %f\n",fehr);
  return 0;
}


Output -
Enter Temperature in Centigrate
16
Temperature in Fehrenite= 60.799999
