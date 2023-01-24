# Syllabus - CMSE/CSE 822

## Spring 2023, Michigan State University

This graduate-level course covers the practical and theoretical aspects of  high-performance parallel computing in science and engineering.

### Course Goals

At the conclusion of this course, you should be able to

- Benchmark and profile the performance of serial and parallel applications
- Develop and optimize applications using:
  - shared-memory threading parallelism
  - distributed-memory message passing
  - hybrid parallelism 
  - and GPU hardware
- Make effective use of high-performance parallel computing architectures
- Understand the current state of high-performance parallel computing

### Instructor information

Prof. Sean M. Couch, Ph.D. (he/him)  
Associate Professor  
Department of Physics and Astronomy  
Department of Computational Mathematics, Science, and Engineering  
Facility for Rare Isotope Beams  
Office: BPS 3260
Office hours: Tu/Th 1-3:30 pm; [Bookings appointment](https://tinyurl.com/4uen8952) _required_  
Zoom: [msu.zoom.us/my/scouch](http://msu.zoom.us/my/scouch)  
[scouch@msu.edu](mailto:scouch@msu.edu)  
[www.pa.msu.edu/~couch](http://www.pa.msu.edu/~couch)

**Teaching Assistant/Grader:**  
Nathan Haut  
Office hours: Wednesdays, 2:30-4 pm, 2504 EGR  
[hautnath@msu.edu](mailto:hautnath@msu.edu)

### Class meetings and office hours

The class meets Tuesdays and Thursdays from 10:20 am to 11:40 am Eastern in EGR 2400. 
Class meetings are meant to be highly interactive and you are expected to attend if possible.
In the occasion that you are unable to attend in-person, you may join via Zoom at [this link](https://msu.zoom.us/j/96421232503?pwd=TXJ2WjFoeHFSZUhZSDJhNGVMeFRTQT09). You will be required to log in to Zoom _using your MSU NetID_. Additionally, there is a password which will be sent to you via email. 

### Communication and Slack

The primary means of communication for this course will be [Slack](http://slack.com).
There is a workspace specifically for this course at [cmse-822.slack.com](http://cmse-822.slack.com).
You may use your `@msu.edu` email address to join this Slack workspace.
Please join this Slack workspace and participate in discussions.
Discussion of course subject material is encouraged.
You may also send direct messages via Slack to the instructors or any other member of the workspace.
For group work, there will be dedicated channels for each group.
You are also expected to check your `@msu.edu` email account as communication about the course may come there, as well.

### Text book and references

The two primary textbooks for this course are [High Performance Scientific Computing](https://bitbucket.org/VictorEijkhout/hpc-book-and-course) and [Parallel Programming in Science and Engineering](https://bitbucket.org/VictorEijkhout/parallel-computing-book/src), both by Victor Eijkhout.
Both of these texts are open-source and freely-available from the author.
Supplementary reading and reference material is available on the course webpage under [Resources](resources.md).

### Required technologies and software 

- Slack
- a GitHub account
- a MSU HPCC account

### Use of HPCC

The course assignments and projects will utilize the MSU campus High Performance Computing Center (HPCC). All students must obtain an account on the HPCC. The best way to get an HPCC is through your research mentor. If this is not feasible, talk to the course instructor about getting an account.

### Pre-class Assignments

For almost every class meeting, there will be an associated pre-class assignment that you should complete before attending. The pre-class assignments will serve as the basis for in-class discussion and so it is important that you complete them.

The assignments will often consist of writing and running code. As such, all assignments will be handed out and turned in via Git repositories on the course's [GitHub Classroom](https://github.com/cmse822f20). The Git history of your assignments should demonstrate the originality of your work.
You will also be graded on the _quality_ of your code.
Please read and refer to the course [coding standards](coding.md) for clear guidelines on writing readable, maintainable code.

No rule of scholarly activity is more important than giving proper credit to the contributions of others. Although you are free to consult with classmates while working on assignments, you must explicitly acknowledge them by name and indicate their contributions in the final write-up.

Many of the assignments will require writing code and routines parts of which may be easily found in publicly-available numerical libraries.
Unless explicitly stated, you should assume that all code required in the assignments must be original.
I.e., do not simply use off-the-shelf code.
The point of the assignments is to give _you_ practice in writing scientific software.

### Group Projects

Over the course of the semester, you will complete 6 group projects. Collaboration is a key element of science and, as such, these projects are intended to develop both your knowledge of parallel computing and your collaborative skills. These projects will consist primarily of developing and testing parallel code. You will be expected to use GitHub to manage your collaborative code development.

### In-class Quizzes

There will be in-class quizzes on roughly a weekly basis to check your understanding of the material covered by the pre-class assignments. 
Your 2 lowest quiz scores will be dropped from your final grade.
There will be NO make-ups allowed for missed quizzes.
Quizzes will not require an entire class period and will delivered at the end of class with ample time to complete them. 

### Final Project

In the latter part of the course, you will complete a [longer project](projects.md) individually in which you will develop and test a highly-parallel code.
You will choose a project from the list that will be available on the course [projects page](projects.md).
At the culmination of the project, you will prepare, in a professional style, a detailed report describing your work.
You will also be expected to submit your code and versioning history via GitHub.

### Final exam

The final project will act as the final exam for this course.

### CMSE Subject Exam in Parallel Computing

This course is one of the subject exam courses for the PhD in CMSE.
For those of you requiring it, your subject exam score will be your final course grade.

### Grading policy

The weights for the course grade are as follows.

Category      | %
--------------|----
Group Projects      | 60%
In-class quizzes    | 20%
Final Project       | 20%

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

### Outline of topics

The _tentative_ detailed course schedule is available [here](schedule.md). Updates and details will also be made on that page and communicated via the course Slack channel. The course will cover the following topics.

- Basics of high performance computing and architectures
- Performance modeling
- Serial and parallel optimization strategies
- Distributed memory parallelism with MPI 
- Shared memory parallelism with OpenMPI
- GPU computing 

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

