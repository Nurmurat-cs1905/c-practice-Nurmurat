#include <iostream>
using namespace std;
int main() {
    int count=0,a,guess;
    a=1+rand()%100;
    while (count<3){
        cin>>guess;
        if (guess==a){
            return 0;
        }
        if(count==2)
            break;
        if(guess<a) {
            cout<<"big number"<<endl;
        }
        else if(guess>a) {
            cout<<"small number"<<endl;
        }
        count++;
    }
    cout<<"Number is:"<<a<<endl;
    return 0;
}
