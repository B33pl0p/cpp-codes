#include<iostream>
using namespace std;

int main(void)
{
    int x;
    float y;
    double z;
    char a = 'h' ;
    string name;

    cout << "\n Enter your name:";
    //cin >> name;
    getline(cin, name);

    cout <<"Your name is " <<name<<endl;
    
    return 0;
    
}