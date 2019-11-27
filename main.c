#include <reg52.h>

sbit LED = P2^0;     //位地址声明，注意：sbit必须小写、P大写！
sbit LED1 = P2^1;
void main()
{
    LED = 0;        //点亮小灯
    LED1 = 1;
    printf("i am good\n");
    while (1);      //程序停止在这里
}
git tracks changes
