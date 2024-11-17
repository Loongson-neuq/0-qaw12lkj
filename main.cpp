#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
    int t=0;
    if(b>=a)
    {
    t=b;
    b=a;
    a=t;
    }
    if(c>=a)
    {
    t=c;
    c=a;
    a=t;
    }
    if(c>=b)
    {
    t=c;
    c=b;
    b=t;
    }
    
}
