#include <iostream>  
using namespace std;  
int primo (int);
int main(){  
  int n;  
         cout<<"Ingrese numero"<<endl;  
         cin>>n;  
         primo ( n);
         
    return 0;  
}  
int primo (int n)
{
	 int a=0;
	for(int i=1;i<(n+1);i++){  
         if(n%i==0){  
             a++;  
            }  
         }  
         if(a!=2){  
              cout<<"No es Primo !";  
            }else{  
                cout<<"Si es Primo!";  
         }  
}
