// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// Generated by ene2h.exe from ..\enems\enems.ene
// Copyleft 2010, 2017 by The Mojon Twins

typedef struct {
	unsigned char x, y;
	unsigned char x1, y1, x2, y2;
	char mx, my;
	char t;
#ifdef PLAYER_CAN_FIRE
	unsigned char life;
#endif
} MALOTE;

MALOTE malotes [] = {
	// Pantalla 0
 	{208, 64, 208, 64, 208, 112, 0, 1, 4},
 	{112, 48, 112, 48, 32, 48, -1, 0, 2},
 	{112, 112, 112, 112, 16, 112, -1, 0, 1},

	// Pantalla 1
 	{160, 112, 160, 112, 208, 112, 1, 0, 2},
 	{96, 112, 96, 112, 16, 112, -1, 0, 2},
 	{32, 48, 32, 48, 192, 48, 2, 0, 1},

	// Pantalla 2
 	{176, 48, 176, 48, 16, 48, -2, 0, 1},
 	{16, 112, 16, 112, 64, 112, 1, 0, 2},
 	{176, 112, 176, 112, 128, 112, -1, 0, 2},

	// Pantalla 3
 	{176, 144, 176, 144, 64, 144, -1, 0, 4},
 	{32, 48, 32, 48, 32, 128, 0, 1, 2},
 	{192, 48, 192, 48, 192, 128, 0, 1, 1},

	// Pantalla 4
 	{16, 64, 16, 64, 96, 64, 1, 0, 1},
 	{192, 96, 192, 96, 144, 96, -1, 0, 2},
 	{208, 128, 208, 128, 16, 128, -2, 0, 3},

	// Pantalla 5
 	{208, 128, 208, 128, 16, 128, -2, 0, 3},
 	{112, 80, 112, 80, 208, 80, 1, 0, 1},
 	{96, 16, 96, 16, 208, 0, 2, -2, 2},

	// Pantalla 6
 	{128, 64, 128, 64, 192, 64, 1, 0, 1},
 	{64, 80, 64, 80, 16, 80, -1, 0, 2},
 	{112, 112, 112, 112, 112, 32, 0, -1, 4},

	// Pantalla 7
 	{160, 96, 160, 96, 96, 96, -1, 0, 1},
 	{192, 48, 192, 48, 112, 48, -1, 0, 2},
 	{32, 16, 32, 16, 32, 112, 0, 2, 1},

	// Pantalla 8
 	{112, 112, 112, 112, 48, 112, -1, 0, 3},
 	{128, 32, 128, 32, 128, 96, 0, 1, 3},
 	{48, 32, 48, 32, 96, 80, 1, 1, 3},

	// Pantalla 9
 	{96, 32, 96, 32, 96, 128, 0, 2, 1},
 	{192, 48, 192, 48, 192, 128, 0, 1, 2},
 	{160, 128, 160, 128, 128, 128, -1, 0, 1},

	// Pantalla 10
 	{160, 64, 160, 64, 112, 64, -1, 0, 3},
 	{96, 64, 96, 64, 64, 128, -1, 1, 2},
 	{48, 16, 48, 16, 48, 128, 0, 1, 1},

	// Pantalla 11
 	{176, 48, 176, 48, 160, 48, -1, 0, 3},
 	{64, 16, 64, 16, 144, 80, 2, 2, 2},
 	{16, 64, 16, 64, 128, 128, 4, 4, 1},

	// Pantalla 12
 	{128, 16, 128, 16, 128, 80, 0, 1, 3},
 	{96, 48, 96, 48, 80, 48, -1, 0, 1},
 	{48, 80, 48, 80, 32, 80, -1, 0, 2},

	// Pantalla 13
 	{96, 96, 96, 96, 208, 96, 2, 0, 3},
 	{208, 64, 208, 64, 96, 80, -1, 1, 2},
 	{48, 16, 48, 16, 48, 64, 0, 1, 1},

	// Pantalla 14
 	{192, 64, 192, 64, 80, 64, -1, 0, 2},
 	{48, 32, 48, 32, 48, 64, 0, 1, 3},
 	{32, 48, 32, 48, 32, 80, 0, 1, 1},

	// Pantalla 15
 	{16, 64, 16, 64, 208, 64, 1, 0, 4},
 	{112, 32, 112, 32, 176, 80, 1, 1, 3},
 	{32, 16, 32, 16, 32, 112, 0, 1, 1},

	// Pantalla 16
 	{208, 64, 208, 64, 208, 112, 0, 1, 4},
 	{192, 128, 192, 128, 96, 128, -1, 0, 1},
 	{144, 80, 144, 80, 128, 80, -1, 0, 3},

	// Pantalla 17
 	{32, 32, 32, 32, 32, 128, 0, 2, 2},
 	{192, 128, 192, 128, 80, 128, -2, 0, 4},
 	{176, 32, 176, 32, 176, 96, 0, 1, 1},

	// Pantalla 18
 	{128, 128, 128, 128, 80, 128, -1, 0, 3},
 	{112, 128, 112, 128, 16, 128, -2, 0, 3},
 	{16, 64, 16, 64, 176, 112, 2, 2, 1},

	// Pantalla 19
 	{16, 128, 16, 128, 16, 80, 0, -1, 3},
 	{160, 48, 160, 48, 192, 96, 1, 1, 2},
 	{128, 48, 128, 48, 64, 48, -1, 0, 1},

	// Pantalla 20
 	{128, 128, 128, 128, 64, 128, -1, 0, 3},
 	{32, 64, 32, 64, 32, 128, 0, 2, 2},
 	{144, 16, 144, 16, 160, 80, 1, 1, 1},

	// Pantalla 21
 	{80, 16, 80, 16, 224, 48, 2, 2, 2},
 	{128, 64, 128, 64, 112, 64, -1, 0, 3},
 	{192, 16, 192, 16, 208, 96, 1, 1, 3},

	// Pantalla 22
 	{80, 48, 80, 48, 160, 48, 2, 0, 2},
 	{32, 128, 32, 128, 208, 128, 2, 0, 3},
 	{64, 80, 64, 80, 192, 112, 1, 1, 1},

	// Pantalla 23
 	{176, 128, 176, 128, 96, 128, -1, 0, 3},
 	{48, 64, 48, 64, 192, 96, 2, 2, 1},
 	{208, 32, 208, 32, 208, 80, 0, 1, 2}

};

