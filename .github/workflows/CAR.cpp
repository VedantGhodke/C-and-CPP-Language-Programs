#include<simplecpp>

main_program
{
initCanvas("VEDANT",1000,1000);
Rectangle r1(200,200,100,50);
r1.setColor(COLOR("blue"));
r1.setFill(true);
Circle c1(160,250,24);
c1.setColor(COLOR("black"));
c1.setFill(true);
Circle c2(240,250,24);
c2.setColor(COLOR("black"));
c2.setFill(true);
repeat(90)
{
r1.move(5,0);
c1.move(5,0);
c2.move(5,0);
wait(0.1);
}
}
