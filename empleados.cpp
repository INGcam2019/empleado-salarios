#include<iostream>
using namespace std;
int salario[50];
int pagoFinal[50];


string  pedir_Datos(string datos[][5],int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		for (int j=0;j<4;j++){
			cout<<"ingrese cedula, nombre , celular y puesto del trabajador"<<i+1<<endl;
			//cin.ignore();
			//cin>>datos[i][j];
			getline(cin, datos[i][j]);
		
		}
		cout<<"ingrese el salario del trabajador "<<i+1<<endl;
			cin>>salario[i];
		cout<<endl;
	}
	system("pause");
	return datos[0][0];
}

int datos_sueldo(int dato_sueldo[][4],int n){
		for(int i=0;i<n;i++){
			
			cout<<"ingrese el valor en pesos de horas extras,descuentos,ahorro y seguridad social del trabajador"<<i+1<<endl;
		cin.ignore();
		for (int j=0;j<4;j++){
			//cin.ignore();
			cin>>dato_sueldo[i][j];
		//	getline(cin, dat[i][j]);
		
		}
		cout<<endl;
	}
	system("pause");
	return dato_sueldo[0][0];

}

void arreglo_sueldos(int dato_sueldo[][4],int n){
	int horas,prestamos,ahorro,seguridad;
	for(int i=0;i<n;i++){
		for (int j=0;j<4;j++){
		
			if(dato_sueldo[i][j]==dato_sueldo[i][0]){
				horas=dato_sueldo[i][0];	
			}
			if(dato_sueldo[i][j]==dato_sueldo[i][1]){
				prestamos=-dato_sueldo[i][1];	
			}
			if(dato_sueldo[i][j]==dato_sueldo[i][2]){
				ahorro=dato_sueldo[i][2];	
			}
			if(dato_sueldo[i][j]==dato_sueldo[i][3]){
				seguridad=dato_sueldo[i][3];	
			}
			pagoFinal[i]=horas+prestamos+ahorro+seguridad;
			
		}
		cout<<endl;
		
	}

}


void mostrar(string datos[][5],int n){
	
		cout<<"--------------------------------------------------------------------------"<<endl;
		cout<<"   nombre   "<<"salario final"<<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		for(int i=0;i<n;i++){
		for (int j=0;j<4;j++){
			if(datos[i][j]==datos[i][1]){
			
			cout<<datos[i][1]<<" | ";
			cout<<salario[i]-pagoFinal[i];
			}
			
		}
		
		cout<<endl;
		
		cout<<"--------------------------------------------------------------------------"<<endl;
	}
	
	
}

int main(){

int cantidad;


cout<<"ingrese la cantidad de empleados a registrar"<<endl;
cin>>cantidad;
string datos [cantidad][5];
int dato_sueldo[cantidad][4];
	pedir_Datos(datos,cantidad);

	datos_sueldo(dato_sueldo,cantidad);
	arreglo_sueldos(dato_sueldo,cantidad);
	mostrar(datos,cantidad);	
	
}