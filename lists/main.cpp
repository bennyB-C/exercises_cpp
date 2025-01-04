#include <iostream>
#include <list>
#include <vector>

using namespace std;

struct Person
{
    string name;
    int age;
    double salary;
};

struct Node 
{
    Node *next;
    Person per;
};

struct List
{
    Node *head;
    int length;
};

ostream & operator << (ostream &os, const Person &per)
{
    os << "Name     : " << per.name << endl;
    os << "Age      : " << per.age << endl;
    os << "Salary   : " << per.salary << endl;
    return os;
}

int main(int argc, char ** argv)
{
    cout << "Hello World" << endl;

    cout << "Now Im gonna create my own list" << endl;

    List list;

    list.head = nullptr;

    list.head = new Node;
    list.head->per.name = "Juan";
    list.head->per.age = 24;
    list.head->per.salary = 24000.232;

    cout << list.head->per << endl;

    return 0;
}