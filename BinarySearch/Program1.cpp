#include <iostream>
using namespace std;

class Student {
    public:
        Student(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void printDetails() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

        void updateName(string name) {
            this->name = name;
        }

        void updateAge(int age) {
            this->age = age;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

    private:
        string name;
        int age;
};

int main() {
    Student s1("Ali", 20);
    s1.printDetails();
    return 0;
}