//hello world program
#include<iostream>

using namespace std;

// main function -
// where the execution of program begins
int main()
{
	// prints hello world
	cout<<"Hello World";
	
	return 0;
}


ques2
#include <iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter the number:\n";
   cin>>num;
   cout<<"The number entered by user is "<<num;
   return 0;
   }
   
   
   QUES3
   
   
   #include <iostream>

using namespace std;

int main() {
   int var1 = 5, var2 = 5;

   // 5 is displayed
   // Then, var1 is increased to 6.
   cout << var1++ << endl;

   // var2 is increased to 6
   // Then, it is displayed.
   cout << ++var2 << endl;

   return 0;
}

 QUES4
 
 #include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1, n2, n3, n4, sum;
      cout<<"Enter 4 numbers: ";
    cin>>n1>>n2>>n3>>n4;
    sum=n1+n2+n3+n4;
       cout<<"Sum : "<<sum<<endl;
        return 0;
        }
        
  QUES5
  
  #include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}

QUES6


#include <iostream>
using namespace std;

int main() 
{    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}
QUES7

#include <iostream>
using namespace std;

int main()
{
    
    int a = 5, b = 10;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

