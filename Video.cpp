#include "Video.h"

Video::Video() {
  id = 0;
  nombre = "-";
  duracion = "-";
  genero = "-";
  calificacion = 0;
  calificacionNueva = 0;
  ptrCalificacion = &calificacion;
}

Video::Video(int _id, string _nombre, string _duracion, string _genero,
             float _calificacion) {
  id = _id;
  nombre = _nombre;
  duracion = _duracion;
  genero = _genero;
  calificacion = _calificacion;
  ptrCalificacion = &calificacion;
}

int Video::getId() const { return id; }

float Video::getCalificacion() const { return *ptrCalificacion; }

float Video::getCalificacionNueva() const { return calificacionNueva; }

void Video::setCalificacionNueva() { cin >> calificacionNueva; }

string Video::getNombre() const { return nombre; }

string Video::getDuracion() const { return duracion; }

string Video::getGenero() const { return genero; }

void Video::calificacionUsuario() {
  cout << "Ingresa la calificación del video (0 al 5). " << endl << endl;
  setCalificacionNueva();
  while (getCalificacionNueva() < 0 || getCalificacionNueva() > 5) {
    cout << "Por favor ingrese una calificación válida." << endl;
    setCalificacionNueva();
  }
  *ptrCalificacion = (calificacion + calificacionNueva) / 2;
  cout << endl
       << "Nueva calificacion promediada: " << getCalificacion() << endl;
}

bool Video::operator>(Video &otra) { return calificacion > otra.calificacion; }