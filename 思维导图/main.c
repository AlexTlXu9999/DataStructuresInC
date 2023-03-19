//斐波那契
#include "stdio.h"


int main(){
    setbuf(stdout, 0);
    int Feibo(int x);
    int i=0,j=1;
    int x,y;
    printf("请输入需要求出的第n项\n");
    scanf_s("%d",&x);
    x= Feibo(x);
    printf("经过运算，第n项值为：%d",x);
    }
    int Feibo(int x){
    int ax=0,a1=1;
    int an;
        for (int i = 0; i < x-1; i++) {
           an=ax+a1;
           ax=a1;
           a1=an;
           printf("此时：an-2=%2d an-1=%2d an=%2d \n" ,ax,a1,an);
        }
        return an;
}

