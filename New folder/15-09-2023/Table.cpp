#include<iostream>
using namespace std;
int main()
{
    int num,i=1;
    cout<<"Enter the number:";
    cin>>num;
    while(i<11)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
        i++;
    }
}
