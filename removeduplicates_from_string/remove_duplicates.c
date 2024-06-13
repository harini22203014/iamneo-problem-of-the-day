#include<stdio.h>
int main(){
char arr[1000];
scanf("%s", arr);
int alpha [26];
for(int i=0;arr[i]!= '\0';i++){
alpha[arr[i]]=1;
}
printf("After removing duplicates: ");
for(int i=0;arr[i]!= '\0';i++){
if(alpha[arr[i]]>0){
printf("%c",arr[i]);
alpha[arr[i]]=0;
}
}
}
