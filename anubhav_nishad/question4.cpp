/*Find the Maximum Element*/
#include <iostream>
using namespace std;

int main(){
     
    int n;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY : "<<endl ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int num,i;
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
             num=i+1;
        }
    }

    cout<<"THE MAXIMUM ELEMENT OF THE ARRAY IS "<<arr[i]<<" & IT IS THE "<<num<<"th ELEMENT!";

    return 0;
}