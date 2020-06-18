#include<simplecpp>

main_program
{
int a,b;
cout<<"Enter the side of the polygon";
cin>>a;
cout<<"Enter the number of sides";
cin>>b;
turtleSim();
repeat(b)
{
forward(a);
wait(1);
right(360/b);
wait(1);
}
wait(20);
}
