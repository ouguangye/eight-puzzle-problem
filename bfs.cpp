#include "bfs.h"

bfs::bfs()
{

}

bfs::bfs(int* end){
    this->end = end;
}

bool bfs::Cantor(int str[], int n)
{
    long res = 0;
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (str[j] < str[i])
                counter++;
        }

        res += counter * factory[n - i - 1];
    }

    if (!visited[res])
    {
        visited[res] = 1;
        return true;
    }
    return false;
}

int bfs::searchHelp()
{
    struct node head;
    memcpy(head.state, start, sizeof(head.state));
    head.dis = 0;
    QQueue<node> qu;
    Cantor(head.state, 9);
    qu.enqueue(head);

    while (!qu.empty())
    {
        head = qu.dequeue();
        int z;
        for (z = 0; z < 9; z++)
        {
            if (head.state[z] == 0)
                break;
        }

        int x = z % 3;
        int y = z / 3;
        for (int i = 0; i < 4; i++)
        {
            int newx = x + dir[i][0];
            int newy = y + dir[i][1];
            int nz = newx + newy * 3;
            if (newx >= 0 && newx < 3 && newy >= 0 && newy < 3)
            {
                struct node newnode;
                memcpy(&newnode, &head, sizeof(struct node));
                swap(newnode.state[z], newnode.state[nz]); //交换0的位置;
                newnode.dis++;
                if (memcmp(newnode.state, target, sizeof(target)) == 0)
                {
                    parent[nz] =  z;
                    recall(nz);
                    return newnode.dis;
                }

                if (Cantor(newnode.state, 9)){
                    parent[nz] =  z;
                    qu.enqueue(newnode);
                }
            }
        }
    }

    return -1;
}

void bfs::recall(int pos){
    while(parent.count(pos)){
        path.push_front(pos);
        pos = parent[pos];
    }
}
