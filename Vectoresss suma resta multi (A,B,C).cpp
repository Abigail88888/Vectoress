#include<bits/stdc++.h>
using namespace std;
vector<int>GenerarVector(vector<int>A, int n);
vector<int>MayorPromedio(vector<int>B, float promedio);
vector<int>MultiplicarElementosDos(vector<int>A);
int MultiplosTresyDos(vector<int>A);
int SumarElementos(vector<int>A);
float Promedio(vector<int>A, int suma);
void MostrarVector(vector<int>A);
int main()
{
	int A,B,C,n,suma;
	int contador;
	float promedio;
	vector<int>A;
	vector<int>B;
	vector<int>C;
	A=GenerarVector(A,n);
	suma=SumarElementos(A);
	promedio=Promedio(A,suma);
	B=MayorPromedio(A,promedio);
	C=MultiplicarElementosDos(A);
	contador=MultiplosTresyDos(A);
	
	Mostrarvector(A);
	Mostrarvector(B);
	Mostrarvctor(C);
	
	cout<<"Ingrese la camntidad de elementos del vector"<<endl;
	cin>>n;
	return 0;
}
vector<int>GenerarVector(vector<int>A, int n){
	int i,e;
	for(i=0; i<n; i++)
	{
	srand(time(NULL));
	e=rand%()3200;
	A.push_back(e); 
}
	return A;
}
int SumarElementos(vector<int>A){
	int i;
	for(i=0; i<A.size(); i++){
		suma+=A[i];
	}
	return suma;
	}
float Promedio(vector<int>A, int suma){
	promedio=suma/A.size();
	return promedio;
	}
vector<int>MayorPromedio(vector<int>B, float promedio){
	vector<int>B;
	for(i=0; i<B.size(); i++){
		if(promedio>B[i]){
			e=B[i];
			B.push_back(e);
		}
	}
	return B;
}
vector<int>MultiplicarElementosDos(vector<int>A){
	vector<int>C;
	for(i=0; i<A.size(); i++){
		C[i]=A[i]*2;
	}
	return C;
}
int MultiplosTresyDos(vector<int>A){
	int i;
	int contador=0;
	for(i=0; i<A.size(); i++){
		A[i]%2==0; && A[i]%3==0;
	}
	contador++; 
	return contador;
}
void MostrarVector(vector<int>A){
int i;
for(i=0; i<A.size(); i++){
	cout<<A[i]<<endl;
}	
cout<<endl;
}
}