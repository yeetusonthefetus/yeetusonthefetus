#include <stdio.h>
#include <math.h>


int macs( int w1,int w2){
    if (w1>w2){
        return w1;
    }
    else {
        return w2;
    }

}

int main(){
   
   int n1,n2,n3;
   printf("Enter number1,number2,number3 :");
   scanf("%d,%d,%d",&n1,&n2,&n3);
   int n12=macs(n1,n2);
   int n13=macs(n1,n3);
   int n23=macs(n2,n3);

   if (n12==n1 && n13==n1){
       printf("Number 1 is greatest\n");
   }
   else if (n12==n2 && n23==n2){
       printf("Number 2 is greatest\n");
   }
   else {
       printf("Number 3 is greatest\n");
   }

   return 0;
}

