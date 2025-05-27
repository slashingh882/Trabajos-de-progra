#include <iostream> // con getline y cin.ignore() corta la primera letra
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    struct Estudiante {
        string nombre;
        int edad;
        int calificaciones[3]; // Array para calificaciones de 3 materias
        int asist;
        float promedio;
        float porcentajea;
    };




    

    int numEstu,t,suma=0,ap=0,menu=0;// numEetu=Número de estudiantes a almacenar y ap=alumnos en peligro academico
    t=0; 
    numEstu=0;

   Estudiante estudiantes[3];

do{

cout<<"hola este es un programa que permite guardar los datos de 3 alumnos y consultar estos datos.....\n(1)leer datos\n(2)consultar los datos\n(3)salir del programa\neliga una opcion por favor...";
cin>>menu;



//----------------------------------------------------------------------------------------------------------------------------------------------------------


if(menu==1){
 do{
     cout << "Ingresa la cantidad de estudiantes(maximo 3): ";
    cin >> numEstu;
    if(0>=numEstu){cout<<"no se aceptan valores negativos o 0 teclee denuevo...\n"; numEstu=6;}else{if(numEstu>3){cout<<"valor mayor a 5 teclee de nuevo...\n";}}
    system("pause");
    system("cls");
    cin.ignore(); // Limpiar buffer
}while(numEstu>3);
    



      // Ingreso de datos para cada estudiante
    for (int i = 0; i < numEstu; i++) {


        cout << "\nIngresa los datos del estudiante #" << i + 1 << ":\n";
        cout << " Nombre: ";
        getline(cin, estudiantes[i].nombre);
       


        cout << " Edad: ";
        cin >> estudiantes[i].edad;




// Ingresamos las asistencias
        cout << "Ingresa tus asistencias(0-20):\n";
        


do{
            cout << " Asistencias: ";
            cin >> estudiantes[i].asist;
             if(0>estudiantes[i].asist){cout<<"no se aceptan valores negativos teclee denuevo...\n";t=0;system("pause");system("cls");}else{if(estudiantes[i].asist>20){t=0;cout<<"valor mayor a 20 teclee de nuevo...\n";system("pause");system("cls");}else{t=1;}}
        }while(t!=1);






        // Ingresamos las calificaciones
        cout << "Ingresa las calificaciones de 3 materias(0-100):\n";
        for (int j = 0; j < 3; j++) {


do{
            cout << " Calificación #" << j + 1 << ": ";
            cin >> estudiantes[i].calificaciones[j];
             if(0>estudiantes[i].calificaciones[j]){cout<<"no se aceptan valores negativos teclee denuevo...\n";t=0;system("pause");system("cls");}else{if(estudiantes[i].calificaciones[j]>100){t=0;cout<<"valor mayor a 100 teclee de nuevo...\n";system("pause");system("cls");}else{t=1;}}
        }while(t!=1);
    
    }

        cin.ignore(); // Limpia el buffer de entrada fflush(stdin);
    }

    cout<<"datos capturados exitosamente...";
    system("pause");
    system("cls");

    
}



//----------------------------------------------------------------------------------------------------------------------------------------------------------


switch (menu) {
case 1:
break;

//----------------------------------------------------------------------------------------------------------------------------------------------------------

case 2:

if(numEstu>0){
   
    // Mostramos la información de todos los estudiantes
    cout << "\nInformación de los estudiantes:\n";
    for (int i = 0; i < numEstu; i++) {
        cout << "\nEstudiante #" << i + 1 << ": ";
        cout << "Nombre: " << estudiantes[i].nombre << " ";
        cout << "Edad: " << estudiantes[i].edad << " ";


        if(estudiantes[i].asist==0){cout << "Asistencias: 0" << "% ";}else{cout << "Asistencias: " << estudiantes[i].asist/0.2 << "% ";}
        
        
        cout << "Calificaciones: ";


        for (int j = 0; j < 3; j++) {
            cout << estudiantes[i].calificaciones[j] << " ";
            suma=suma+estudiantes[i].calificaciones[j];
        }
        cout << "Promedio: " << suma/3 << " ";
        if((suma/3)<70){cout<<"--->en situacion de riesgo academico por promedio"; } else{
            if((estudiantes[i].asist/0.2)<80){}else{cout<<"--->todo bien siga asi :)";}
        }
       if((estudiantes[i].asist/0.2)<80){cout<<"--->en situacion de riesgo academico por inasistencia";}
        if((estudiantes[i].asist/0.2)<80 or (suma/3)<70 ){ap=ap+1;}
        cout << "\n";
        suma=0;
    }

}else{
cout<<"aun no has capturado ningun dato...\n";
    system("pause");
    system("cls");
    break;
}

    system("pause");
    system("cls");
    break;


//----------------------------------------------------------------------------------------------------------------------------------------------------------

    case 3:
    cout<<"gracias por usar el programa :)...";
    system("pause");
    system("cls");
    break;

}

}while(menu!=3);
    return 0;
}
