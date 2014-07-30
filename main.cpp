#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int ackerman(int m, int n){

    int a, b, ackVal;

    a = m;
    b = n;

    if( a == 0 ) ackVal = (b + 1);
    else if( b == 0 ) ackVal = (ackerman(a-1, 1));
    else ackVal = ackerman(a-1, ackerman(a,n-1));
    return ackVal;
}

int main(){
int m,n;
bool again = true;
string response;

while(again){
cin >> m;
cin >> n;

int result = ackerman(m,n);

cout << "Given m =" << m << "and n = " << n << " ackerman = "<< result << endl;
cout << "Do it again?" << endl;
cin >> response;
if(response=="y") again = true;
else again = false;
}

return 0;

}
