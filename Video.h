#include <iostream>
using namespace std;
#ifndef _VIDEO_H_
#define _VIDEO_H_

class Video {
protected:
  int id;
  float calificacion, calificacionNueva;
  string nombre, genero, duracion;

public:
  Video();
  Video(int, string, string, string, float);
  int getId() const;
  float getCalificacion() const;
  float *ptrCalificacion;
  float getCalificacionNueva() const;
  void setCalificacionNueva();
  string getNombre() const;
  string getDuracion() const;
  string getGenero() const;
  virtual void informacion() const = 0;
  virtual void calificacionUsuario();
  bool operator>(Video &otra);
};
#endif