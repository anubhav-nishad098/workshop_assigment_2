/*Count Even Numbers*/
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
    int num=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            num++;
        }
    }
    cout<<"THE NUMBER OF EVEN ARRAY ELEMENTS ARE : "<<num;

    return 0;
}