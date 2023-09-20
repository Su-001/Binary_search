#include<stdio.h>
#include<conio.h>
int main(){
  int array[] = {2,5,7,9,10,14,17,20};
  int left,right,n,a,middle;
  n = sizeof(array)/sizeof(array[0]);
  left = 0;
  right = n-1;
  middle = (left+right)/2;
  printf("enter the number you want to search :");
  scanf("%d",&a);

  while(left<=right){
    if(array[middle] == a){
      printf("mil gyaa!!");
        break;
    }
      else if(array[middle] > a){
        right = middle-1;
    }
       else{
        left = middle +1;
    }
    middle = (left+right)/2;
}

    if(left>right){
        printf("nhi mila");

}
getch();
return 0;
}
