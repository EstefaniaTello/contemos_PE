#include <iostream>
#include<allegro5/allegro.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include <allegro5/allegro_native_dialog.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<allegro5/allegro_primitives.h>
#include<string>
#include<allegro5/allegro_primitives.h>
#include<allegro5/allegro_image.h>
#include<Windows.h>
#include<sstream>
#include<ctime>
#include<stdio.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

using namespace std;

ALLEGRO_FONT* Golden_Age_Shad = al_load_font("fuentes/Golden_Age_Shad.otf", 70, 0);
ALLEGRO_FONT* Bold = al_load_font("fuentes/Bold.ttf", 30, 0);
ALLEGRO_FONT* Golden_Age_Shad_pequenio = al_load_font("fuentes/Golden_Age_Shad.otf", 30, 0);
ALLEGRO_TIMER* segundoTimer;
ALLEGRO_EVENT_QUEUE* queue;
ALLEGRO_COLOR azul = al_map_rgb(53, 43, 255);
ALLEGRO_COLOR blanco = al_map_rgb(255, 255, 255);
ALLEGRO_COLOR naranja = al_map_rgb(239, 186, 36);
ALLEGRO_COLOR negro = al_map_rgb(0, 0, 0);
ALLEGRO_COLOR rojo = al_map_rgb(255, 43, 43);

ALLEGRO_KEYBOARD_STATE keyState;
bool ganaste_game(ALLEGRO_DISPLAY* ventana, int puntos, int vidas);
bool perdiste_game(ALLEGRO_DISPLAY* ventana);
void jugar(ALLEGRO_DISPLAY* ventana);
void menu(ALLEGRO_DISPLAY* ventana);
void numCajas(int numFondo, ALLEGRO_FONT* Golden_Age_Shad_pequenio);
void impNum(int n1, int n2, ALLEGRO_FONT* Golden_Age_Shad);
int puntaje(int resultado, int avanceJugador, int puntos);
void usarTeclado(ALLEGRO_DISPLAY* ventana);
void mensajes(int avanceJugador, int puntos);
void crearArchivo(int puntos);
int puntajeFinal(int puntos, int l);
float ancho = 1106;
float alto = 700;