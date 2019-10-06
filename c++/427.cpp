#include <iostream>
#define g getline
using namespace std;
int main() {
    short n;
    cin>>n;
    cin.get();
    string a,b;
    for(short i;i<n;i++){
        g(cin,a);
        g(cin,b);
        if(a=="Luke"&&b=="padre") cout<<"TOP SECRET"<<std::endl;
        else cout<<a<<", yo soy tu "<<b<<endl;
    }
    return 0;
}