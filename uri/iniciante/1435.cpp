#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
   int n, i, j;
   cin>>n;
   while(n!=0){
      int mat[n][n], p=1, c=0, k=0, f=n;
      
      for(int c=0; k<n;c++){
         i=c; while(i<f){
            j=c; while(j<f){
               mat[i][j]=p;
            j++;}
         i++;}
      p++;f--;k++;}
      
      i=0; while(i<n){
         j=0; while(j<n){
             if(mat[i][j]<10){
                 cout<<" ";
             }
            cout<<" "<< mat[i][j];
            // if (j==(n)){
            //     cout<<" ";
            // }
            
			if (j<(n-1)){
				cout<<" ";}
			j++;}
         cout<<endl;
      i++;}
    cout<<endl;
    cin>>n;
   }
   
}

