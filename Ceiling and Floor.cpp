#include<iostream>
using namespace std;
int main(){
	float a;
	int b;

	cout<<"Enter integer value: ";
	cin>>a;
	b=a;

	 if(a<0){
	cout<<"Floor value of integer "<<a<<" is :"<<b-1<<endl;
	cout<<"Ceiling value of integer "<<a<<" is :"<<b<<endl;
     }
 if(a!=b && a>0){
	
	cout<<"Floor value of integer "<<a<<" is :"<<b<<endl;
	cout<<"Ceiling value of integer "<<a<<" is :"<<b+1<<endl;
    }
 if(a==b){
	cout<<"Floor value of integer "<<a<<" is :"<<b<<endl;
	cout<<"Ceiling value of integer "<<a<<" is :"<<b<<endl;
	
}

return 0;
}