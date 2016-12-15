#include<iostream>
using namespace std;
int main(){
int c;
cout<<"Enter a choice:"<<endl;
cin>>c;

if(c>=1 && c<=5){
switch(c){
case 1:
    cout<<"Coke"<<endl;
    break;
case 2:
    cout<<"Water"<<endl;
    break;
case 3:
    cout<<"Sprite"<<endl;
    break;
case 4:
    cout<<"7up"<<endl;
    break;
case 5:
    cout<<"Coffee"<<endl;
}
}
else
    cout<<"Error. choice was not valid, here is your money back."<<endl;
return 0;
}

