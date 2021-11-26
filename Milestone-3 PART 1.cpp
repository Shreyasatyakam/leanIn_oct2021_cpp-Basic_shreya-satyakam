ques.1
#include <iostream>  
using namespace std;  
int main()   
{  
    char char_array[] = {'J','A','V','A','T','P','O','I','N','T'};  
    int array_size = sizeof(char_array) /  
    sizeof(char);  
    string j = "";  
    int i;  
    for(i = 0; i < array_size; i++)  
   {  
      
    j = j + char_array[i];  
    }  
    cout << j <<endl;  
}   

ques2.
#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, sum = 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
   
    }
    cout << "\nSum of array elements : " << sum;
    return 0;
}


ques3.
#include<iostream>
using namespace std;

int main()
{
   int row, col, m1[10][10], m2[10][10], sum[10][10];

   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>row;
   cout<<"Enter the number of column(should be >1 and <10): ";
   cin>>col;
   cout << "Enter the elements of first 1st matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
   cout << "Enter the elements of first 1st matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }

   cout<<"Output: ";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
      }
   }

   return 0;
}

ques4.
#include<iostream<
using namespace std;
int main() {
   int transpose[10][10], r=3, c=2, i, j;
   int a[3][3] = { {1, 2} , {3, 4} , {5, 6} };
   cout<<"The matrix is:"<<endl;
   for(i=0; i<r; ++i) {
      for(j=0; j<c; ++j)
      cout<<a[i][j]<<" ";
      cout<<endl;
   }
   cout<<endl;
   for(i=0; i<r; ++i)
   for(j=0; j<c; ++j) {
      transpose[j][i] = a[i][j];
   }
   cout<<"The transpose of the matrix is:"<<endl;
   for(i=0; i<c; ++i) {
      for(j=0; j<r; ++j)
      cout<<transpose[i][j]<<" ";
      cout<<endl;
   }
   return 0;
}

ques5.
 
#include <iostream>
using namespace std;
  
int main(){
    int input[500], output[500], count, i;
      
    cout << "Enter number of elements in array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
   
    for(i = 0; i < count; i++){
        output[i] = input[count-i-1];
    }    
    
    cout << "Reversed Array\n";
    for(i = 0; i < count; i++){
        cout << output[i] << " ";
    }
          
    return 0;
}

ques6.
#include<iostream>
using namespace std;
int main()
{
    int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo, i, k;
    cout<<"Enter the Size for First Array: ";
    cin>>sizeOne;
    cout<<"Enter "<<sizeOne<<" Elements for First Array: ";
    for(i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    k = i;
    cout<<"\nEnter the Size for Second Array: ";
    cin>>sizeTwo;
    cout<<"Enter "<<sizeTwo<<" Elements for Second Array: ";
    for(i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arrMerge[i]<<" ";
    cout<<endl;
    return 0;
}

ques7.
#include <iostream>
using namespace std;
 
void ReplaceElements(int arr[], int n)
{
  
    if (n <= 1)
        return;
 
  
    int prev = arr[0];
    arr[0] = arr[0] + arr[1];
 
   
    for (int i = 1; i < n - 1; i++) {

        int curr = arr[i];
 
        arr[i] = prev + arr[i + 1];
 
        prev = curr;
    }
 
    arr[n - 1] = prev + arr[n - 1];
}

int main()
{
    int arr[] = { 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    ReplaceElements(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}


ques 8. 
a.
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }

    return 0;
}



b.
#include <iostream>
using namespace std;
int main()
{
int i, j, k, space, n;
cin >> n;
cout << ” “;
for (i=1; i<=n; i++)
{

for (j=1; j<=n-i; j++)
cout << ” “;

for (j=1,k=2*i-1; j<=2*i-1; j++,k–)
{
if (j <= k)
cout << j;
else
cout << k;
}
cout << endl;

cout << ” “;

}
return 0;
}


c.
#include <iostream>
using namespace std; 
int main()
{
    int i, j, n;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1)  // upper left triangle
                cout << "*";
            else
                cout << " ";
            if((i + n) <= j)  // upper right triangle
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
   
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  
                cout << "*";
            else
                cout << " ";
            if(i >= (2 * n - 1) - j) 
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}


d.
#include <iostream>
using namespace std; 
int main()
{
    int i, j, n;
    cin >> n;
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j) // upper left triangle
                cout << "*";
            else
                cout << " ";
            if(i >= (2 * n - 1) - j)  // upper right triangle
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
 
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1)  
                cout << "*";
            else
                cout << " ";
            if((i + n) <= j) 
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
