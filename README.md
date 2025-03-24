# PHYS305 Homework Set #4

Welcome to the repository for **Homework Set #4** in PHYS305.
This homework set is worth **10 points** and is designed to test your
understanding of topics that we've covered.
The submission cutoff time is at **Thursday April 3rd, 11:59pm**
Arizona time.
Please use [this link](https://classroom.github.com/a/___) to
accept it from GitHub Classroom.


## Structure and Grading

This homework set consists of **five assignments**, each contributing
equally to your overall grade.
The grading breakdown is as follows:

1. **Automated Evaluation (50%)**:
   * Each assignment will be graded using `pytest`, an automated
     testing framework.
   * The correctness of your solutions accounts for 1 point per
     assignment (5 points in total).
   * You can run `pytest` in GitHub Codespaces or your local
     development environment to verify your solutions before
     submission.

2. **Documentation and Coding Practices (50%)**:
   * The remaining 1 point per assignment (5 points total) will be
     based on documentation and coding practices.
   * Clear and concise **documentation** of your code, including
     meaningful comments.
   * Adherence to good **coding practices**, such as proper variable
     naming, modular design, and code readability.

By following the interface and prototypes provided in each assignment
template, you can ensure compatibility with the autograding system and
maximize your score.


## Assignments

In this homework set, you will develop a leapfrog integration
algorithm to simulate an $n$-body self-gravity problem.
As we learned it class, the leapfrog method is widely used in
computational physics for its excellent energy conservation properties
in long-term simulations, making it ideal for gravitational dynamics.

As a test case, the automated evaluation will use a three-body
configuration with initial conditions that produce a stable figure-8
orbit---a well-known and challenging benchmark for numerical
integrators.
Your goal is to implement the algorithm accurately and efficiently,
ensuring that the simulation maintains stability and energy
conservation over time.

You may find [this tutorial on $n$-body
problem](https://github.com/rndsrc/orbits-py/blob/main/demo.ipynb)
useful.

### **Assignment 1**: Create the Header File (2 points)

* **Objective:**
  Define the essential data types and function prototypes for your
  $n$-body simulation by creating a header file ("src/a1.h") that will
  be included in later assignments.

* **Details:**
  * File Name: Create a file named "src/a1.h".
  * Content Requirements: In "src/a1.h", include the following definitions:
    1. Type Definition: define a type alias `scalar` for `double`. I.e., `typedef double scalar;`.
    2. Structure Definition: define a vector structure to represent a 3D vector with components `x`, `y`, and `z` of type `double`.
    3. Function Prototypes: Declare the following function prototypes:
       * `void accelerate(scalar *m, vector *r, vector *a, int n);`
       * `void leapfrog(scalar *m, vector *r, vector *v, vector *a, int n, scalar dt);`
  * Documentation:
    Include clear comments explaining:
    * What the scalar type represents.
    * The purpose of the vector structure.
    * The role of each function prototype.

### **Assignment 2**: Implement the Acceleration Function (2 points)

* **Objective:**
  Implement the function `accelerate()` to compute the gravitational
  acceleration acting on each body due to all the other bodies in the
  $n$-body simulation.

* **Details:**
  * File Name: Create a file named "src/a2.c".
  * Required Includes: Your file should include:
    * The header file you created in Assignment 1 ("a1.h").
    * The math library header `<math.h>` to use functions such as `sqrt()`.
  * Function Prototype:
    You will implement the function with the following signature (as
    declared in "src/a1.h"):
    `void accelerate(scalar *m, vector *r, vector *a, int n);`
  * The accelerate function calculates the gravitational acceleration
    on each body in an $n$-body system.
    The acceleration on the $i$-th body is computed by summing the
    contributions from all other bodies $j$ (with $j \neq i$) according to
    $\mathbf{a}_i = \sum m_j \frac{\mathbf{r}_i - \mathbf{r}_j)}{|\mathbf{r}_i - \mathbf{r}_j|^3}$.

### **Assignment 3**: Implement the Leapfrog Integration Function (2 points)

* **Objective:**
  Implement the `leapfrog()` function to perform one integration step
  of the $n$-body simulation using the leapfrog (or velocity Verlet)
  algorithm.
  This method is widely used in computational physics for its
  stability and energy conservation properties.

* **Details:**
  * File Name: Create a file named "src/a3.c".
  * Required Includes: Your file should include:
    * The header file you created in Assignment 1 ("a1.h").
  * Function Prototype:
    You will implement the function with the following signature (as
    declared in "src/a1.h"):
    `void leapfrog(scalar *m, vector *r, vector *v, vector *a, int n, scalar dt);`
  * Implement the kick-drift-kick leapfrog algorithm discussed in
    lecture ODE II.

### **Assignment 5**: Provide Team Name and Preferred Presentation Date (2 points)

* **Objective**:
  Submit your team information for the upcoming class project by completing a YAML file.

* **Details**:
  * Project 2 submission is handled by GitHub classroom.
    Please use https://classroom.github.com/a/___ to join a project.
  * Edit the file `src/a5.yaml` to include:
    * A key `team` with the name of your project team.
    * A key `date` with your preferred presentation date in the format
      `Month DD`.
  * This assignment ensures students begin forming groups and
    scheduling their presentations early.


## Submission Guidelines

1. Create a new repostiory based on this template by using the GitHub
   Classroom Link https://classroom.github.com/ and work on the
   assignments in GitHub Codespaces or locally.

2. Use `make test` to test your solutions before submission.
   Ensure that all test cases pass to maximize your automated
   evaluation score.

3. **Submit your completed assignments by pushing your changes to the
   repository before the deadline.**

**Note**:
**The submission deadline is a strict cutoff.
No submission will be accepted after the deadline.**
Be sure to manage your time effectively and plan ahead to ensure your
work is submitted on time.
Frequent and incremental `git commit` and `git push` are recommended
to ensure your latest work are seen.


## Additional Notes

* **Collaboration**:
  You are encouraged to discuss ideas with your peers, but your
  submission must reflect your own work.
* **Help and Resources**:
  If you encounter any difficulties, please refer to the course
  materials, consult your instructor, or seek help during office
  hours.
* **Deadlines**:
  Be mindful of the submission deadline, as late submissions will not
  be accepted.

Good luck, and have fun working on the assignments!
