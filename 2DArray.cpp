//programme to dynamically create 2d array 
#include<iostream>

#include <bits/stdc++.h>

#include<string>

using namespace std ;
int** create2dArray(int rows , int columns){
    //created an array of pointer pointing to each row 
    int ** arr = new int*[rows];
    //creating arrays for each column
    for (int i = 0; i < rows; i++)
    {
        arr[i]= new int[columns]; 
    }
    //assigning values 
    int value = 0 ;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j <columns; j++){
            arr[i][j]= value;
            value++;
        } }
return arr;
    
    
}
 
     int main(){
int r , c ; 
cin>>r>>c;
int **arr = create2dArray(r,c);
 for (int i = 0; i < r; i++){
        for (int j = 0; j <c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
         }
     return 0 ;
}