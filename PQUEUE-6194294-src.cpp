#include <stdio.h>
#include <set>
#include <queue>
using namespace std;

struct node
{
    int num;
    node(int a)
    {
        num = a;
    }
};

bool operator <(node a, node b)
{
    return a.num < b.num;
}

int main()
{
    int times;
    int n,m;
    int temp;
    int position;
    int count;
    queue<int> que1;
    queue<int> que2;
    int i;
    priority_queue<node> que3;
    scanf("%d", ×);
    while(times--)
    {
        count = 0;
        scanf("%d", &n);
        scanf("%d", &position);
        for(i = 0; i < n; i++)
        {
            que1.push(i);
            scanf("%d", &temp);
            que2.push(temp);
            que3.push(node(temp));
        }
        while(true)
        {
            while(que2.front() != que3.top().num)
            {
                temp = que2.front();
                que2.pop();
                que2.push(temp);
                temp = que1.front();
                que1.pop();
                que1.push(temp);
            }
            count ++;
            if (que1.front() == position)
            {
                printf("%d\n", count);
                break;
            }
            else
            {
                que2.pop();
                que1.pop();
                que3.pop();
            }
        }
        while(que1.empty() == 0)
            que1.pop();
        while(que2.empty() == 0)
            que2.pop();
        while (que3.empty() == 0)
            que3.pop();
    }
    return 0;
}

