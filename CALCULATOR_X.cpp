#include <iostream>
using namespace std;

int main()
{
    // cout<<"Hello world!";
    char op;
    int num, sum;
    cout << "***CALCULATOR X***" << endl;
    cout << "Enter a number :";
    cin >> sum;
    bool exit = true;
    while (exit)
    {
        cout << "***CALCULATOR X***" << endl;
        cout << "Use + for addition, - for subtraction, * multiplication, / for division" << endl;
        cout << "Choose an operation :";
        cin >> op;
        if (op == '+')
        {
            cout << "***CALCULATOR X***" << endl;
            cout << "Enter a number to add :";
            cin >> num;
            sum += num;
            cout << "Your sum is :\a" << sum << endl;
        }
        else if (op == '-')
        {
            cout << "***CALCULATOR X***" << endl;
            cout << "Enter a number to subtraction :";
            cin >> num;
            sum -= num;
            cout << "Your sum is :\a" << sum << endl;
        }
        else if (op == '*')
        {
            cout << "***CALCULATOR X***" << endl;
            /* code */
            cout << "Enter a number to multiply :";
            cin >> num;
            sum *= num;
            cout << "Your sum is :\a" << sum << endl;
        }
        else if (op == '/')
        {
            cout << "***CALCULATOR X***" << endl;
            /* code */
            cout << "Enter a number to divide :";
            cin >> num;
            sum /= num;
            cout << "Your sum is :\a" << sum << endl;
        }
        cout << "If you want to exit press Y. For continue you can press any key." << endl;
        cin >> op;
        if (op == 'Y')
        {
            cout << "Exiting...";
            exit = false;
        }
    }

    return 0;
}

/*
/// @brief
/// @return
int toplama( ){

}
*/
/*
#include <iostream>
using namespace std;

void printHeader() {
    cout << "***CALCULATOR X***" << endl;
}

int main() {
    int sum = 0; // Başlangıç değeri sıfır
    int num;
    char op;
    printHeader(); // Başlık yazdır
    cout << "Enter a number: ";
    cin >> sum;

    bool exit = true;
    while (exit) {
        printHeader();
        cout << "Use + for addition, - for subtraction, * for multiplication, / for division" << endl;
        cout << "Choose an operation: ";
        cin >> op;

        switch (op) {
            case '+':
                cout << "Enter a number to add: ";
                cin >> num;
                sum += num;
                cout << "After performing " << op << " operation, your sum is: " << sum << endl;
                break;
            case '-':
                cout << "Enter a number to subtract: ";
                cin >> num;
                sum -= num;
                cout << "After performing " << op << " operation, your sum is: " << sum << endl;
                break;
            case '*':
                cout << "Enter a number to multiply: ";
                cin >> num;
                sum *= num;
                cout << "After performing " << op << " operation, your sum is: " << sum << endl;
                break;
            case '/':
                cout << "Enter a number to divide: ";
                cin >> num;
                if (num == 0) {
                    cout << "Error! Division by zero is not allowed." << endl;
                } else {
                    sum /= num;
                    cout << "After performing " << op << " operation, your sum is: " << sum << endl;
                }
                break;
            default:
                cout << "Invalid operation!" << endl;
        }

        cout << "If you want to exit press Y. For continue press any key: ";
        char exitChoice;
        cin >> exitChoice;
        if (exitChoice == 'Y' || exitChoice == 'y') {
            cout << "Exiting..." << endl;
            exit = false;
        }
    }

    return 0;
}
*/