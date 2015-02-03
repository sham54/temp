#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void bubble_max(int a[],int n)
{
  for(int i=n;i>1;i--)
    for(int j=0;j<i-1;j++)
      if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
}

void bubble_min(int a[],int n)
{
  for(int i=n;i>1;i--)
    for(int j=n-1;j>0;j--)
      if(a[j]<a[j-1])
        swap(a[j],a[j-1]);
}

void array_print(int a[],int n)
{
  for(int j=0;j<n;j++)
    cout<<a[j]<<" ";
}
  
int main ()
{
  int l=0;
  cout<<"Enter the length of the array:";
  cin>>l;
  int a[l];
  for(int i=0;i<l;i++)
  {
    cout<<"Enter the value of "<<i+1<<" item:";
    cin>>a[i];
  }
  bubble_min(a,l);
  array_print(a,l);
  return 0;
}
 