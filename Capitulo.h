#ifndef _CAPITULO_H
#define _CAPITULO_H
#include "Serie.h"

class Capitulo : public Serie {
private:
  int temporada;

public:
  Capitulo();
  Capitulo(int _id, string _nombre, string _duracion, string _genero,
           float _calificacion, int _temporada);
  int getTemporada() const;
  void informacion() const override;
  void calificacionUsuario() override;
};
#endif