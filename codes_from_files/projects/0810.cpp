#include <iostream>
#include <string>
using namespace std;

int function (string& arg);

int main() {
    string x = "Some big essay.";

    cout <<"Before :" << x << endl;
    function(x);
    cout <<"After : "<< &x <<endl;

    return(0);

}
int function (string& arg) {
    arg = "Some new text.";

    return 42;
}