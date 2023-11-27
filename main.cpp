#include <iostream>

using namespace std;

int main(){
    double num_1,num_2;
    cout<<"Enter the first number"<<endl;
    cin>>num_1;
    cout<<"Enter the second number"<<endl;
    cin>>num_2;
    char c;
    cout<<"choose the operation"<<endl;
    cin>>c;
    switch(c){
        case '+':
        cout<<num_1+num_2;
        break;
        case '-':
        cout<<num_1-num_2;
        break;
        case '*':
        cout<<num_1*num_2;
        break;
        case '/':
            if(num_2!=0)
                cout<<num_1/num_2;
            else
                cout<<"undefined";
        break;


    }



    return 0;
}
