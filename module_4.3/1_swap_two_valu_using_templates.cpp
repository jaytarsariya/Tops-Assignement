#include<iostream>
 using namespace std;
  

// two numbers
template <class T>
int swap_numbers(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
  

int main()
{
    int a, b;
    a = 10, b = 20;
  
    // Invoking the swap()
    swap_numbers(a, b);
    cout <<"Value a="<< a << " " <<"Value b="<<b << endl;
    return 0;
}