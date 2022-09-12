#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter amount :";
    cin >> n;

    int rs100 = n / 100;
    int rs50 = (n - (rs100)*100) / 50;
    int rs20 = (n - (rs100 * 100) - (rs50 * 50)) / 20;
    int rs1 = (n - (rs100 * 100) - (rs50 * 50) - (rs20 * 20)) / 1;

    cout << "100 rs notes: " << rs100 << endl;
    cout << "50rs notes: " << rs50 << endl;
    cout << "20rs " << rs20 << endl;
    cout << "1rs " << rs1 << endl;

    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    int Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 Rupee notes required are=" << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "No of 50 Rupee notes required are=" << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "No of 20 Rupee notes required are=" << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "No of 1 Rupee notes required are=" << Rs1 << endl;
    }
}
*/