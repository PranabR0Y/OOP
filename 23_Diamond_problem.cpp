#include<iostream>
using namespace std;
class person
{
    public:
    int age;
    person()
    {
        cout << "Person" << endl;
    }
};
class father: public person
{
    public:
    father()
    {
        cout << "father" << endl;
    }
};
class mother : public person
{
    public:
    mother()
    {
        cout << "mother" << endl;
    }
};
class child : public father, public mother
{
    public:
    child()
    {
        cout << "child" << endl;
    }
};
/* Diamond Problem (Multiple person Instances)

child inherits from both father and mother.
Both father and mother inherit from person.
This causes two separate copies of person inside child. */


int main()
{
    child obj;
    //obj.age = 10;  is ambiguous because there are two copies of age (one from father and one from mother).

    //obj.person::age = 59;
    /*  child has two different age variables (one from father, one from mother).
       obj.person::age = 59; is incorrect because child has two person bases.
    */
    obj.father::age = 59;
    obj.mother::age = 59;  

    /* Without virtual inheritance, we cannot directly set person::age from child because child 
    contains two separate copies of person—one from father and one from mother. */


    return 0;
}