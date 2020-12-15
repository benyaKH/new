#include<iostream>
using namespace std;

int main(){
	int number = 1 ;
	int Even = 0 ;
    int odd = 0 ;
    while(number != 0){
    	cout << "Enter an integer: " ;
    	cin >> number ;
    	if( number%2 == 0){
			Even++ ;
		}
		else{
			odd++ ;
		}
}

	cout << "#Even numbers = " << Even-1 << "\n" ;
    cout << "#Odd numbers = " << odd ;
	
    return 0;
}