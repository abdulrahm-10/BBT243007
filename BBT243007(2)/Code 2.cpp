#include<iostream>

using namespace std;

int main()
{
    int M1,M2,Divide;
    cout<<"Super Division = ";
    cin>>M1;
    cout<<"Enter Value of M2 = ";
    cin>>M2;
    Divide= M1/M2;
    cout<<"Your output is "<<Divide<<"\n";
    if(Divide>30){
        cout<<"Excellent";
    }
    else{
        cout<<"Bad";
        
    }
    return 0;
}
