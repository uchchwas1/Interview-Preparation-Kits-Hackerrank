#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
int t;
cin>> t;
int index;
int arr[t];

for( int i = 0 ; i<t ; i++){
    cin >>arr[i];
}

int n = sizeof(arr)/sizeof(arr[0]);

if(t%2 !=0){
    sort(arr,arr + n);
    index = ceil(t/2);
    cout<<arr[index];
}
else{
    sort(arr,arr + n);
    int lst = t/2;
    int fst = lst -1;
    cout<< (arr[fst]+arr[lst])/2;

}




}
