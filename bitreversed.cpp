#include<iostream>
using namespace std;
int main()
{
     int n= 10;
    int result=0;
    int lsb;
    int revlsb;
    for(int i=0;i<32;i++)
    {
       lsb=n&1;
       revlsb=lsb<<(31-i);
       result=result|revlsb;
       n=n>>1;
    }
    cout<<"reversed bit="<<result<<endl;
    return 0;
}
