    #include<simplecpp>
    #include<stdlib.h>


main_program
{
int n1, n2,range,swap;
cout<<"Enter lower limit";
cin>>n1;
cout<<"Enter higher limit";
cin>>n2;
if(n1<=n2)
{
if((low%2)==1)
{
low=low+1;
}
range=((n2-n1)/2)+1;
repeat(range)
{
cout<<low;
cout<<"\t";
low=low+2;
}
}

else
{
if(n1==n2)
{
if((n1%2)==1)
{
cout<<""
