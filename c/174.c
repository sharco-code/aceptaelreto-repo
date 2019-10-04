#include <stdio.h>
#define p printf
unsigned char digit(int n){
    unsigned char c=1;
    while(n>9){
        n=n/10;
        c++;
    }
    return c;
}

unsigned char compare(int n){
    unsigned char d = digit(n);
    unsigned char s[d],i=(d-1),m;
    while(n!=0){
        m=n%10;
        n=n/10;
        s[i]=m;
        i--;
    }
    for(i=0;i<d;i++){
        for(m=(i+1);m<d;m++){
            if(s[i]==s[m]) return 1;
        }
    }
    return 0;
}

int main(){
    int n,i,b,m;
    int y,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=0,m=0;
        scanf("%d",&y);
        m=compare(y);
        while(0==0){
            b=compare(y);
            if(m==1){
                if(b==1){
                    y--;
                } else {
                    y++;
                    p("%d ",y);
                    do{
                        y++;
                        c++;
                    }while(0!=compare(y));
                    p("%d\n",c);
                    break;
                }
            } else{
                if(b==0){
                    y--;
                } else {
                    y++;
                    p("%d ",y);
                    do{
                        y++;
                        c++;
                    }while(1!=compare(y));
                    p("%d\n",c);
                    break;
                }
            }
        }
    }
    return 0;
}