#include<stdio.h>
#include<conio.h>
void split(double d, int* int_part, double* frac_part)
{
  *int_part=int(d);
  if(*int_part>0)
  *frac_part=d-*int_part;
  else
  *frac_part=-(d-*int_part);
  printf(“Integer part: %d\n”,*int_part);
  printf(“Fractional part: %f”,*frac_part);
}
int main()
{
  double x,y;
  int n;
  printf(“Enter a floating point no.\n”);
  scanf(“%f”,&x);
  split(x,&y,&n);
  return(0);
}
