  #include <iostream>
  using namespace std;
  double add(int x, double y)  {   return x + y;   }
  double add(double x, int y)  {   return x + y;   }
  int main()
  {
          cout << add(1.3,1.5);
          return 0;
  }
