#ifndef BFS_H
#define BFS_H
#include <QPushButton>
#include <QQueue>
#include <algorithm>

using namespace std;

const int LEN = 362880; //总状态数9！=362880;
const int dir[4][2] = {{-1, 0},{1, 0},{0, -1},{0, 1}};
const long int factory[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

class bfs
{
private:

    struct node
    {
        int state[9]; //记录八数码的一个状态;
        int dis;      //记录到起点的距离;
    };

    QVector<int> path;//路径
    map<int,int> parent; //哈希匹配出父节点

    int* end;
    int visited[LEN] = {0};
    int start[9];  //起始状态;
    int target[9]; //目标状态;

    bool Cantor(int str[], int n); //康托展开
    void recall(int); //回溯寻找路径
public:
    bfs();
    bfs(int*);

    int searchHelp();
};

#endif // BFS_H
