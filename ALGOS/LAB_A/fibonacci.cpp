#include <iostream>
using namespace std;

// C++ program for counting Fibonacci sequence  Fn =  F(n-1) + F(n-2)
int main ()
{
string repeat = "y"; // declare and assign value "y" to the variable repeat, to start loop, which is used for repeated execution
long long int a;     // declare variable a (F0)
long long int b;     // declare variable b (F1)
int n;               // n variable is number of terms in Fibonacci sequence
int num_terms;       // declare "num_terms" variable, which  is used for storing initial "n", used  in result print

while (repeat == "y") {
    cout << "Hi, this is C++ program for counting Fibonacci sequence  Fn =  F(n-1) + F(n-2)" << endl;
    cout << "Please enter the natural number of terms in Fibonacci sequence (n): ";
    cin >> n;

        // check if the correct natural number was inputted
        if ((n > 0) && (n <= 90));
        else {
            while ((n <= 0) || (n > 90)) {cout << "You have entered incorrect number, please enter the natural number (1-90) of terms in Fibonacci sequence (n): ";
            cin >> n;
            }
        }
    num_terms = n;
    a = 0;
    b = 1;
    // loop is used for counting Fn
    while (n != 0) {
      a = a+b;
      b = a-b;
      n = n-1;
    }

    // print the result
    cout << "If number of terms (n) = " << num_terms << "  -> Fibonacci sequence number (F" << num_terms << ") = " << a << endl;

    //choose to continue or exit program
    cout << "Press 'y' if you want to continue, any other letter for exit: ";
    cin  >> repeat;
    cout << " " <<endl;
}
    return 0;

}
