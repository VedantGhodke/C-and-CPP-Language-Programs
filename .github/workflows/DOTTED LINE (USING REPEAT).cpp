#include<simplecpp>

main_program
{
    turtleSim();
    repeat(3)
        {
         forward(50);
         wait(3);
         penUp();
         wait(3);
         forward(50);
         wait(3);
         penDown();
         wait(3);
        }
wait(20);
}
