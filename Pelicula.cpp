#include "Pelicula.h"

Pelicula::Pelicula() {}

Pelicula::Pelicula(int _id, string _nombre, string _duracion, string _genero,
                   float _calificacion)
    : Video(_id, _nombre, _duracion, _genero, _calificacion) {}

void Pelicula::informacion() const {
  cout << "Información de la pelicula." << endl
       << "ID: " << getId() << endl
       << "Nombre: " << getNombre() << endl
       << "Duracion: " << getDuracion() << endl
       << "Género: " << getGenero() << endl
       << "Calificación: " << getCalificacion() << endl;
}

void Pelicula::calificacionUsuario() {
  cout << "Ingresa la calificación de la pelicula: " << getNombre()
       << "(0 al 5). " << endl
       << endl;
  setCalificacionNueva();
  while (getCalificacionNueva() < 0 || getCalificacionNueva() > 5) {
    cout << "Por favor ingrese una calificación válida." << endl;
    setCalificacionNueva();
  }
  *ptrCalificacion = (getCalificacion() + getCalificacionNueva()) / 2;
  cout << endl
       << "Nueva calificacion promediada: " << getCalificacion() << endl;
}