#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id, year;
    char name[20];

    Student () {
        id = 0; year = 0;
        //memset (array_name, 0, sizeof(array_name));
        memset (name, 0, sizeof(name));
    }

}student1;

void printing(Student student) {
    cout << "Name: " << student.name << "\n";
    cout << "Year: " << student.year << "\n";
    cout << "Id: " << student.id << "\n";
}

int main() {

    printing(student1);

    Student student2;

    printing(student2);
    return 0;
}