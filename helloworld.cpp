#include<iostream>
using namespace std;

void a(int b);

int main(){
    int i=1;
    while (i<10)
    {
        i++;
        cout<<i<<" ";
    }
    cout<<endl;
    
    a(2);

    return 0;
}

void a(int b){
    cout << b << endl;
}

