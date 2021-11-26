a.
#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter the row and column size:";
  int row_size,out,in,p;
  cin>>row_size;
  for(out=1;out<=row_size;out++)
  {
   for(in=1;in<=row_size;in++)
    cout<<"*";

        cout<<"\n";
  }
}

b.
// C++ code to demonstrate star pattern
#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}


c.
#include<iostream>
using namespace std;
int main()
{

  cout<<"Enter the row and column size:";

  int row_size,out,in,p;
  cin>>row_size;
  for(out=1;out<=row_size;out++)
  {
   for(in=1;in<=row_size;in++)
    cout<<in;

        cout<<"\n";
  }
}


d.
#include<iostream>
using namespace std;
int main()
{
    int i, j, num;
    for(i=0; i<5; i++)
    {
        num=1;
        for(j=0; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

ques 2.
#include <iostream>
using namespace std;
 

void result(int N)
{    
    // iterate from 0 to N
    for (int num = 0; num < N; num++)
    {    
       
        if (num % 3 == 0 )
            cout << num << " ";
    }
}
 
// Driver code
int main()
{    
    //input
    int N = 50;
     
   
    result(N);
    return 0;
}
 

ques.3
// CPP program to print Fizz Buzz
#include <stdio.h>
 
int main(void)
{
    int i;
    for (i=1; i<=100; i++)
    {
        // print FizzBuzz for the multiples of 15
        if (i%15 == 0)       
            printf ("FizzBuzz\t");   
         
        // number divisible by 3 then print 'Buzz'
        // in place of the number
        else if ((i%3) == 0)   
            printf("Buzz\t");                
         
        // number divisible by 5, print 'Fizz' 
        // in place of the number
        else if ((i%5) == 0)                      
            printf("Fizz\t");                
     
        else // print the number           
            printf("%d\t", i);                
 
    }
 
    return 0;
}












