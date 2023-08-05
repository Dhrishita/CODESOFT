# include <iostream>
using namespace std;

int main() {

  char op;
  float number1, number2;
 
  cout<< "Choose an operator(+, -, *, /) to perform the operation in Calculator" << endl;  
    cin>>op;   
    if (op == '+' )  
    {  
        cout << "You have selected: Addition" << endl <<endl;  
    }  
    else if (op == '-')  
    {  
        cout << "You have selected: Subtraction" << endl << endl;  
     }  
       
    else if (op == '*')  
    {  
        cout << "You have selected: Multiplication" << endl << endl;  
     }  
        else if (op == '/')  
    {  
        cout << "You have selected: Division" << endl << endl;  
     }     
    cout  << "Now enter the first number: ";  
      cin >> number1; 
     cout  << "Now enter the second number: "; 
    cin >> number2; 
     
  switch(op) 
  {
    case '+':
      cout << number1 << " + " << number2 << " = " << number1 + number2;
      break;

    case '-':
      cout << number1 << " - " << number2 << " = " << number1 - number2;
      break;

    case '*':
      cout << number1 << " * " << number2 << " = " << number1 * number2;
      break;

    case '/':
      cout << number1 << " / " << number2 << " = " << number1 / number2;
      break;

    default:
      cout << "Error! operator entered is not correct";
      break;
  }

  return 0;
}

