#include "Capitulo.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Video.h"

string seleccion;
Pelicula pelicula1(10491, "Los increibles", "1:55", "Infantil/Acción", 4.3);
Pelicula pelicula2(10492, "Intensa-mente", "1:35", "Infantil/Comedia", 4.4);
Pelicula pelicula3(10493, "Soul", "1:40", "Infantil/Fantasía", 4.1);
Serie serie1(10494, "Invencible", "2 temporadas", "Misterio/Acción", 4.8);
Serie serie2(10495, "The boys", "4 temporadas", "Drama", 4.6);
Serie serie3(10496, "Fallout", "1 temporada", "Drama", 4.7);
Capitulo capitulo11(10497, "Capitulo 1: Ya era hora", "0:45", "Acción", 3.9, 1);
Capitulo capitulo12(10498, "Capitulo 7: Tenemos que hablar", "0:48",
                    "Misterio/Acción", 4.9, 1);
Capitulo capitulo13(10499, "Capitulo 5: Esto te va a sorprender", "0:48",
                    "Misterio/Acción", 4.3, 2);
Capitulo capitulo21(10500, "Capitulo 4: The female of the species", "1:02",
                    "Misterio/Acción", 3.8, 1);
Capitulo capitulo22(10501, "Capitulo 2: The only man in the sky", "0:59",
                    "Drama", 4.0, 3);
Capitulo capitulo23(10502, "Capitulo 8: Assassination ruin", "1:01", "Drama",
                    4.4, 4);
Capitulo capitulo31(10503, "Capitulo 3: La cabeza", "1:00", "Drama", 4.2, 1);
Capitulo capitulo32(10504, "Capitulo 6: La trampa", "0:55", "Drama", 4.5, 1);
Capitulo capitulo33(10505, "Capitulo 8: El comienzo", "1:10", "Drama", 4.9, 1);

void menu() {
  cout << "---------------------------------------------" << endl;
  cout << "Bienvenido a la plataforma de ratings Tec+." << endl;
  cout << "---------------------------------------------\n";
  cout << endl << "¿A qué desea acceder?\n" << endl;
  cout << "1. Peliculas" << endl;
  cout << "2. Series" << endl;
  cout << "3. Salir\n" << endl;
}

void mostrarMejorPelicula(Pelicula &p1, Pelicula &p2, Pelicula &p3) {
  Pelicula *mejor = &p1;

  if (p2 > *mejor) {
    mejor = &p2;
  }
  if (p3 > *mejor) {
    mejor = &p3;
  }

  cout << "La mejor película es: " << mejor->getNombre()
       << " con una calificación de " << mejor->getCalificacion() << endl;
}

void mostrarMejorSerie(Serie &s1, Serie &s2, Serie &s3) {
  Serie *mejor = &s1;

  if (s2 > *mejor) {
    mejor = &s2;
  }
  if (s3 > *mejor) {
    mejor = &s3;
  }

  cout << "La mejor serie es: " << mejor->getNombre()
       << " con una calificación de " << mejor->getCalificacion() << endl;
}

void menuPeliculas() {
  cout << "---------------------------------------------" << endl
       << "Accediste a la sección de peliculas." << endl;
  cout << "---------------------------------------------\n" << endl;
  cout << "Selecciona una pelicula (1-3): \n" << endl;
  cout << "1." << pelicula1.getNombre() << endl;
  cout << "2." << pelicula2.getNombre() << endl;
  cout << "3." << pelicula3.getNombre() << endl;
  cout << endl << "4. Ver pelicula mejor calificada" << endl;
  cout << "5. Volver al menu principal" << endl << endl;
  cin >> seleccion;
  cout << endl;
  if (seleccion == "1") {
    cout << endl;
    pelicula1.informacion();
    cout << endl << "Desea calificar esta pelicula? (S/N)" << endl << endl;
    cin >> seleccion;
    cout << endl;
    if (seleccion == "S" || seleccion == "s") {
      pelicula1.calificacionUsuario();
      cout << "Saliendo..." << endl;
      menuPeliculas();
    } else if (seleccion == "N" || seleccion == "n") {
      cout << "Saliendo..." << endl;
      menuPeliculas();
    } else {
      cout << "Por favor ingrese una respuesta valida." << endl;
      menuPeliculas();
    }
  } else if (seleccion == "2") {
    pelicula2.informacion();
    cout << endl << "Desea calificar esta pelicula? (S/N)" << endl << endl;
    cin >> seleccion;
    cout << endl;
    if (seleccion == "S" || seleccion == "s") {
      pelicula2.calificacionUsuario();
      cout << "Saliendo..." << endl;
      menuPeliculas();
    } else if (seleccion == "N" || seleccion == "n") {
      cout << "Saliendo..." << endl;
      menuPeliculas();
    } else {
      cout << "Por favor ingrese una respuesta valida." << endl;
      menuPeliculas();
    }
  } else if (seleccion == "3") {
    pelicula3.informacion();
    cout << endl << "Desea calificar esta pelicula? (S/N)" << endl << endl;
    cin >> seleccion;
    cout << endl;
    if (seleccion == "S" || seleccion == "s") {
      pelicula3.calificacionUsuario();
      cout << "Saliendo..." << endl;
      menuPeliculas();
    } else if (seleccion == "N" || seleccion == "n") {
      cout << "Saliendo..." << endl;
      menuPeliculas();
    } else {
      cout << "Por favor ingrese una respuesta valida." << endl;
      menuPeliculas();
    }
  } else if (seleccion == "4") {
    mostrarMejorPelicula(pelicula1, pelicula2, pelicula3);
    menu();
  } else if (seleccion == "5") {
    cout << "Volviendo al menu principal..." << endl;
    menu();
  } else {
    cout << "Por favor ingrese una opción válida." << endl;
    menuPeliculas();
  }
}

