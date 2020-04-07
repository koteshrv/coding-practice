#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
        return false;


    for (int i=2;i<n;i++)
        if (n%i==0)
            return false;

    return true;
}

void printPrime(int n)
{
  int count=0;
    for (int i=2; i<=1000000;i++){
        if (isPrime(i))
          count++;
        if(count==n){
          cout << i << " ";
          break;
        }
    }
}

int main()
{
    int n = 10001;
    printPrime(n);
}