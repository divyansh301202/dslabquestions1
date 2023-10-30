#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> marks = {
        {86, 78, 75, 85, 23},
        {34, 85, 43, 78, 88},
        {89, 75, 80, 65, 68},
        {62, 85, 95, 90, 56}
    };

    int numStudents = marks.size();
    int numSubjects = marks[0].size();

    vector<int> studentTotals(numStudents, 0);
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numSubjects; j++) {
            studentTotals[i] += marks[i][j];
        }
    }

    vector<double> subjectAverages(numSubjects, 0.0);
    for (int j = 0; j < numSubjects; j++) {
        for (int i = 0; i < numStudents; i++) {
            subjectAverages[j] += marks[i][j];
        }
        subjectAverages[j] /= numStudents;
    }

    for (int i = 0; i < numStudents; i++) {
        cout << "Total marks of Student " << i + 1 << ": " << studentTotals[i] << endl;
    }

    for (int j = 0; j < numSubjects; j++) {
        cout << "Average marks in Subject " << j + 1 << ": " << subjectAverages[j] << endl;
    }

    return 0;
}
