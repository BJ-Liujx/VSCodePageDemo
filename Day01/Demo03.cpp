#include <iostream>

using namespace std;

int main()
{
    int amount;
    cout << "How many carrots do you have ?" << endl;
    cin >> amount;
    cout << "Here are two more " << endl;
    amount = amount + 2;
    cout << "Now you Have "<< amount << " carrots "; 
    return 0;
}
