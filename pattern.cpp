#include<iostream>
using namespace std;

//simple pattern----------

int main() {
    int n=4  ;
    //outer loop
    for(int i=1; i<=n; i++) {
        int val = i;
        //inner loop 
        for(int j=1; j<=n ; j++) {
            //work done
            cout<< val  << " ";
        }
        cout<< endl;
    }
    return 0; 
    }

//star pattern-----------

int main() {
int n = 8  ;

for(int i=1; i<=n ; i++){

    for(int j=1; j<=i ; j++){

        cout<<"&"<<" ";
    }
        cout<<endl;
       
    }
     return 0;
}

//inverted star pattern-----------
int main()
{
    int n = 9 ;
     for( int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i+1); j++)
        {
             cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}

half pyramid

int main(){

    int n=6 ;
    for( int i=1; i<=n; i++){
          for(int j=1; j<=i; j++){
            cout<<j<<" ";
          }
          cout<<endl;
    }
    return 0;
}

//Character pyramid----------

int main(){
    int n=5;
    char ch = 'A';
    for(int i=0; i<=n ; i++){
        for(int j=1 ; j<=i; j++){
            cout<<ch++<<" ";
            
        }
        cout<< endl;
    }

    return 0;

}

// hollow rectangle

int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        cout<<"*";//first
        for( int j=1; j<=n-1; j++){
            if(i ==1 || i ==n){
                cout<<"*";

                }else{
                    cout<<" ";
                }         
        }
         cout <<"*" << endl;//last
    }
    return 0;
}

//inverted rotated 

int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i;j++){
        cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
        return 0;
}

//floyd trinagle

int main(){
    int n = 6;
    int num = 1;
    for(int i = 1;i<=n;i++){
      for(int j=1; j<=i; j++){
        cout<< num++ <<" ";
      }
      cout << endl;
    }
    return ;
}
0