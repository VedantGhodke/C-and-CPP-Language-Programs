#include<simplecpp>

main_program
{
int n,s,i;
s=0;
i=1;
cout<<"Enter the maximum number ";
cin>>n;
repeat(n)
{
s=s+i;
i=i+1;
}
cout<<"The sum of the entered numbers is "<<s;
}
