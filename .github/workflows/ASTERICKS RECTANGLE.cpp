#include <simplecpp>
void output(int rows = 5, int columns = 10, char symbol = '*');
main_program
{

    int rows, columns;
    char symbol;
    cout << "How many rows and columns do you want and, with what symbol?" <<"\n";
    cin >> rows >> columns >> symbol;
    output(rows, columns, symbol);
}

void output(int rows, int columns, char symbol)
 {
    for (int y = 1; y <= columns; y++)
    {
        for (int x = 1; x <= rows; x++)
        {
            cout << symbol;
        }
        cout << "\n";
    }
}
