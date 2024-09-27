#include <iostream>
using namespace std;
void square(int n);
int main()
{
    int num[5], i;
    cout<<"Enter five integers: "<<endl;
    for(i=0; i<5; i++)
    cin>>num[i];
    cout<<"Calling the funtion..."<<endl;
    for(i=0; i<5; i++)
    square(num[i]);
    getc;
}
void square(int n)
{
  cout<<n<<"\t"<<n*n<<endl;
}