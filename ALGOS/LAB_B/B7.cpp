#include <iostream>
using namespace std;

// Check function: checks if inputted number is in required range
int check(){
    cout << "Hi, this is c++ program for finding all rational numbers in range [0,1] for which denominator doesn't exceed n" <<endl;
    int n;
    cout << "Please enter the natural number n<10:";
    cin >> n;
    // check if the natural number <10 was inputted
    if ((n<10) && (n>0));
    else {
            while ((n<1) || (n>9)) {
            cout << "You have entered incorrect number, please enter the natural number n<10:";
            cin >> n;
            }
        }
    return n;
}

//Rational function: calculates and prints rational numbers in range [0,1] for which denominator doesn't exceed n
void rational(int n){
    // loop for numerator
    for (int numerator=1; numerator<=n; numerator++){
        // loop for denominator
        for (int denominator=1; denominator<=n; denominator++){
            // statement for numerator =1
            if ((denominator > numerator) && (numerator==1)) {
                float rational;
                //rational = float(numerator)/denominator; // if do not want to use fractional number
                // cout <<rational<<endl;
                cout <<numerator <<"/"<<denominator<<endl;
            }
            // statement for numerator > 1, excluding duplicates
            if ((denominator > numerator) && (numerator>1) && (denominator%numerator != 0)) {
                float rational;
                //rational = float(numerator)/denominator; // if do not want to use fractional number
                // cout <<rational<<endl;
                cout <<numerator <<"/"<<denominator<<endl;
            }
        }
    }
}

int main ()
{
    char repeat = 'y';
    while (repeat == 'y') {
        int k;
        k = check();
        // print the result
        cout << "Rational numbers in range [0,1]:" <<endl;
        rational(k);
        //choose to continue or exit program
        cout << "Press 'y' if you want to continue, any other letter for exit: ";
        cin  >> repeat;
        cout << " " <<endl;
    }
    return 0;

}
