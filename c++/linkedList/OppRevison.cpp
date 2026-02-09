#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string n,int rno,float marks){
        this->name=n;
        this->rno=rno;
        this->marks=marks;
    }
};
void change(Student *s){
    s->name="Piyush";

}
int main(){
    Student s("Harsh",76,92.6);
    Student* s= new Student("Raghav",98,90.5);
    Student* ptr=&s;
    cout<<(*ptr).name<<endl;
    (*ptr).name="Piyush";    //ptr->name === (*ptr).name
    cout<<(*ptr).name<<endl;
    ptr->name="Mohit";
    ptr->rno=98;





    // cout<<s.name<<endl;
    // change(s);
    // cout<<s.name<<endl;

}