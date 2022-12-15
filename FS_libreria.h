//libreria_juego_contemos

using namespace std;

void impNum(int n1, int n2, ALLEGRO_FONT* Golden_Age_Shad)
{
	ALLEGRO_COLOR azul = al_map_rgb(53, 43, 255);
	al_draw_text(Golden_Age_Shad, azul, 256, 311, NULL, (to_string(n1)).c_str());
	al_draw_text(Golden_Age_Shad, azul, 530, 311, NULL, (to_string(n2)).c_str());
}

int puntaje(int resultado, int avanceJugador, int puntos)
{
	if (avanceJugador == resultado)
	{
		puntos = puntos + 10;
	}
	return puntos;
}

bool respuesta(int resultado, int avanceJugador)
{
	if (avanceJugador == resultado)
	{
		return true;
	}
	return false;
}



void mensajes(int avanceJugador, int puntos)
{
	al_draw_text(Golden_Age_Shad_pequenio, negro, 200, 410, NULL, "ESTAS EN EL");
	al_draw_text(Golden_Age_Shad_pequenio, negro, 480, 410, NULL, "AVANZA");
	al_draw_text(Golden_Age_Shad_pequenio, negro, 742, 410, NULL, "LlEGASTE A");
	al_draw_text(Golden_Age_Shad, azul, 790, 311, NULL, (to_string(avanceJugador)).c_str());
	al_draw_text(Golden_Age_Shad, rojo, 70, 49, NULL, (to_string(puntos)).c_str());
}

void numCajas(int numFondo, ALLEGRO_FONT* Golden_Age_pequenio)
{
	int i;
	i = 5 * numFondo;
	al_draw_text(Golden_Age_pequenio, negro, 100, 650, NULL, (to_string(i - 4)).c_str());
	al_draw_text(Golden_Age_pequenio, negro, 300, 650, NULL, (to_string(i - 3)).c_str());
	al_draw_text(Golden_Age_pequenio, negro, 500, 650, NULL, (to_string(i - 2)).c_str());
	al_draw_text(Golden_Age_pequenio, negro, 700, 650, NULL, (to_string(i - 1)).c_str());
	al_draw_text(Golden_Age_pequenio, negro, 900, 650, NULL, (to_string(i)).c_str());
}


int puntajeFinal(int puntos, int l)
{
	int puntaje;
	if (l > 0)
	{
		puntaje = puntos * l;
	}
	else
	{
		puntaje = puntos;
	}
	return puntaje;
}

void crearArchivo(int puntos)
{
	fstream archivo;
	archivo.open("nombre.txt", ios::out);
	if (archivo.fail())
	{
		cout << "No se creo el archivo";
		return;
	}
	archivo << puntos << endl;
	archivo.close();
}