void menuCapitulos() {
  cout << "---------------------------------------------" << endl
       << "Capitulos: " << endl;
  cout << "---------------------------------------------\n" << endl;
  cout << "Selecciona un capitulo (1-3): \n" << endl;
}

void menuSeries() {
  cout << "---------------------------------------------" << endl
       << "Accediste a la sección de series." << endl;
  cout << "---------------------------------------------\n" << endl;
  cout << "Selecciona una serie (1-3): \n" << endl;
  cout << "1." << serie1.getNombre() << endl;
  cout << "2." << serie2.getNombre() << endl;
  cout << "3." << serie3.getNombre() << endl;
  cout << endl << "4. Ver serie mejor calificada" << endl;
  cout << "5. Volver al menu principal" << endl;
  cin >> seleccion;
  cout << endl;
  if (seleccion == "1") {
    cout << endl;
    serie1.informacion();
    cout << endl << "¿Qué desea hacer?" << endl << endl;
    cout << "1.Calificar serie" << endl;
    cout << "2.Ver capitulos" << endl << endl;
    cin >> seleccion;
    if (seleccion == "1") {
      serie1.calificacionUsuario();
      cout << "Saliendo..." << endl;
      menuSeries();
    } else if (seleccion == "2") {
      menuCapitulos();
      cout << "1. " << capitulo11.getNombre() << endl;
      cout << "2. " << capitulo12.getNombre() << endl;
      cout << "3. " << capitulo13.getNombre() << endl << endl;
      cin >> seleccion;
      if (seleccion == "1") {
        capitulo11.informacion();
        cout << endl << "Desea calificar este capitulo? (S/N)" << endl << endl;
        cin >> seleccion;
        cout << endl;
        if (seleccion == "S" || seleccion == "s") {
          capitulo11.calificacionUsuario();
          cout << "Saliendo..." << endl;
          menuSeries();
        } else if (seleccion == "N" || seleccion == "n") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          if (seleccion != "S" || seleccion != "s" || seleccion != "N" ||
              seleccion != "n") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      } else if (seleccion == "2") {
        capitulo12.informacion();
        cout << endl << "Desea calificar este capitulo? (S/N)" << endl << endl;
        cin >> seleccion;
        cout << endl;
        if (seleccion == "S" || seleccion == "s") {
          capitulo12.calificacionUsuario();
          cout << "Saliendo..." << endl;
          menuSeries();
        } else if (seleccion == "N" || seleccion == "n") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          if (seleccion != "S" || seleccion != "s" || seleccion != "N" ||
              seleccion != "n") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      } else if (seleccion == "3") {
        capitulo13.informacion();
        cout << endl << "Desea calificar este capitulo? (S/N)" << endl << endl;
        cin >> seleccion;
        cout << endl;
        if (seleccion == "S" || seleccion == "s") {
          capitulo13.calificacionUsuario();
          cout << "Saliendo..." << endl;
          menuSeries();
        } else if (seleccion == "N" || seleccion == "n") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          cout << "Por favor ingrese una respuesta valida." << endl;
          menuSeries();
        }
      } else {
        cout << "Por favor ingrese una opción valida." << endl;
        menuSeries();
      }
    } else {
      cout << "Por favor ingrese una opción valida." << endl;
      menuSeries();
    }
  } else if (seleccion == "2") {
    cout << endl;
    serie2.informacion();
    cout << endl << "¿Qué desea hacer?" << endl << endl;
    cout << "1.Calificar serie" << endl;
    cout << "2.Ver capitulos" << endl << endl;
    cin >> seleccion;
    if (seleccion == "1") {
      serie2.calificacionUsuario();
      cout << "Saliendo..." << endl;
      menuSeries();
    } else if (seleccion == "2") {
      menuCapitulos();
      cout << "1. " << capitulo21.getNombre() << endl;
      cout << "2. " << capitulo22.getNombre() << endl;
      cout << "3. " << capitulo23.getNombre() << endl << endl;
      cin >> seleccion;
      if (seleccion == "1") {
        capitulo21.informacion();
        cout << endl << "Desea calificar este capitulo? (S/N)" << endl << endl;
        cin >> seleccion;
        cout << endl;
        if (seleccion == "S" || seleccion == "s") {
          capitulo21.calificacionUsuario();
          cout << "Saliendo..." << endl;
          menuSeries();
        } else if (seleccion == "N" || seleccion == "n") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          if (seleccion != "S" || seleccion != "s" || seleccion != "N" ||
              seleccion != "n") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      } else if (seleccion == "2") {
        capitulo22.informacion();
        cout << endl << "Desea calificar este capitulo? (S/N)" << endl << endl;
        cin >> seleccion;
        cout << endl;
        if (seleccion == "S" || seleccion == "s") {
          capitulo22.calificacionUsuario();
          cout << "Saliendo..." << endl;
          menuSeries();
        } else if (seleccion == "N" || seleccion == "n") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          if (seleccion != "S" || seleccion != "s" || seleccion != "N" ||
              seleccion != "n") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      } else if (seleccion == "3") {
        capitulo23.informacion();
        cout << endl << "Desea calificar este capitulo? (S/N)" << endl << endl;
        cin >> seleccion;
        cout << endl;
        if (seleccion == "S" || seleccion == "s") {
          capitulo23.calificacionUsuario();
          cout << "Saliendo..." << endl;
          menuSeries();
        } else if (seleccion == "N" || seleccion == "n") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          cout << "Por favor ingrese una respuesta valida." << endl;
          menuSeries();
        }
      } else {
        cout << "Por favor ingrese una opción valida." << endl;
        menuSeries();
      }
    } else {
      cout << "Por favor ingrese una opción valida." << endl;
      menuSeries();
    }
  } else if (seleccion == "3") {
    cout << endl;
    serie3.informacion();
    cout << endl << "¿Qué desea hacer?" << endl << endl;
    cout << "1.Calificar serie" << endl;
    cout << "2.Ver capitulos" << endl << endl;
    cin >> seleccion;
    if (seleccion == "1") {
      serie3.calificacionUsuario();
      cout << "Saliendo..." << endl;
      menuSeries();
    } else if (seleccion == "2") {
      menuCapitulos();
      cout << "1. " << capitulo31.getNombre() << endl;
      cout << "2. " << capitulo32.getNombre() << endl;
      cout << "3. " << capitulo33.getNombre() << endl << endl;
      cin >> seleccion;
      if (seleccion == "1") {
        capitulo31.informacion();
        cout << endl << "Desea calificar este capitulo? (S/N)" << endl << endl;
        cin >> seleccion;
        cout << endl;
        if (seleccion == "S" || seleccion == "s") {
          capitulo31.calificacionUsuario();
          cout << "Saliendo..." << endl;
          menuSeries();
        } else if (seleccion == "N" || seleccion == "n") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          cout << "Por favor ingrese una respuesta valida." << endl;
          menuSeries();
        }
      } else if (seleccion == "2") {
        capitulo32.informacion();
        cout << endl << "Desea calificar este capitulo? (S/N)" << endl << endl;
        cin >> seleccion;
        cout << endl;
        if (seleccion == "S" || seleccion == "s") {
          capitulo32.calificacionUsuario();
          cout << "Saliendo..." << endl;
          menuSeries();
        } else if (seleccion == "N" || seleccion == "n") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          cout << "Por favor ingrese una respuesta valida." << endl;
          menuSeries();
        }
      } else if (seleccion == "3") {
        capitulo33.informacion();
        cout << endl << "Desea calificar este capitulo? (S/N)" << endl << endl;
        cin >> seleccion;
        cout << endl;
        if (seleccion == "S" || seleccion == "s") {
          capitulo33.calificacionUsuario();
          cout << "Saliendo..." << endl;
          menuSeries();
        } else if (seleccion == "N" || seleccion == "n") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          cout << "Por favor ingrese una respuesta valida." << endl;
          menuSeries();
        }
      } else {
        cout << "Por favor ingrese una opción valida." << endl;
        menuSeries();
      }
    } else {
      cout << "Por favor ingrese una opción valida." << endl;
      menuSeries();
    }
  } else if (seleccion == "4") {
    mostrarMejorSerie(serie1, serie2, serie3);
    menu();
  } else if (seleccion == "5") {
    cout << "Volviendo al menu principal..." << endl;
    menu();
  } else {
    cout << "Por favor ingrese una respuesta valida." << endl;
    menuSeries();
  }
}

void organizar() { cout << "Organizando..." << endl; }

void opciones() {
  while (true) {
    cin >> seleccion;
    cout << endl;
    if (seleccion == "1") {
      menuPeliculas();
    } else if (seleccion == "2") {
      menuSeries();
    } else if (seleccion == "3") {
      cout << "Gracias por usar Tec+, vuelva pronto." << endl << endl;
      break;
    } else {
      cout << "Por favor ingrese una opción válida\n" << endl;
      menu();
    }
  }
}

int main() {
  menu();
  opciones();
  return 0;
}