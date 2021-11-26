ques 1.

#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}


ques 2.
#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}

ques 3.

#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, tot;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    cout<<"At What Position ? ";
    cin>>pos;
    for(i=tot; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    tot++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}

ques 4.

#include<iostream>
using namespace std;
void Create(int A[],int n)
{
	for (int i=0;i<n;i++)
		cin>>A[i];
}
void BBsort(int A[],int n)
{
	for (int r=0;r<n;r++)
	{	for (int s=0;s<n-r-1;s++)
		if(A[s]>A[s+1])
		{	int t=A[s];
			A[s]=A[s+1];
			A[s+1]=t;
		}
	}
	for (int k=0;k<n;k++)
		cout<<A[k]<<",";
}
void ISort(int A[],int n)
{
	for (int i=1;i<n;i++)
	{	int T=A[i],j=i-1;
		while(T<A[j]&&j>=0)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=T;
	}
	for (int k=0;k<n;k++)
		cout<<A[k]<<",";
}
void SSort(int A[],int n)
{       for (int i=1;i<n-1;i++)
	{	int small=i;
		int j;
		for ( j=i+1;j<n;j++)
		      if(A[small]>A[j])
				small=j;
		if (small!=i)
		{      int t=A[small];
		       A[small]=A[j];
		       A[j]=t;
		}
	}
	for (int k=0;k<n;k++)
		cout<<A[k]<<",";
}
int main()
{	int A[5] ;
	Create(A,5) ;
	cout<<endl;
	BBsort(A,5);
	cout<<endl;
	ISort(A,5);
	cout<<endl;
	SSort(A,5);
	cout<<endl;
	return 0;
}



ques 5.
#include<iostream>
using namespace std;
int main ()
{
    int A[10], n, i, j, x;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> A[i];    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                x = A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }
    cout << "Second largest number : " << A[1];
    cout << "\n largest number is : " << A[0];
    return 0;
}

