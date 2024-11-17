#include ".assignment/test.h"

struct Result
{
    int min;
    int mid;
    int max;
};

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
    result.min = 最小值;
    result.mid = 中间值;
    result.max = 最大值;
}
