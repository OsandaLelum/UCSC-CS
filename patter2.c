/* 
 * * *
 * * *
 * * *
 
 */ 
/* 
#include<stdio.h>
int main(){
    int n;
  printf("Entr the num of rows"); 
  scanf("%d",&n);
  for(int i=n;i>=0;i--){
      for(int j=n;j>=0;j--){
          printf("*");
      }
      printf(" \n");

  }
  return 0;
}

*?
/*
* * * * *
* * * *
* * *
* *
*
*/
/*
#include<stdio.h>
int main(){
    int n;
  printf("Entr the num of rows"); 
  scanf("%d",&n);
  for(int i=n;i>=0;i--){
      for(int j=i;j>0;j--){
          printf("*");
      }
      printf(" \n");

  }
  return 0;
}
*/

/*
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
 */
/*

#include<stdio.h>
int main(){
    int n;
  printf("Entr the num of rows"); 
  scanf("%d",&n);
  for(int i=n;i>=0;i--){
      for(int j=i;j>0;j--){
          printf("%d",j);
      }
      printf(" \n");

  }
  return 0;
}

987654321 
87654321 
7654321 
654321 
54321 
4321 
321 
21 
1 

*/

#include<stdio.h>
int main(){
    int n;
  printf("Entr the num of rows"); 
  scanf("%d",&n);
  for(int i=n;i>=0;i--){
      for(int j=1;j<=i;j++){
          printf("%d",j);
      }
      printf(" \n");

  }
  return 0;
}