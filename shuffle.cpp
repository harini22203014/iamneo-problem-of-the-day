#include<iostream>
using namespace std;

int perfect(int a){
int sum=1;
for(int i=2;1<=a/2;i++){
if(a%i==0){
sum+=1;
}
}
if(sum==a){
return 1;
}
return 0;
}
int main(){
int n;
cin>>n;
bool b-perfect(n);
if(b){
cout<<n<<" is a perfect number";
}
else{
cout<<n<<" is not a perfect number";
}
}