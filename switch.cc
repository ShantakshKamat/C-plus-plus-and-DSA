/*#include <iostream>
using namespace std;
int main()
{

    char ch = 'b';

    switch (ch)
    {
    case 'a':
        cout << "apple";
        break;
    case 'b':
        cout << "ball";
        break;

    case 'd':
        cout << "dog";
        break;

    default:
        break;
    }

    return 0;
}

*/

// default  is not mandatory
// float and string not allowed in switch
// nested switch is possible;

// how to get a switch case out of infinite loop ??

#include <iostream>
using namespace std;
int main()
{

    int id;
    int n;
    cout << "enter num of studs:";
    cin >> n;
    cout << "Enter id: ";
    cin >> id;

    while (n != 0)
    {
        switch (id)
        {
        case 1:
            cout << "Ram";
            break;

        case 2:
            cout << "Tom";
            continue;

        case 3:
            cout << "Shyam";
            break;

        default:
            break;
        }
        exit(0);
    }

    return 0;
}

/*
1) HOW WILL YOU EXIT IF YOU PUT SWITCH CASE INSIDE INFINITE LOOP AND WHEN YOU CAN'T USE SWITCH STATEMENT?

ans: put a exit(0) at the end of switch statement

*/

/*
2) WHY WE CAN'T USE CONTINUE STATEMENT IN CASE OF SWITCH CASE?

ANS: CONTINUE CAN'T BE USED IN CASE OF SWITCH CASE BECAUSE AS THE CASE CONSTANT MATCHES WITH THE USERS INPUT THE FLOW WILL COME DOWN AND TRY TO EXECUTE BUT BECAUSE OF CONTINUE IT WILL SKIP THAT PART AND ITERATION WILL GO ON AND ON.
THAT'S WHY WE USE BREAK , TO STOP  AT THE POINT ONCE WE EXUCUTE OUR PART.
*/