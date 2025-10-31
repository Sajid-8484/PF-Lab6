#include <iostream>
using namespace std;
int main() {
const string password="Pthon123";
string ispassword;
bool correct=false;
while(true){
    cout<<"Enter Password: ";
    cin>>ispassword;
    if(ispassword==password){
        cout<<"Correct Password"<<endl;
        correct=false;
        break;
    }
    else{
        cout<<"Invalid Password"<<endl;
        cout<<"try agin"<<endl;
    }
}
    return 0;
}