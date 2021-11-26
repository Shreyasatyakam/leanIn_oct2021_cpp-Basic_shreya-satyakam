ques1.
#include <iostream>
using namespace std;
class LS
{
    public:
        void LinearSearch(int arr[], int value, int i, int n)
        {   int found = 0;
            for (i = 0; i < n ; i++)
            {
                if (value == arr[i] )
                {
                    found = 1;
                    break;
                }
            }
            if (found == 1)
            {
                cout<<"Element is present in the array at position   "<<i+1;
            }
            else
            {
                cout<<"Element is not present in the array.";
            }
        }
};
int  main()
{  int num;
    int i,  keynum, found = 0;
    cout<<"Enter the number of elements   ";
    cin>>num;
    int array[num];
    cout<<"Enter the elements one by one \n";
    for (i = 0; i < num; i++)
    {
        cin>> array[i];
    }
    cout<<"Enter the element to be searched   ";
    cin>>keynum;
    /*  Linear search begins */
    LS l1;
    l1.LinearSearch(array,keynum,i,num);
    return 0;
}


ques2.
#include<iostream>
using namespace std;
int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}
int main(void) {
   int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num;
   cout << "Enter the number to search: \n";
   cin >> num;
   int index = binarySearch (arr, 0, n-1, num);
   if(index == -1){
      cout<< num <<" is not present in the array";
   }else{
      cout<< num <<" is present at index "<< index <<" in the array";
   }
   return 0;
}


ques3.
#include<iostream>
using namespace std;
//function to display all the menu in
//the current program
void menu()
{
    cout<<"\n\t\tMENU :";
    cout<<"\nPress 1 to traverse the array\n";
    cout << "Press 2 to search an element in the array\n";
    cout << "Press 3 to modify the element in the array\n";
    cout << "Press 4 to exit\n";
}

void traverse(int arr[],int num)
{
    
        for (int i = 0; i < num; i++)    
        {    
            cout<<arr[i]<<"\n";    
        }    
}

void search(int arr[], int num) 
{
    int i, element;
   cout << "\nEnter Element to Search : ";
    cin>>element;
    /* for : Check elements one by one - Linear */
    for (i = 0; i < num; i++) 
    {
        /* If for Check element found or not */
        if (arr[i] == element) 
        {
            cout << "\nLinear Search : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

    if (i == num)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}
void modify(int arr[],int num)
{

int t,a[10],n,m,s,j=0,b[10];
  
  cout<<"\nGiven values are:";
  traverse(arr, num);
  
  cout<<"\nEnter the position to be update:";
  cin>>t;
  cout<<"\nEnter the value to be update:";
  cin>>s;
  for(int i=0;i<num;i++)
  {
    if(i==t)
    {
       a[i]=s;
    }
  }
  cout<<"\nUpdated value is:";
  for(int i=0;i<num;i++)
  {
    cout<<arr[i]<<"\n";;
  }

}

 int main()
{
    int arr[100], i, num, choice;
    cout<<"Enter the size of "
           "an array :\n";
 
    cin >> num;
    cout<<"Enter the elements of "
           "the array :\n";
 
    for (i = 0; i < num; i++) 
    {
        cin >> arr[i];
    }
 
    do {
        cout << "\n";
        menu();
        cout << "\nEnter your "
             << "choice:\n ";
        cin >> choice;
         
 
        switch (choice) 
        {
        case 1:
           traverse(arr, num);
            break;
        case 2:
            search(arr, num);
            break;
        case 3:
            modify(arr, num);
            break;
        
        case 4:
            exit(0);
            break;
        default:
            cout << "INVALID CHOICE ";
        }
    }while (choice <4);
    
 
    return 0;
}

        
       
ques4.
#include<iostream>
using namespace std;
int main()
{
    int i, j, k;
    int threeDimArr[3][4][2] = {
        { {1, 2}, {3, 4}, {5, 6}, {7, 8} },
        { {9, 8}, {7, 6}, {5, 4}, {3, 2} },
        { {0, 3}, {5, 7}, {9, 2}, {4, 6} }
        };
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            for(k=0; k<2; k++)
                cout<<threeDimArr[i][j][k]<<"  ";
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
