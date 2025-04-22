/*
 * Driver program for n-body simulation using leapfrog integration
 * PHYS305 Homework Set #4
 */

 #include "a1.h"
 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 
 int main() {
     /* Configuration parameters */
     const int n = 3;              /* Number of bodies */
     const int num_steps = 1000;   /* Number of integration steps */
     const scalar t_final = 2.0 * M_PI / 3.0; /* Final simulation time */
     const scalar dt = t_final / num_steps;   /* Time step size */
     
     /* Initialize masses */
     scalar m[] = {1, 1, 1};
     
     /* Initialize positions */
     vector r[] = {
         {+0.9700436, -0.24308753, 0},
         {-0.9700436, +0.24308753, 0},
         {0, 0, 0}
     };
     
     /* Initialize velocities */
     vector v[] = {
         {+0.466203685, +0.43236573, 0},
         {+0.466203685, +0.43236573, 0},
         {-0.93240737, -0.86473146, 0}
     };
     
     /* Initialize accelerations array */
     vector a[n];
     
     /* Calculate initial accelerations */
     accelerate(m, r, a, n);
     
     /* Print initial positions */
     for (int i = 0; i < n; i++) {
         printf("%f %f %f ", r[i].x, r[i].y, r[i].z);
     }
     printf("\n");
     
     /* Perform integration for num_steps steps */
     for (int step = 0; step < num_steps; step++) {
         /* Perform one step of leapfrog integration */
         leapfrog(m, r, v, a, n, dt);
         
         /* Print positions after this step */
         for (int i = 0; i < n; i++) {
             printf("%f %f %f ", r[i].x, r[i].y, r[i].z);
         }
         printf("\n");
     }
     
     return 0;
 }