#include<iostream>
using namespace std;
int closest(int arr[], int s,int b){
int diff=101;
int num=0;
for(int i=0;i<s;i++){
if(arr[i]==b){
return b;
}
else if(arr[i]<b && (b-arr[i])<diff){
diff=b-arr[i];
num=arr[i];
}
}
return num;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int h;
cin>>h;
int res=closest(arr,n,h);
if(res>0){
cout<<"The closest item ID less than or equal to "<<h<<" is "<<res;
}
else{
cout<<"No closest item with an ID less than or equal to "<<h<<" exists in the wardobe";
}
}
