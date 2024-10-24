#ifndef _PELICULA_H
#define _PELICULA_H
#include "Video.h"

class Pelicula : public Video {
public:
  Pelicula();
  Pelicula(int, string, string, string, float);
  void informacion() const override;
  void calificacionUsuario() override;
};
#endif