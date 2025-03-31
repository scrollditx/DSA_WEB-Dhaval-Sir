#include <iostream>
using namespace std;

int main()
{
    int marks;
    string msg;

    cout << "Enter your marks (0-100)";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade A++" << endl;
        msg = "Excellent work!";
    }

    else if (marks >= 85)
    {
        cout << "Grade A+" << endl;
        msg = "Great Job!";
    }

    else if (marks >= 80)
    {
        cout << "Grade A" << endl;
        msg = "Good Job!";
    }

    else if (marks >= 75)
    {
        cout << "Grade B++" << endl;
        msg = "Nice Job!";
    }

    else if (marks >= 70)
    {
        cout << "Grade B+" << endl;
        msg = "Good!";
    }

    else if (marks >= 65)
    {
        cout << "Grade B" << endl;
        msg = "Keep It Up!";
    }

    else if (marks >= 60)
    {
        cout << "Grade C+" << endl;
        msg = "Decent!";
    }

    else if (marks >= 50)
    {
        cout << "Grade C" << endl;
        msg = "You made it!";
    }

    else if (marks >= 40)
    {
        cout << "Grade D" << endl;
        msg = "You can do better!";
    }

    else if (marks >= 25)
    {
        cout << "Grade E" << endl;
        msg = "Not Great!";
    }

    else
    {
        cout << "Grade F" << endl;
        msg = "Unfortunately, you failed. Let's review the material and improve!";
    }

    cout << msg << endl;

    return 0;
}