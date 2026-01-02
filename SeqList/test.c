#include "SeqList.h"


void TestSeqList1()
{
    SL s;
    SeqInit(&s);
    SeqPushBack(&s,1);
    SeqPushBack(&s,2);
    SeqPushBack(&s,3);
    SeqPushBack(&s,4);
    SeqPushBack(&s,5);
    SeqPushBack(&s,6);

}

int main()
{
    TestSeqList1();

    return 0;
}