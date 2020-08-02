#include<iostream>
#include<string>
using namespace std ;
int tran(int a , int b) ;

int main()
{     int a, b ;

   cout<<"Enter a number : ";
       cin>> a ;

	cout<<"Enter b number : ";
       cin>> b ;

	   tran( a , b) ;

	return 0 ;
}

int tran( int a , int b)
{		cout<< " Largest : " << ((a > b ) ? a : b ) << endl;
		  cout<< " Smallest : " << ((a < b ) ? a : b ) << endl;
		  return (a,b) ;
}