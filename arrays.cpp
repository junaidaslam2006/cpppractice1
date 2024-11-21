#include<iostream>
#include<climits>
using namespace std;
int main(){
   int n;
   cout<<"Enter total elements of an array : ";
   cin >>n;
   int arr[n];
   cout<<"Enter every element of an array now :"<<endl;
   for (int i = 1; i <= n; i++)
   {
     cin >>arr[i];
   }
   int maximumNumber = INT_MIN,minimumNumber = INT_MAX;
   for (int i = 1; i <= n; i++)
   {
     maximumNumber = max(maximumNumber,arr[i]);
     minimumNumber = min(minimumNumber,arr[i]);
   }
    cout<<"Entered elements of an array are :";
   for (int i = 1; i <= n; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"The maximum element of an array is "<<maximumNumber<<endl;
   cout<<"The minimum element of an array is "<<minimumNumber<<endl;
   
   

   
}