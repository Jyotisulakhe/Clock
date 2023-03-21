
#include<stdio.h>
int main()
{
//clock in 24 hours
    int time;
    printf("enter time (1-24)\n");
    scanf("%d",&time);
    if(time>=1&&time<=11){
        printf("good morning");
    }
    else if(time>=12&&time<17){
        printf("good afternoon");
    }
    else if(time>17&&time<=24){
        printf("good night");
    }
    else{
        printf("not valid time");
    }
}
