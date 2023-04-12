//C++ Program to Implement Matric Chain Multiplication and Find the Number of Ways to Paranthesize the Given Number of Matrices for Multiplication
#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n){
    if (n == 0 || n == 1)
        return 1;
    return (n * factorial(n - 1));
}

int main(){
    cout<<"No. of Matrices :: ";
    int m;
    cin>>m;
    int n=m-1;
    unsigned int a = (factorial(2*n)/(factorial(n+1)*factorial(n)));
    cout << "Number of Ways To Parenthesize :: " << a;
    return 0;
}
