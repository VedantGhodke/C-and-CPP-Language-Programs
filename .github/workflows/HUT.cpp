#include<simplecpp>
main_program
{
	turtleSim();
	repeat(4)                //Body of Hut starts here
		{
		forward(100);
		right(90);
		}                 // Body of Hut ends here
	left(60);                 // Ceiling of Hut starts here
	forward(100);
	right(120);
	forward(100);
	right(30);               // Ceiling of Hut ends here
	forward(100);
	right(90);
	forward(30);          // Door of Hut program starts here
	right(90);
	forward(70);
	left(90);
	forward(40);
	left(90);
	forward(70);           // Door of Hut program ends here

	wait(5);
}
