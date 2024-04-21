#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;


int main(){

 

while(1){
string password ; 
string charactor = "ABCDEFGHIJKLMNOPQRSTUVWXYabcdefghijklmnopqrstuvwxyz0123456789!@#$%&*";
int num = charactor.length(); 
srand(static_cast<unsigned>(time(nullptr)));

int lenth; 
cout<<"enter the lenth of password:";
cin>>lenth;
if(lenth<=0){
    cout<<"Please enter valid value "<<endl;
    return 1;
}
else{
    for(int i=0 ; i< lenth;i++){
        password += charactor[rand() % num];
    }
    cout<<password<<endl;
}
}
return 0;
}