#include <iostream>
using namespace std;

int main() {
    int n;
    float credit, grade, totalCredits = 0, totalPoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;
        cout << "Enter Grade Point: ";
        cin >> grade;
        cout << "Enter Credit Hours: ";
        cin >> credit;

        totalCredits += credit;
        totalPoints += grade * credit;
    }

    cout << "\nCGPA = " << totalPoints / totalCredits << endl;

    return 0;
}