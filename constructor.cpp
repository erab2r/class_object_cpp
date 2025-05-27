#include<bits/stdc++.h>
using namespace std;
class Student
{
   public :
   int roll;
   int cls;
   double gpa;
   Student(int r,int c,double g){
    roll = r;
    cls = c;
    gpa = g;
   }
};
int main()
{
    Student rakim(1,7,4.5);
    Student korim(2,7,3.5);
    
    cout << rakim.roll <<" " << rakim.cls << " " << rakim.gpa <<endl;
    cout << korim.roll <<" " << korim.cls << " " << korim.gpa <<endl;
    return 0;
}