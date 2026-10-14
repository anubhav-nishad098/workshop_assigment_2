/*Sum of Array Elements*/
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int sum=0;
     for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
     }

     cout<<"THE SUM OF THE ARRAY ELEMENTS IS : "<<sum;
     
    return 0;
}