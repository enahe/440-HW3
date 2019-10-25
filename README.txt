Predator Drawing: I wanted my predator to be immediately distinguishable from the other flockers,
so I chose to make it twice as big and immediately distinguishable in colors from the normal flockers.

Hunger_Force: My predator simply begins to chase after the nearest boid to it, and will do
so according to a hunger_weight variable and a force derived from the max hunger length given
to it.

Fear_Force: If a prey boid detects a predator within a ceratain distance from it, it
will immedately begin to move away from it. This fear_force will activate before the flocker
cohesion functions, so the flock may be broken at least momentarily.