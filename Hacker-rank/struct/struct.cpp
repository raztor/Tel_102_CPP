//
// Created by raztor on 12-10-2022.
//

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using namespace std;

struct Student{
    int age;
    char first_name[51];
    char last_name[51];
    int standard;
};
int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}