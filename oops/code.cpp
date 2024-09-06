#include<bits/stdc++.h>
using namespace std;
class Student{
     string name;
       float cgpa;
    public:
    //    string name;
    //    float cgpa;

     void getpercentage(){
        cout << (cgpa * 10) << "% \n" ;      
    }
      //setter
    void setname(string nameval){
        name = nameval;
    }

    void setcgpa(float cgpaval){
        cgpa = cgpaval;
    }
      //getter
    string getname(){
        return name;
    }

    float getcgpa(){
         return cgpa;
    }
};

// class User{
//     int id; 
//     string name;
//     string passward;
//     string bio;

//     void deactivate(){
//         cout << "deleted account \n";
//     }

//     void editBio(string newBio){
//         bio = newBio;  
//     }
// };


int main() {
    Student s1;
    s1.setname ("shivani");
    s1.setcgpa (8.5);
    // s1.name="shivani";
    // s1.cgpa=9.0;
    // //Student s2;
    // cout << s1.name << endl;
    // cout << s1.cgpa << endl;
    // s1.getpercentage();
    // cout << sizeof(s1) << endl;
    cout << s1.getname()  << endl;
    cout << s1.getcgpa() << endl;     
    return 0;
}