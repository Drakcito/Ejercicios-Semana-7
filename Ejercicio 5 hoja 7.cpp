#include<iostream>
using namespace std;

int main() {
    char usuario, servicio;
    int hora;
    short contarp = 0, contara = 0, contard = 0;
    short madrugada = 0, manhana = 0, tarde = 0, noche = 0;
    short cpersonal = 0, c_academico = 0, cadmin = 0;
    do{
        do {
            cout << "\nIngrese tipo de usuario (P: Profesor; A: Alumno: D: Administrativo): ";
            cin >> usuario;
            usuario = toupper(usuario);
        } while (usuario != 'D' && usuario != 'A' && usuario != 'P' && usuario != 'X');
        if (usuario != 'X') {
            do {
                cout << "Hora de acceso(0 a 23): ";
                cin >> hora;
            } while (hora < 0 || hora>23);
            do {
                cout << "Tipo de servicio (P: Personal; A: Académico; D: Administrativo): ";
                cin >> servicio;
                servicio = toupper(servicio);
            } while (servicio != 'P' && servicio != 'A' && servicio != 'D');
            if (usuario == 'P') contarp++;
            if (usuario == 'A') contara++;
            if (usuario == 'D') contard++;

            if (hora >= 0 && hora <= 5) {
                madrugada++;
            }
            else if (hora >= 6 && hora <= 12) {
                manhana++;
            }
            else if (hora >= 13 && hora <= 17) {
                tarde++;
            }
            else if (hora >= 18 && hora <= 23) {
                noche++;
            }
            if (servicio == 'P')cpersonal++;
            if (servicio == 'A')c_academico++;
            if (servicio == 'D')cadmin++;
        }
    } while (usuario!='X');

    cout << "\nLos resultados son: \n";
    cout << "---------------------\n";
    cout << "Profesores: " << contarp << endl;
    cout << "Alumnos: " << contara << endl;
    cout << "Administrativos: " << contard << endl;

    if (madrugada > manhana && madrugada > tarde && madrugada > noche) {
        cout << "En la MADRUGADA se tuvieron mas accesos\n";
    }
    else if (manhana > madrugada && manhana > tarde && manhana > noche) {
        cout << "En la MAÑANA se tuvieron mas accesos\n";
    }
    else if (tarde > madrugada && tarde > manhana && tarde > noche) {
        cout << "En la TARDE se tuvieron mas accesos\n";
    }
    else if (noche > madrugada && noche > manhana && noche > tarde) {
        cout << "En la NOCHE se tuvieron mas accesos\n";
    }

    if (cpersonal > c_academico && cpersonal > cadmin) {
        cout << "Predominan los servicios de Personal\n";
    }
    else if (c_academico > cpersonal && c_academico > cadmin) {
        cout << "Predominan los servicios de Academico\n";
    }
    else if(cadmin > cpersonal && cadmin > c_academico) {
        cout << "Predominan los servicios de Administrativo\n";
    }
    else if (cpersonal == c_academico && cadmin == cpersonal) {
        cout << "Empate de servicios";
    }
    return 0;
}