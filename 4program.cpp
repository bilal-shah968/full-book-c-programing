#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
 int num;
 cout<<"Enter a numbe: ";
 cin>>num;
 factorial(num);
 getc;

}
  int factorial(int n)

{
  int i;
  long fact;
  fact = 1;
  for(i=1; i<=n; i++)
  fact *=i;
  cout<<"Factorial of "<<n<<" is "<<fact;
}
