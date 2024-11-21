#include <iostream>
#include <cmath>
using namespace std;

int main() {
       
    void clearInputBuffer(); {
        cin.clear();
    }
    cout << "Hi, this is a calculator" << endl;
    int choice;
    bool cont = true;

    do {
        cout << endl << "Entrance:(1) " << endl;
        
        cout << "Exit(2) " << endl;
        
        cout << "Select an option: ";
        
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Logging in is in progress " << endl; break;
        case 2:
            cout << "Exiting the program " << endl; break;
        default:
            cout << "Wrong choice. Try again." << endl;
        }
    } while (choice != 1);

    double num1;
    double num2;
    double res;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    char math;
    cout << "Lead the character(+,-,*,/,sqrt,^,sin, cos, tan): " << endl;
    cin >> math;
    if (math == 's') { // Квадратный корень
        if (num1 >= 0) {
            cout << "res: " << sqrt(num1) << endl;
        }
        else {
            cout << "Error: It is impossible to calculate the square root!" << endl;
        }
    }
    else if (math == 's') { // Синус
        cout << "res: " << sin(num1) << endl;
    }
    else if (math == 'c') { // Косинус
        cout << "res: " << cos(num1) << endl;
    }
    else if (math == 't') { // Тангенс
        cout << "res: " << tan(num1) << endl;
    }
    else {
        cout << "Enter the second number: " << endl;
        cin >> num2;
    }
        
        switch (math) {
        
      case '+': res = num1 + num2; break;
        
      case '-': res = num1 - num2; break;
        
      case '*': res = num1 * num2; break;
        
      case '/': res = num1 / num2; break;
       
      case '^': res = pow(num1,num2); break;
            break;
}
       if (res / 2 == 2) {
            cout << "even" << endl;
}
       else {
            cout << "not even " << endl;
}
       if (res < 0) {
            cout << "negative" << endl;
}
       else {
            cout << "positive" << endl;
}
            cout << "res: " << res << endl;
       
}

