#include<iostream>
using namespace std;
int main()
{
	int choice;
    int i, n, range1, range2;
    bool isPrime = true;
	cout << "1.Finding Prime Numbers\n";
	cout << "2.Checking Prime Numbers\n";
	cout << "Enter Your Choice: ";
	cin >> choice;

	if (choice == 1)
	{
        cout << "Enter range:\n";
        cout << "1st number: ";
        cin >> range1;
        cout << "2nd number: ";
        cin >> range2;

        cout << "Prime numbers in the range " << range1 << " to " << range2 << " are: ";
        for (i = range1; i <= range2; i++) {
            if (i <= 1)
                continue;

            isPrime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
                cout << i << " ";
        } 
        cout << endl;
	}

	else if (choice == 2)
	{
        cout << "Enter a number: ";
        cin >> n;

        isPrime = true;
        if (n <= 1)
            isPrime = false;
        else {
            for (int j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
           if (isPrime)
            cout << n << " is a prime number." << endl;
           else
            cout << n << " is not a prime number." << endl;
    }
    	else
	{
		cout << "Invalid Input";
	}
    return 0;
}