#include <reg52.h>

sbit LED = P2^0;     //位地址声明，注意：sbit必须小写、P大写！

void main()
{
    LED = 1;        //点亮小灯
    while (1);      //程序停止在这里
}