#define N_ENEMS_TYPE_0 0
#define N_ENEMS_TYPE_1 24
#define N_ENEMS_TYPE_2 22
#define N_ENEMS_TYPE_3 20
#define N_ENEMS_TYPE_5 0
#define N_ENEMS_TYPE_6 0
#define N_ENEMS_TYPE_7 0

// This is output the way it worked originally, please modify if you need
// You may want to add type 5 or 6's below.
#define BADDIES_COUNT (N_ENEMS_TYPE_1+N_ENEMS_TYPE_2+N_ENEMS_TYPE_3)

typedef struct {
	unsigned char xy, tipo, act;
} HOTSPOT;

HOTSPOT hotspots [] = {
	{19, 2, 0}, 
	{131, 1, 0}, 
	{211, 1, 0}, 
	{0, 0, 0}, 
	{146, 1, 0}, 
	{49, 1, 0}, 
	{213, 1, 0}, 
	{179, 1, 0}, 
	{0, 0, 0}, 
	{115, 1, 0}, 
	{0, 0, 0}, 
	{167, 1, 0}, 
	{198, 1, 0}, 
	{35, 1, 0}, 
	{132, 1, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{71, 1, 0}, 
	{152, 2, 0}, 
	{0, 0, 0}, 
	{194, 1, 0}, 
	{66, 1, 0}, 
	{0, 0, 0}, 
	{18, 1, 0}
};

#define N_HOTSPOTS_TYPE_0 7
#define N_HOTSPOTS_TYPE_1 15
#define N_HOTSPOTS_TYPE_2 2
#define N_HOTSPOTS_TYPE_3 0
#define N_HOTSPOTS_TYPE_4 0
#define N_HOTSPOTS_TYPE_5 0
#define N_HOTSPOTS_TYPE_6 0
#define N_HOTSPOTS_TYPE_7 0

