#include<iostream>
using namespace std;

int main(){
int l;
cin >> l;
int arr[l];


for(int i =0; i < l; i++){
    cin >> arr[i];
}

int poss = 0, neg = 0, zero = 0;
for(int i =0; i< l; i++){
    if(arr[i] > 0)
        poss++;
    else if(arr[i]< 0)
        neg++;
    else if(arr[i] == 0)
        zero++;

}

printf("%0.6f\n",poss/float(l));
printf("%0.6f\n",neg/float(l));
printf("%0.6f\n",zero/float(l));

return 0;

}
