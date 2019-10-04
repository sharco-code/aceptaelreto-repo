#include <iostream>
int lenght(int k) {
    int x=1;
    while(k>10) {
        k = k / 10;
        x++;
    }
    return x;
}
short o(short x,bool y) {
    short h[4] = {0,0,0,0},i=3,m,a;
    while(x!=0){
        m=x%10;
        x=x/10;
        h[i]=m;
        i--;
    }
    for(i=0;i<4;i++) {
        for(m=i;m<4;m++) {
            if(y) {
                if(h[i]>h[m]){
                    a=h[m];
                    h[m]=h[i];
                    h[i]=a;
                }
            } else {
                if(h[i]<h[m]){
                    a=h[m];
                    h[m]=h[i];
                    h[i]=a;
                }
            }
        }
    }
    return (h[0]*1000+h[1]*100+h[2]*10+h[3]);
    
}
int f() {
    short n, c=0;
    std::cin>>n;
    while(n!=6174) {
        n=o(n,false)-o(n,true);
        c++;
        if(n==0) return 8;
    }
    return c;
}
int main() {
    short a;
    std::cin>>a;
    for(short i=0;i<a;i++) std::cout<<f()<<std::endl;
    return 0;
}