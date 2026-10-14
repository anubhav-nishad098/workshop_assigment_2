/*Find the Target (Linear Search)*/
#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"ENTER THE TARGET VALUE : ";
    cin>>a;
    bool flag = false;
    int n;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    cout<< "ENTER THE ELEMENTS OF THE ARRAY : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(a==arr[i]){
            flag = true;
        }
    }
    if(flag==false){
        cout<<"TARGET VALUE "<<a<<" IS ABSENT";
    }
    else{
        cout<<"TARGET VALUE "<<a<<" IS PRESENT";
    }

    return 0;
}