#include <iostream>
using namespace std;

// void sayhello(){
//     cout<<"hello :)\n";
// }

// void assistant(){
//     sayhello();
//     cout<<"completed\n";
// }

// int main(){
//     assistant();
//     return 0;
// }

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int diff(int a, int b){
    int diff = a - b;
    return diff;
}


int main(){
   int s = sum(7,8);
   cout<< "sum = "<< s << endl;
   int f = diff(7,8);
   cout<< "diff = "<< f << endl;
    return 0;
}
