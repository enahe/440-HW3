#ifndef PREDATOR_HH

#define PREDATOR_HH

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//
// "Creature Box" -- flocking app
//
// by Christopher Rasmussen
//
// CISC 440/640, March, 2014
// updated to OpenGL 3.3, March, 2016
//
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

#include "Creature.hh"
#include "Flocker.hh"

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

#define MAX_PREDATOR_SPEED                           0.04

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

#define DRAW_MODE_HISTORY_PREDATOR          0
#define DRAW_MODE_AXES_PREDATOR             1
#define DRAW_MODE_POLY_PREDATOR             2
#define DRAW_MODE_OBJ_PREDATOR               3

class Predator : public Creature
{
public:
	double random_force_limit;
  
  Predator(int,                    // index
	   double, double, double, // initial position
	   double, double, double, // initial velocity
	   double, //randomness factor
	   float, float, float,    // base color
	   int = 1);               // number of past states to save

  void draw(glm::mat4);
  void update();


};

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

#endif
