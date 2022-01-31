#include <stdio.h>
#include <stdio.h>

int main(){
   
    int s=0,p=1,d,t,n;
    scanf("%d",&n);
   
    while (n>0){
       
        d=n%10;
        s +=d;
        p *=d;
        n/=10;
    }
    t=p-s;
    printf("%d",t);
   
    return 0;
}