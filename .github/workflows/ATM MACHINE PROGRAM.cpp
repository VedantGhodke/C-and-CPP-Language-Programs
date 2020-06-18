#include <iostream>
#include <cmath>

void main_menu();

int main ()
{
         double check = 100,     //starting checking balance
                save = 100,      //starting savings balance
                withdraw,        //withdrawal amount
                deposit;         //deposit amount
         int option = 0,         //menu selection
               PIN = 0,          //Input PIN number
               selection = 0;    //deposit or withdrawal selection

         cout.setf (ios::fixed);
         cout.setf (ios::showpoint);
         cout.precision (2);

cout << "Enter PIN\n";
  for(int i =0; (PIN != 4321); ++i){    //Allows 3 tries
    if (i == 3){
      cout <<  "3 Invalid Inputs, dont make me shred your card!\n";
      return EXIT_SUCCESS;
    }
    cout << "Please Enter Your 4 Digit PIN\n> ";
    cin >> PIN;                 //Gets PIN

}

   main_menu();                  //main menu system

  while(option != 4){             //navigates through menu
    cout << "> ";               //4 exits program
     cin >> option;
   switch(option){
case 1:
        cout << "Choose The Account You Wish To\n"
       << "Make A Withdrawal.\n"
       << "[1]  Checking\n"   //withdrawal menu
       << "[2]  Savings\n"
       << "[3]  Cancel\n> ";
  cin >> selection;          //gets menu selection

    switch(selection){       //navigates through menu
      case 1:                //checking withdrawal
        cout << "[[[WITHDRAW]]]\n"
             << "Must Be A Multiple Of Rs.100/-\n>";
         cin >> withdraw;       //gets amount, checks for mult of 100
        while(fmod(withdraw,100)!=0){
          cout << "Not A Multiple Of Rs.100/-.Please try again!\n> ";
           cin >> withdraw;
        }
        if(withdraw > check)
        {  //overdraft protection
          cout << "Insufficient Funds In Account To\n"
               << "Withdraw Rs." << withdraw << endl << endl;
        }else
        {
        check -= withdraw;     //calculates new balance
        }
        break;
      case 2:                //savings withdrawal
          cout << "[[[WITHDRAW]]]\n";
          cout << "Must be a multiple Of Rs.100\n> ";
           cin >> withdraw;       //gets amount, checks for mult of 5
        while(fmod(withdraw,100)!=0){
          cout << "Not A Multiple Of Rs.100. Please try again\n> ";
           cin >> withdraw;
        }
        if(withdraw > save){       //wont let you overdraw
          cout << "Insufficient funds in the account\n"
        << "Withdraw Rs." << withdraw << endl << endl;
        }else{
        save -= withdraw;      //calclulates new balance
        }
        break;
      case 3:                //exits withdrawal menu
        break;
      default:               //allows more than one attempt
        cout << "Invalid option " << selection
             << " Try Again\n";
        cout << "Choose The Account You Wish To\n"
             << "Make A Withdrawal\n"
             << "[1]  Checking\n"
             << "[2]  Savings\n"
             << "[3]  Cancel\n> ";
        cin >> selection;

        break;
}                                                                                                     //problem # 1
case 2:
  cout << "Choose the account to\n"
       << "make a Deposit\n"
       << "[1]  Checking\n"   //deposit menu
       << "[2]  Savings\n"
       << "[3]  Cancel\n> ";
   cin >> selection;          //gets menu selection

    switch(selection){       //navigates through menu
      case 1:                //checking deposit
        cout << "[[[DEPOSIT]]]\n";
         cin >> deposit;
       check += deposit;     //calculates new balance
        break;
      case 2:                //savings deposit
        cout << "[[[DEPOSIT]]]\n> ";
         cin >> deposit;
        save += deposit;      //calculates new balance
        break;
      case 3:                //exits menu
        break;
      default:               //allows more than one attempt
        cout << "Invalid option " << selection
             << " Try Again\n";
        cout << "Choose The Account You Wish To\n"
             << "Make A Withdrawal\n"
             << "[1]  Checking\n"
             << "[2]  Savings\n"
             << "[3]  Cancel\n> ";
         cin >> selection;
         break;
}                                                                                                //problem #2
case 3:
        cout << "Checking Balance: $" << check << endl;
        cout << "Savings Balance: $" << save << endl << endl;

  main_menu();       //let them make another choice
        break;
case 4:                   //exits
        break;
      default:                  //allows retries
        cout << option << " Is not a valid "
             << "choice, please try again\n";
    }
  }
  return EXIT_SUCCESS;
}

//*****************************************************

void main_menu(){             //main menu
  cout << "Please select a number\n"
       << "for your desired action\n"
       << "[1]  Withdrawal\n"
       << "[2]  Deposit\n"
       << "[3]  Check Balances\n"
       << "[4]  Quit\n";
}
