

#include <stdio.h>

int main()
{

  float a, b, c;

  printf("Enter three numbers here to find the maximum number: \n>>>");

  scanf("%f %f %f", &a, &b, &c);

  printf("Number 1: %f\nNumber 2: %f\nNumber 3: %f\n>>>", a, b, c);

  if (a > b)
  {

    if (a > c)
    {

      printf("Number %f is the biggest from all three", a);
    }
    else
    {

      printf("Number %f is the biggest from all three", c);
    }
  }
  else
  {

    if (b > c)
    {

      printf("Number %f is the biggest from all three", b);
    }
    else
    {

      printf("Number %f is the biggest from all three", c);
    }
  }

  return 0;
}