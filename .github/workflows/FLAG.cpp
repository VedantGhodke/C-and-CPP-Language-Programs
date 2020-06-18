#include<simplecpp>
main_program
{
initCanvas("VEDANT",1000,1000);
Rectangle r1(500,500,200,50);
r1.setColor(COLOR("red"));
r1.setFill(true);
Rectangle r2(500,550,200,50);
r2.setColor(COLOR("white"));
r2.setFill(true);
Circle c1(500,550,25);
c1.setColor(COLOR("blue"));
c1.setFill(false);
Rectangle r3(500,600,200,50);
r3.setColor(COLOR("green"));
r3.setFill(true);
repeat(100)
{
r1.move(0,-5);
r2.move(0,-5);
r3.move(0,-5);
c1.move(0,-5);
wait(0.1);
}
}

