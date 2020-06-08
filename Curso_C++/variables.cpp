#include <iostream>

using namespace std;

int main() {
	/*
    int  number = 5;
    
    cout << "Number is: " << number << endl;

    string text ="This is  a text";
    cout << text << endl;

    string input;
    cin >> input ;
    cout << endl << input <<endl;

    */

    char command;
    cin >> command;
    cout << "You enterd: " << command << endl;
    if (command == 't'){
        cout << "good" << endl;
    }
    else
    {
        cout << "bad"<< endl;
    }
    

	return 0;
}