#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<iostream>
#include<algorithm>
#include<sstream>
#include<fstream>
#include<vector>
#include<map>
#include<stack>
#include<list>
#include<set>
#include<queue>
#define LL long long
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1 | 1
/*
正反循环的宏定义
*/
#define ffr(i,x,y) for(int i=(x),_en=(y);i<=_en;i++)
#define rff(i,x,y) for(int i=(x),_en=(y);i>=_en;i--)
#define clr(f,z) memset(f,z,sizeof(f))
using namespace std;
const int maxn=100005,inf=1<<29;
int dir[][2]={ {0,1},{-1,0},{0,-1},{1,0},{-1,1},{-1,-1},{1,-1},{1,1}};//常用方向数组

struct node
{
    int x,y;
};//常用结构体
vector<int>G[maxn];//常用邻接表
/*
函数重载，可根据参数类型，自动选择输入
*/
bool sf(int &x) { return scanf("%d",&x)==1;}
bool sf(char *x){return scanf("%s",x)==1;}
bool sf(double &x){return scanf("%lf",&x)==1;}
bool sf(LL &x) { return scanf("%lld",&x)==1;}
void pf(int x,int op) {
    op?printf("%d\n",x):printf("%d ",x);//op==0打印数字加空格，op==1打印数字加换行
}
void pf(LL x,int op) {
    op?printf("%lld\n",x):printf("%lld ",x);//op==0打印数字加空格，op==1打印数字加换行
}
int get_rand(int n)
{
    return (int)((double)rand() / RAND_MAX * n) ;
}
int v[]={20,10,5,1};
int main()
{
    LL a,b,c;
    while(sf(a))
    {
        sf(b);sf(c);
        if(a>0&&b>0&&c<0) puts("Yes");
        else if(a<0&&b<0&&c>0) puts("No");
        else if(a>0&&b>0&&c>0)
        {
            if(a>c-b) puts("Yes");
            else puts("No");
        }
        else if(a<0&&b<0&&c<0)
        {
            if(a>c-b) puts("Yes");
            else puts("No");
        }
        else
        {
            if(a+b>c) puts("Yes");
            else puts("No");
        }
    }
    return 0;
}
