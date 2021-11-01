#include<iostream>
using namespace std;

int findMaxIndex(long long int arr[]){
long long int max = -1;
int index = 0;
 for (int i =0; i< 5 ; i++){
    if(arr[i] > max){
        max = arr[i];
        index =  i;
    }
 }
 return index;
}

int findMinIndex(long long int arr[]){
int long long min = 1000000000;
int index = 0;
 for (int i =0; i< 5 ; i++){
    if(arr[i] < min && arr[i] != 0){
        min = arr[i];
        index =  i;
    }
 }
 return index;
}
int main(){
 long long int arr[5];
 long long int max = 0, min = 0;

 for(int i =0 ; i< 5 ; i++){
    cin>> arr[i];
 }

 int maxIndex = findMaxIndex(arr);

  for(int i =0 ; i< 5 ; i++){
    if(i != maxIndex)
        min += arr[i];
 }
 cout<< min<<" ";

 int minIndex = findMinIndex(arr);
    for(int j = 0; j< 5 ;j++){
        if(j != minIndex)
            max += arr[j];
    }


cout<< max<<endl;
}
