#include<simplecpp>
main_program
{
int i,j;
char c;
cout<<"Enter any character that you desire to view "<<endl;
cin>>c;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
cout<<c<<'\t';
}
cout<<endl;
}
}

