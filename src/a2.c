/*
 * Implementation of the acceleration function for n-body simulation
 * PHYS305 Homework Set #4
 */

 #include "a1.h"
 #include <math.h>
 
 /*
  * Calculate the gravitational acceleration of each body due to all other bodies
  * Implements the formula: a_i = sum(m_j * (r_i - r_j) / |r_i - r_j|^3) for j != i
  */
 void accelerate(scalar *m, vector *r, vector *a, int n)
 {
     const double G = 1.0; /* Gravitational constant (set to 1 for simplicity) */
     
     /* Initialize accelerations to zero */
     for (int i = 0; i < n; i++) {
         a[i].x = 0.0;
         a[i].y = 0.0;
         a[i].z = 0.0;
     }
     
     /* Calculate acceleration for each body */
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
             if (i != j) { /* Skip self-interaction */
                 /* Calculate vector difference (r_i - r_j) */
                 double dx = r[i].x - r[j].x;
                 double dy = r[i].y - r[j].y;
                 double dz = r[i].z - r[j].z;
                 
                 /* Calculate distance cubed |r_i - r_j|^3 */
                 double dist_squared = dx*dx + dy*dy + dz*dz;
                 double dist_cubed = dist_squared * sqrt(dist_squared);
                 
                 /* Add contribution to acceleration */
                 double factor = -G * m[j] / dist_cubed;
                 a[i].x += factor * dx;
                 a[i].y += factor * dy;
                 a[i].z += factor * dz;
             }
         }
     }
 }