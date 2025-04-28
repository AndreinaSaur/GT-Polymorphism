#include <iostream>
using namespace std;

class Calculator {
  public:
  void add(int a, int b)
  {
    cout << "sum = " << a + b;
  }
  
  void add(int a, int b, int c)
  {
      cout << endl << "sum = " << a + b + c;
  }

  void add(float a, float b)
  {
    cout << endl << "sum = " << a + b;
  }

  void subtract(int a, int b)
  {
    cout << endl << "difference = " << a - b;
  }

  void multiply(int a, int b)
  {
    cout << endl << "product = "<< a * b;
  }

  void divide(float a, float b)
  {
    cout << endl << "quotient = "<< a / b;
  }
};


int main() {
  Calculator ca;
  int number;
  cout << "++++++++<<Simple Calculator>>++++++++" << endl;
  cout << "1. Add two integers" <<endl;
  cout << "2. Add three integers" <<endl;
  cout << "3. Add two floats" <<endl;
  cout << "4. Subtract two integers" <<endl;
  cout << "5. Multiply two integers" <<endl;
  cout << "6. Divide two floats" <<endl;
  cout <<" Enter your choice (1-6): ";
  cin >> number;
  cout << "Enter two integers: ";
  int a,b,c;
  cin >> a >> b;
  switch (number) {
    case 1:
        ca.add(a,b);
      break;

    case 2:
      cout << "Enter three integers: ";
      cin >> c;
        ca.add (a,b,c);
      break;

    case 3:
  
      ca.add ((float)a, (float) b);
      break;

    case 4:
    
      ca.subtract (a,b);
      break;

    case 5:
    
      ca.multiply (a,b);
      break;

    case 6:
    if (b == 0){
        cout << " zero is not allowed" << endl;
    } else {
      ca.divide (a,b); }
      break;
    default:
    cout << "Edi dont";
  }

  return 0;
}
