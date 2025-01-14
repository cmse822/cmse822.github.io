# Syllabus - CMSE/CSE 822

## Spring 2025, Michigan State University

This graduate-level course covers the practical and theoretical aspects of  high-performance parallel computing in science and engineering. 

### Course Goals

At the conclusion of this course, you should be able to

- Benchmark and profile the performance of serial and parallel applications
- Develop and optimize applications using:
  - distributed-memory message passing
  - shared-memory threading parallelism
  - hybrid parallelism 
  - accelerators (e.g., GPUs)
- Make effective use of high-performance parallel computing architectures
- Understand the current state of high-performance parallel computing

### Instructor information

Prof. Sean M. Couch, Ph.D. (he/him)  
Associate Professor  
Department of Physics and Astronomy  
Department of Computational Mathematics, Science, and Engineering  
Facility for Rare Isotope Beams  
Office: 3260 BPS  
Office hours: _by appointment_  
Zoom: [msu.zoom.us/my/scouch](http://msu.zoom.us/my/scouch)  
[scouch@msu.edu](mailto:scouch@msu.edu)  

**Teaching Assistant/Grader:**  
Ian Freeman  
Office hours: Tuesday, 9:45 am to 10:20 am; Thursdays, after class  
[freem386@msu.edu](mailto:freem386@msu.edu)

### Class meetings and office hours

The class meets Tuesdays and Thursdays from 10:20 am to 11:40 am Eastern in EGR 2400. 
Class meetings are meant to be highly interactive and you are expected to attend if possible.
In the event you are unable to attend in person, you may join class via Zoom at [this link](https://msu.zoom.us/j/98767718147).

### Text book and references

The course website, cmse822.github.io, will be the primary source for course information throughout the semester.
The two primary textbooks for this course are [High Performance Scientific Computing](EijkhoutIntroToHPC2020.pdf) and [Parallel Programming in Science and Engineering](EijkhoutParallelProgramming.pdf), both by Victor Eijkhout.
Both of these texts are open-source and freely-available from the author, see [this repo](https://theartofhpc.com).
Supplementary reading and reference material is available on the course webpage under [Resources](resources.md).

### Required technologies and software 

- a GitHub account
- a MSU HPCC account (if you don't already have one, we will request one for you.)

#### Group Projects and Homework

The coursework for this class is designed to provide you with hands-on experience in high-performance parallel computing through a combination of group projects and associated homework assignments. 

There will be 6 group projects throughout the semester, each accompanied by a homework assignment. Both the projects and homework are to be completed collaboratively within your assigned groups. 

**Homework Assignments:**

- **Reading:** Each homework will include reading assignments from the primary textbooks or supplementary materials. These readings are essential for understanding the theoretical concepts that will be applied in the projects.
- **Lecture Videos:** You will be required to watch lecture videos that provide additional context and explanations for the topics covered in the readings and projects.
- **Exercises:** The homework will also include exercises that may require coding. These exercises are designed to reinforce the concepts learned in the readings and lectures and to prepare you for the group projects. You will be expected to occasionally present you exercise solutions in class.

**Group Projects:**

- The group projects will involve developing and testing parallel code. These projects are intended to enhance your practical skills in high-performance computing and to foster collaboration among group members.
- You will use GitHub to manage your collaborative code development. Each group will submit a single project report and code repository, with the git history reflecting contributions from all group members.
- The projects will be graded based on the functionality, efficiency, and quality of the code, as well as the clarity and completeness of the project report.

Each group will briefly present the results of their projects to the class.

No rule of scholarly activity is more important than giving proper credit to the contributions of others. Although you are free to consult with classmates while working on assignments, you must explicitly acknowledge them by name and indicate their contributions in the final write-up.

**Use of AI Assistants:**
Many of the assignments will require writing code and routines parts of which may be easily found in publicly-available numerical libraries or just as easily generated with AI chat bots (i.e., ChatGPT, Claude, etc.).
Unless explicitly stated, you should assume that all code required in the assignments must be original.
I.e., do not simply use off-the-shelf code or have an AI write it for you.
The point of the assignments is to give _you_ practice in writing scientific software.
That said, I actually _encourage_ you to utilize AI chat bots for planning, researching, and debugging your codes! 

#### Group Participation

You will be graded on your participation in the group. To facilitate this, you will complete an assessment of each of your group members contributions to each of the group projects. These assessments will be confidential and used solely by the instructor to ensure that appropriate and equitable participation in group work is maintained throughout the course. Your group participation grade will count for 10% of your final grade.

### Final Project

In the latter part of the course, you will complete a [longer project](projects.md) individually in which you will develop and test a highly-parallel code.
You will choose a project from the list that will be available on the course [projects page](projects.md).
At the culmination of the project, you will prepare, in a professional style, a detailed report describing your work.
You will also be expected to submit your code and versioning history via GitHub.

#### Final Project Poster

In addition to your final project code and report, you will produce a professional-quality conference poster about your project. You will share this poster with your colleagues and classmates during a class poster session during the nominal final exam time for this course. 

### Final exam

The final project will act as the final exam for this course. We will use the scheduled final exam time for our class poster session.

### CMSE Subject Exam in Parallel Computing

This course is one of the subject exam courses for the PhD in CMSE.
For those of you requiring it, your subject exam score will be your final course grade.

### Grading policy

The weights for the course grade are as follows.

Category               | %
-----------------------|----
Group Projects         | 40%
Homework               | 25%
Group Participation    | 10%
Final Project          | 25%

The final course grade will be assigned based on the following scale.

Grade        | Overall %
------------ | ----------
4.0          | >=90
3.5          | >=83
3.0          | >=76
2.5          | >=68
2.0          | >=62
1.5          | >=55
1.0          | >=45

Your final grade will be no lower than that indicated on the above scale, though it _may_ be higher, depending on overall class performance.

### Topics for the Course

The _tentative_ detailed course schedule is available [here](schedule.md). Updates and details will also be made on that page and communicated via the course Slack channel. The course will cover the following topics.

1. **Performance Profiling and Optimization**
2. **Parallel Computing Theory**
3. **Message Passing Interface (MPI) Basics**
4. **Advanced MPI Topics**
5. **Parallel Algorithms and Computational Patterns**
6. **GPU Programming**
7. **Hybrid Computing**
8. **Load Balancing and Scalability**
9. **Validation and Testing**

### Spartan Code of Honor Academic Pledge

As a Spartan, I will strive to uphold values of the highest ethical standard. I will practice honesty in my work, foster honesty in my peers, and take pride in knowing that honor is worth more than grades. I will carry these values beyond my time as a student at Michigan State University, continuing the endeavor to build personal integrity in all that I do.

In particular, plagiarism of any kind will result in the complete loss of credit for the assignment, including on the final project, and an associated report to the dean of your college. If you are not completely clear on what constitutes plagiarism, consult the [materials provided by the Graduate School](https://grad.msu.edu/plagiarism).

### Course Recordings, Intellectual Property and Social Media Use 

**Course Recordings:** Meetings of this course may be recorded. The recordings may be available to students registered for this class. This is intended to supplement the classroom experience. Students are expected to follow appropriate University policies and maintain the security of passwords used to access recorded lectures. Recordings may not be reproduced, shared with those not in the class, or uploaded to other online environments. Doing so may result in disciplinary action. If the instructor or another University office plan other uses for the recordings beyond this class, students identifiable in the recordings will be notified to request consent prior to such use. 

**Related Policies:** 
Institutional Data Policy: 
https://tech.msu.edu/about/guidelines-policies/msu-institutional-data-policy/ 
Student Privacy Guidelines and Notification of Rights under FERPA 
https://reg.msu.edu/ROInfo/Notices/PrivacyGuidelines.aspx

As members of a learning community, students are expected to respect the intellectual property of course instructors. All course materials presented to students are the copyrighted property of the course instructor and are subject to the following conditions of use:

1. Students may record lectures or an other classroom activities and use the recordings only for their own course-related purposes.
2. Students may share the recordings with other students enrolled in the class. Sharing is limited to using the recordings only for their own course-related purposes.
3. Video and audio recordings made of online lectures may contain inaudible or invisible watermarks to identify shared media: https://support.zoom.us/hc/en-us/articles/360021839031-Audio-Watermark
4. Students may not post the recordings or other course materials online or distribute them to anyone not enrolled in the class without the advance written permission of the course instructor and, if applicable, any students whose voice or image is included in the recordings.
5. Any student violating the conditions described above may face academic disciplinary sanctions.
