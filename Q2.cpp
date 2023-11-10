#include <iostream>

using namespace std;

int main()
{
   int n,repetation;
    cout<<"please enter a number"<<endl;
    cin>>n;

    for(int i=2;i<n;i++){

        if(n%i==0){

           repetation=1;
        }
    }

    if(repetation==1){
        cout<<" is not a primary number"<<endl;
    }
    else
        cout<<" is  a primary number"<<endl;


    return 0;
}
