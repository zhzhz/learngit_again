#include <reg52.h>

sbit LED = P2^0;     //λ��ַ������ע�⣺sbit����Сд��P��д��
sbit LED1 = P2^1;
void main()
{
    LED = 0;        //����С��
    LED1 = 1;
    printf("i am good\n");
    while (1);      //����ֹͣ������
}
git tracks changes
