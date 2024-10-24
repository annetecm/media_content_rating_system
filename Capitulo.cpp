#include "Capitulo.h"

Capitulo::Capitulo() { temporada = 0; }

Capitulo::Capitulo(int _id, string _nombre, string _duracion, string _genero,
                   float _calificacion, int _temporada)
    : Serie(_id, _nombre, _duracion, _genero, _calificacion) {
  temporada = _temporada;
}

int Capitulo::getTemporada() const { return temporada; }
void Capitulo::informacion() const {
  cout << "Información del capitulo." << endl
       << "ID: " << getId() << endl
       << "Nombre: " << getNombre() << endl
       << "Duracion: " << getDuracion() << endl
       << "Temporada: " << getTemporada() << endl
       << "Calificación: " << getCalificacion() << endl;
}

void Capitulo::calificacionUsuario() {
  cout << "Ingresa la calificación de: " << getNombre() << "(0 al 5). " << endl
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