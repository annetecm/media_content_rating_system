#ifndef _SERIE_H
#define _SERIE_H
#include "Video.h"

class Serie : public Video {
public:
  Serie();
  Serie(int, string, string, string, float);
  void informacion() const override;
  void calificacionUsuario() override;
};
#endif