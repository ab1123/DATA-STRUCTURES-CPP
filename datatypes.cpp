#include<iostream>
using namespace std;//this specifies that the output should be standar. if not mentioned we have to use print statement as std::cout
int main(){
    int a;//declaration
    a=12;//Intialisation
    cout<<"size of int"<<sizeof(a)<<endl;
    float b;
    cout<<"size of float"<<sizeof(b)<<endl;
    char c;
    cout<<"Size of character"<<sizeof(c)<<endl;
    bool d;
    cout<<"Size of boolean"<<sizeof(c)<<endl;
    return(0);


}