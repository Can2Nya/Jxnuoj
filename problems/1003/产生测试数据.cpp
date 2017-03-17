#include<cstdio>
#include<cstdlib>
#include<ctime>
#define LL long long
//�������ܣ��������n�����Ʊ�ʾ��1�ĸ���
LL getOneNumber(LL n)
{
    LL cnt=0;
    while(n)
        n&=n-1,cnt++;
    return cnt;
}
LL getRandom(LL n)
{
    LL sum=0;
    for(int i=1;i<=n;i++)
        sum=sum*10+rand()%10;
    while(!sum) sum=rand()%10;
    return sum;
}
int main()
{
    LL a,b;
    FILE *fin=fopen("in.txt","w"),*fout=fopen("out.txt","w");
    srand(time(NULL));
    for(LL i=1;i<=300;i++)
        for(LL j=1;j<=30;j++)
        {
            LL na=(LL)(rand()%8+1),nb=(LL)(rand()%8+1);
            LL a=getRandom(na),b=getRandom(nb);
            fprintf(fin,"%lld %lld\n",a,b);
            LL t=a;a=b;b=t;
            fprintf(fout,"%lld %lld\n",a,b);
        }
    return 0;
}
