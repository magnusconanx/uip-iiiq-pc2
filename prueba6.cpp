#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;
main ()
{

int i;
int j;
int n;
float x[80];
float y[80];
float xinpol;
float yinpol = 0;
float pronum, prod;
int opcion;

system ("color 8B" );
cout<< ("\t******************************************* ") <<endl;
cout<< ("\t******************************************* ") <<endl; 
cout << "\t****METODO DE INTERPOLACION DE LAGRANGE****" <<endl;
cout<< ("\t******************************************* ") <<endl;
cout<< ("\t******************************************* ") <<endl;
  do
    {
        cout<<( "\n   1. conoser sobre el metodo de lagrange");
        cout<<( "\n   2. calculadora de lagrange");
        cout <<( "\n   3. Salir." );

 do
        {
        	
            cout<<( "\n   Introduzca una opcion: ");
            cin >> opcion;

        } while ( opcion < 1 || opcion > 3 );


        switch ( opcion )
        {
            case 1:	system("cls");
            
            		cout<< ("\t******************************************* ") <<endl;
					cout<< ("\t******************************************* ") <<endl; 
					cout << "\t****METODO DE INTERPOLACION DE LAGRANGE****" <<endl;
					cout<< ("\t******************************************* ") <<endl;
					cout<< ("\t******************************************* ") <<endl;
					cout<< (" ") <<endl; 
            		cout<< (" ") <<endl; 
					cout<< ( " En los problemas de optimizacion, el metodo de los multiplicadores de Lagrange,") <<endl;
					cout<< ("llamados asi en honor a Joseph Louis Lagrange, es un procedimiento para encontrar") <<endl;
					cout<< ("los maximos y minimos de funciones de multiples variables sujetas a restricciones.") <<endl; 
					cout<< ("Este método reduce el problema restringido con n variables a uno sin restricciones") <<endl; 
					cout<< ("de n + k variables, donde k es igual al número de restricciones, y cuyas ecuaciones") <<endl;
					cout<< ("pueden ser resueltas mas facilmente. Estas nuevas variables escalares desconocidas,") <<endl;
					cout<< ("una para cada restriccion, son llamadas multiplicadores de Lagrange. El metodo dice") <<endl;
					cout<< ("que los puntos donde la funcion tiene un extremo condicionado con k restricciones,") <<endl;
					cout<< ("estan entre los puntos estacionarios de una nueva función sin restricciones construida") <<endl;
					cout<< ("como una combinación lineal de la funcion y las funciones implicadas en las restricciones,") <<endl;
					cout<< ("cuyos coeficientes son los multiplicadores.") <<endl;
					cout<< (" ") <<endl; 
                    
                    break;
                    system("cls");

            case 2:
					system("cls");
            
            		cout<< ("\t******************************************* ") <<endl;
					cout<< ("\t******************************************* ") <<endl; 
					cout << "\t****METODO DE INTERPOLACION DE LAGRANGE****" <<endl;
					cout<< ("\t******************************************* ") <<endl;
					cout<< ("\t******************************************* ") <<endl; 
                  	cout<< (" ") <<endl; 
					cout << "indique cantidad de puntos de n" <<endl;
					cout<< (" ") <<endl; 
	cin >> n;
	cout <<"ingrese el valor de x" <<endl;
		cout<< (" ") <<endl; 
		
	for(int i=0; i<n; i++){
 	cin>>x[i];
}
 
      cout<<endl;
		
	cout <<"ingrese el valor de y" <<endl;
		for(int i=0; i<n; i++){
              cin>>y[i];
 
}
	 	
		cout << "indique valor de X ha evaluar" <<endl;
			cin>>xinpol;
			//xinpol =ninterpolacion de X
			
			
//primer orden, desarrollo de la interpolacion

for (i=1;i<=n; i++)
{
	pronum=1;
	prod=1;
	
	for (j=1;j<=n;j++)
	{
	if (i !=j)
		{ 
			//L(x)=(x0-x2)(x-x3)/(x1-x2)(x1-x3)
			pronum = pronum *(xinpol-x[j]);
			prod = prod*(x[i]-x[j]);
		}	
	}
	yinpol = yinpol + (pronum/prod) * y[i];
}
	cout <<"\n La interpolacion de Y es: " <<yinpol <<endl;
	 break;
	 
}
	system("PAUSE");
} while ( opcion != 3 );

}
