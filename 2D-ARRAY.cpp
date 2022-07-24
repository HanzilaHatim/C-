using namespace std;

#include<iostream>

int main() {


int a[3][3];
int b[3][3];
int c[3][3];

int n=1;
int m=11;



for(int i=0;i<3;i++){
	
	for(int j=0;j<3;j++){
		
		a[i][j] =n;
		n++;
	}
	
}

cout<<"Value of array A:\n";
for(int i=0; i<3 ;i++){
	
	for(int j=0; j<3 ; j++){
		
		cout<<a[i][j]<<" ";
		
		
	}
	
	cout<<"\n";
	}

for(int i=0; i<3 ; i++){
 	
 	for(int j=0; j<3; j++){
 		
 		b[i][j]= m;
 		m++;
	}
 }
cout<<"Value of array B:\n";
 for(int i=0; i<3; i++){
 	
 	for(int j=0; j<3; j++){
 		
 		cout<<b[i][j]<<" ";
 		
	 }
	 cout<<"\n";
 }
 
 for(int i=0;i<3; i++){
 	
 	for(int j=0;j<3; j++){
 		
 		c[i][j] = a[i][j] + b[i][j];
	 }
 }
 
 cout<<"SUM OF ARRAY A+B:\n";
 for (int i=0; i<3; i++){
 	
 	for(int j=0; j<3; j++){
	 
 	cout<<c[i][j]<<" ";
 	}
 	cout<<"\n";
 }

 }
