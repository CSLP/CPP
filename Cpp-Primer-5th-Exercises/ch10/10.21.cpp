/*#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a=10;
    auto f=[a]()mutable-> bool {if(a) {while(a) --a;return false;}else return true;};
    cout<<f()<<endl;
    cout<<f();
}
*/
#include <iostream>
int main() {
  int n;
  auto isZero = [&n] { return n > 0 ? --n, false : true; };
  // Use comma expression to return bool value
  std::cin >> n;

  while (!isZero())
    std::cout << n << std::endl;
  isZero();
  std::cout << n << std::endl;
  //std::cout << typeid(isZero()).name() << std::endl;

  return 0;
}