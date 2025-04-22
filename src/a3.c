/*
 * Implementation of the leapfrog integration for n-body simulation
 * PHYS305 Homework Set #4
 */

 #include "a1.h"

 /*
  * Perform one step of leapfrog (velocity Verlet) integration
  * This implements the kick-drift-kick variant of the leapfrog algorithm:
  * 1. Half-kick: v(t+dt/2) = v(t) + a(t)*dt/2
  * 2. Drift: r(t+dt) = r(t) + v(t+dt/2)*dt
  * 3. Recalculate accelerations: a(t+dt) = f(r(t+dt))
  * 4. Half-kick: v(t+dt) = v(t+dt/2) + a(t+dt)*dt/2
  */
 void leapfrog(scalar *m, vector *r, vector *v, vector *a, int n, scalar dt)
 {
     /* Half-kick: v(t+dt/2) = v(t) + a(t)*dt/2 */
     for (int i = 0; i < n; i++) {
         v[i].x += a[i].x * dt/2.0;
         v[i].y += a[i].y * dt/2.0;
         v[i].z += a[i].z * dt/2.0;
     }
     
     /* Drift: r(t+dt) = r(t) + v(t+dt/2)*dt */
     for (int i = 0; i < n; i++) {
         r[i].x += v[i].x * dt;
         r[i].y += v[i].y * dt;
         r[i].z += v[i].z * dt;
     }
     
     /* Recalculate accelerations: a(t+dt) = f(r(t+dt)) */
     accelerate(m, r, a, n);
     
     /* Half-kick: v(t+dt) = v(t+dt/2) + a(t+dt)*dt/2 */
     for (int i = 0; i < n; i++) {
         v[i].x += a[i].x * dt/2.0;
         v[i].y += a[i].y * dt/2.0;
         v[i].z += a[i].z * dt/2.0;
     }
 }