/* 
 * Header file for n-body simulation using leapfrog integration
 * PHYS305 Homework Set #4
 */

 #ifndef A1_H
 #define A1_H
 
 /* Scalar type represents a double-precision floating point number used for all calculations */
 typedef double scalar;
 
 /* 
  * Vector structure to represent 3D vectors (position, velocity, acceleration)
  * Used to store the x, y, z components of vectors for each body in the simulation
  */
 typedef struct {
     double x;
     double y;
     double z;
 } vector;
 
 /*
  * Calculate the gravitational acceleration of each body due to all other bodies
  * Parameters:
  *   m - array of masses for each body
  *   r - array of position vectors for each body
  *   a - array where calculated acceleration vectors will be stored
  *   n - number of bodies in the simulation
  */
 void accelerate(scalar *m, vector *r, vector *a, int n);
 
 /*
  * Perform one step of leapfrog (velocity Verlet) integration
  * Parameters:
  *   m - array of masses for each body
  *   r - array of position vectors for each body (updated by this function)
  *   v - array of velocity vectors for each body (updated by this function)
  *   a - array of acceleration vectors for each body (updated by this function)
  *   n - number of bodies in the simulation
  *   dt - time step for integration
  */
 void leapfrog(scalar *m, vector *r, vector *v, vector *a, int n, scalar dt);
 
 #endif /* A1_H */