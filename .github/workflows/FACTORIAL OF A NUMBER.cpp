#include<simplecpp>

main_program
{
int fact=1,n;
cout<<"Enter your number";
cin>>n;
repeat(n-1)
{
fact=fact*n;
n=n-1;
}
cout<<"The factorial of the entered number is ";
cout<<fact;
}
