#include <iostream>
#include <string>  
using namespace std;

int main(){

int x=0,c=0,sum=0;

    cout << "Input the number of elements to store in the array : ";
    
        cin >> x;

    cout << "Input " << x <<" numbers of elements in the array: \n" ;

    int array[x];
        while(c<x){
            cout << "Element " << c << ": " ;
            cin >> array[c];
            c++;
        }

      cout <<"The values store into the array are : ";
        c=0;

        while(c<x){
            cout << array[c] << " ";
            c++;
        }

        cout << "\nThe values store into the array in reverse are : ";
        c=x-1;
        
        while(c>=0){
            cout << array[c] << " ";
            sum=sum+array[c];
            c--;
            }
        cout << "\nThe the sum of the array is: " << sum;       
        
    return 0;
}

