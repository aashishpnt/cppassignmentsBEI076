#include <iostream>

using namespace std;

class course
{
public:
    string name;
    void get_name()
    {
        cout<<"enter name:";
        cin>> name;
    }
    void display_name()
    {
        cout<<"Name of student:"<<name<<endl;
    }
    void display_course()
    {
        cout<<"Course has not been selected"<<endl;
    }
};
class science:public course
{
public:
    void display_course()
    {
        cout<<"Selected course:science"<<endl;
    }
};
class mathematics:public course
{
public:
    void display_course()
    {
        cout<<"Selected course:mathematics"<<endl;
    }
};
class engineering:public course
{
public:
    void display_course()
    {
        cout<<"Selected course:engineering"<<endl;
    }
};
class physics:public science
{
public:
    void display_course()
    {
        cout<<"Selected sub-course:physics"<<endl;
    }
};
class chemistry:public science
{
public:
    void display_course()
    {
        cout<<"Selected sub-course:chemistry"<<endl;
    }
};
int main()
{
    physics c;
    c.get_name();
    c.course::display_course();
    c.display_name();
    c.science::display_course();
    c.display_course();
    return 0;
}

