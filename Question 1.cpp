#include <iostream>

using namespace std;


int factoral(int number){
    if (number<=0){
        return 1;
    }else{
        return number * factoral(number-1);
    }


}

int main()
{


 int number ;
 cout <<"please enter any number :";
 cin>>number;



 cout <<"the factorial of number ="<<factoral(number);






    return 0;
}
