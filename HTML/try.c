#include<stdio.h>
#include<math.h>
int main(){
    int yr;
    float a,b,c,d,e,f;
    printf("enter the year:");
    scanf("%d",&yr);
    a=(yr/4.0);
    b=(yr/4.0);
    c=(yr/4.0);
    int check=yr/4;
    

    d=(a-check);
    e=(b-check);
    f=(c-check);
    if(yr%4==0){
        printf("this ia a leap year");
    }
    
    else if(d==0.25){
        float z=a+0.75;
        int r=4*z;
        printf("the next leap year is :%d\n",r);
        z=z-1;
        int x=4*z;
        
        
        
        printf("the previous leap year is:%d",x);

    }
    else if(e==0.5){
        float y=b+0.5;
        int j=4*y;
        printf("the next leap year is:%d\n",j);
        y=y-1;
        int r=4*y;
        
        
        printf("the previous leap year is:%d",r);

    }
    else if(f==0.75){
        float g=c+0.25;
        int v=4*g;
        printf("the next leap year will be:%d\n",v);
        g=g-1;
        int h=4*g;
        printf("the previous year will be:%d",h);

    }
    
    return 0;
    

}