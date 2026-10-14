/*Count Target Occurrences*/
#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"ENTER THE TARGET VALUE : ";
    cin>>a;
    int n;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY : "<<endl ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num=0;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            num++;
        }
    }
    cout<<"THE NUMBER OF OCCURENCE OF THE TARGET VALUE "<<a<<" IS "<<num;

    return 0;
}