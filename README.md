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
