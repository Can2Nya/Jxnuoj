#include<iostream>
using namespace std;
int n,m,ans[15];
int a[15];//�����е����洢�ڴ�
bool vis[15];
void dfs(int cnt)//���ֵ������n����ѡm��������������
{
    if(cnt==m)
    {
        for(int i=0;i<m;i++) cout<<ans[i]<<" ";
        cout<<endl;
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]) continue;
        vis[i]=1;
        ans[cnt]=a[i];
        dfs(cnt+1);
        vis[i]=0;
    }
}
int main()
{
    while(cin>>n)
    {
        m=n;
        fill(vis,vis+15,0);
        for(int i=0;i<n;i++) a[i]=i+1;
        dfs(0);
    }
    return 0;
}
