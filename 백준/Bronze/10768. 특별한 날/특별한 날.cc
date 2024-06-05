#include <iostream>
using namespace std;
int main(){
    int m, d;
    cin>>m>>d;
    if (m < 2)
        cout<<"Before";
    else if (m == 2){
        if (d < 18)
            cout<<"Before";
        else if (d > 18)
            cout<<"After";
        else
            cout<<"Special";
    }
    else
        cout<<"After";
    return 0;
}