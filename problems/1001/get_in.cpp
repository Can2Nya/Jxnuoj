#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstdio>
#include<fstream>
#define digit 10
using namespace std;
string LLMax="9223372036854775807";
string IntMax="2147483647";
string SmellAlphabet="abcdefghijklmnopqrstuvwxyz";
string RandomBigInteger()
{
    int n=rand()%10000+1;//����������nλ��
    string s;
    //if(n==1) s+=rand()%10+'0';//
    //else
    s+=rand()%9+1+'0';//��һλΪ1-9֮�����
    for(int i=2;i<=n;i++) s+=rand()%10+'0';//���������2-nλ�ϵ�����
    //if(rand()%2==1) s='-'+s;//��������
    return s;
}
string RandomInt()
{
    int n=rand()%10+1;//����������nλ��
    string s;
    if(n==digit)//���⴦����Ϊint��Ҫ��[-2^31,2^31-1]֮��
    {
        return "1000000000";
        s+=rand()%2+1+'0';
        for(int i=1;i<n;i++)
        {
            int temp=rand()%10;
            while(temp>IntMax[i]-'0') temp=rand()%10;
            s+=temp+'0';
        }
        return s;
    }
   // if(n==1) s+=rand()%10+'0';//
    //else
    s+=rand()%9+1+'0';//��һλΪ1-9֮�����
    for(int i=2;i<=n;i++) s+=rand()%10+'0';//���������2-nλ�ϵ�����
    //if(rand()%2==1) s='-'+s;//��������
    return s;
}
string RandomString()
{
    int n=rand()%digit+1;//����������nλ�ַ���
    string s;
    for(int i=0;i<n;i++) s+=SmellAlphabet[rand()%26];//��������ַ���
    return s;
}
int main()
{
    int t=100;
    ofstream in("in.txt");
    srand((unsigned)time(NULL));
    //for(int i=0;i<100;i++)
      //  in<<RandomInt()<<endl;
    in<<t<<endl;
    while(t--)
    {

        in<<RandomBigInteger()<<" "<<RandomInt()<<" "<<(rand()%9+1)<<endl;

    }
    return 0;
}
