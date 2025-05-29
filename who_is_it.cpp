#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int marks;
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        Student best;
        bool first = true;
        for (int j = 0; j < 3; j++) {
            Student s;
            cin >> s.id >> s.name >> s.section >> s.marks;
            if (first) {
                best = s;
                first = false;
            } else {
                if (s.marks > best.marks) {
                    best = s;
                } else if (s.marks == best.marks && s.id < best.id) {
                    best = s;
                }
            }
        }
        cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
    }

    return 0;
}
