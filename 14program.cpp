#include <iostream>
using namespace std;
void fun();
int main()
{
    int i;
    for(i=1; i<=5; i++)
    fun();
    getc;
}
void fun()
{
    static int n = 0;
    n++;
    cout<<"Value of n = "<<n<<endl;
}
