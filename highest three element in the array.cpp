#include <iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enetr the size of the array";
    cin>>n;
    
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
        
    }
    int a= arr[0], b= arr[1] ,c= arr[2];
    
    for(int i = 0 ; i <n; i++){
        if (arr[i]>a){
            c = b ;
            b = a;
            a = arr[i];
        }
        else if (arr[i]>b){
            c = b;
            b = arr[i];
        }

            
        else if (arr[i]>c){
            c= arr[i];
        }
    }
    cout<<a<<","<<b<<","<<c;
    
}
