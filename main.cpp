/* Tp3 - Juego
 * Alejo Zito
 * 27/4/15
 */

#include <iostream>
using namespace std;
string tema1="[1]Geografía ", tema2="[2]Música ", tema3="[3]Cine ";
string opcionesTemas= tema1+tema2+tema3+"\n";
int puntaje=0;
int finTema;
int eleccion;
int respuesta;
int terminar=0;

// Funciones
// Temas
void temaGeografia(){
    cout << "¿Cuál es el código internacional para Cuba? \n [1]CA [2]CU [3]CB [4]CL "<< endl;
    cin >> respuesta;
    if (respuesta==2){
        cout << "¡Correcto! \n";
        puntaje+=1;
    } else {
        cout << "Incorrecto \n";
    }
    cout << "¿En qué país situarías la ciudad de Cali? [1]Colombia [2]Cuba [3]Venezuela [4]Brasil \n ";
    cin >> respuesta;
    if (respuesta==1){
        cout << "¡Correcto! \n";
        puntaje+=1;
    } else {
        cout << "Incorrecto \n";
    }
    terminar=0;
}
void temaMusica(){
    cout << "¿Qué Beatle compuso la canción 'Let it Be'? \n [1]Ringo Star [2]John Lennon [3]George Harrison [4]Paul McCartney "<< endl;
    cin >> respuesta;
    if (respuesta==4){
        cout << "¡Correcto! \n";
        puntaje+=1;
    } else {
        cout << "Incorrecto \n";
    }
    cout << "¿Qué tipo de instrumento es la marimba? \n [1]Idiófono [2]Aerófono [3]Cordófono [4]Membranófono \n ";
    cin >> respuesta;
    if (respuesta==1){
        cout << "¡Correcto! \n";
        puntaje+=1;
    } else {
        cout << "Incorrecto \n";
    }
    terminar=0;
}
void temaCine(){
    cout << "¿Qué historiador argentino interpreta un personaje en el largometraje 'La Patagonia Rebelde'? \n [1]Felipe Pigna [2]Pacho O'Donnell [3]Osvaldor Bayer [4]Domingo Faustino Sarmiento "<< endl;
    cin >> respuesta;
    if (respuesta==3){
        cout << "¡Correcto! \n";
        puntaje+=1;
    } else {
        cout << "Incorrecto \n";
    }
    cout << "¿Cuál fue el primer film realizado por los hermanos Lumiere? \n [1]La llegada del tren [2]La salida de la fábrica [3]El viaje a la luna [4]El mago de Oz \n";
    cin >> respuesta;
    if (respuesta==2){
        cout << "¡Correcto! \n";
        puntaje+=1;
    } else {
        cout << "Incorrecto \n";
    }
    terminar=0;
}
// Fin Temas
void elegirTema(){
    cout << opcionesTemas;
    cin >> eleccion;
    if (eleccion==1){
        temaGeografia();
    }
    else if (eleccion==2){
        temaMusica();
    }
    else if (eleccion==3){
        temaCine();
    }
}
// Fin Funciones

int main() {
    cout << "Bienvenido al juego de las preguntas. Para empezar elija un tema.\n";
    while (terminar!=2) {
        elegirTema();
        cout << "No hay más preguntas de este tema, seleccione una de las siguientes opciones: \n [1]Elegir otro tema [2]Terminar juego"<< endl;
        cin >> terminar;
    }
    cout << "El juego ha terminado. Su puntaje es: " << puntaje;
    return 0;
}
