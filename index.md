# Syllabus - CMSE/CSE 822

## Spring 2024, Michigan State University

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
Office: 3260 BPS  
Office hours: _by appointment_  
Zoom: [msu.zoom.us/my/scouch](http://msu.zoom.us/my/scouch)  
[scouch@msu.edu](mailto:scouch@msu.edu)  
[www.pa.msu.edu/~couch](http://www.pa.msu.edu/~couch)

**Teaching Assistant/Grader:**  
Vicente Amado   
Office hours: Tuesday, 1-3 pm, 2504 EGR  
[amadovic@msu.edu](mailto:amadovic@msu.edu)

### Class meetings and office hours

The class meets Tuesdays and Thursdays from 10:20 am to 11:40 am Eastern in EGR 2400. 
Class meetings are meant to be highly interactive and you are expected to attend if possible.

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

The two primary textbooks for this course are [High Performance Scientific Computing](assets/EijkhoutIntroToHPC2020.pdf) and [Parallel Programming in Science and Engineering](assets/EijkhoutParallelProgramming.pdf), both by Victor Eijkhout.
Both of these texts are open-source and freely-available from the author.
Supplementary reading and reference material is available on the course webpage under [Resources](resources.md).

### Required technologies and software 

- Slack
- a GitHub account
- a MSU HPCC account

### Use of HPCC

The course assignments and projects will utilize the MSU campus High Performance Computing Center (HPCC). All students must have an account on the HPCC. If you don't already have one, one will be made for you at the start of this course.

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

Over the course of the semester, you will complete 6 group projects. Collaboration is a key element of science and, as such, these projects are intended to develop both your knowledge of parallel computing and your collaborative skills. These projects will consist primarily of developing and testing parallel code. You will be expected to use GitHub to manage your collaborative code development. Each group will submit one single project report and code repository. The git history of these projects should reflect contributions from each group member. Each of the six projects is worth 10% of your final grade. 

#### Group Participation

You will be graded on your participation in the group. To facilitate this, you will complete an assessment of each of your group members contributions to each of the group projects. These assessments will be confidential and used solely by the instructor to ensure appropriate and equitable participation in group work is maintained throughout the course. Your group participation grade will count for 10% of your final grade.

#### Project Peer Review

For each of the six group projects, you will complete a peer review of another group's project. Your reviews will be based on a rubric provided by the instructor. These reviews are meant to provide both you and your peers with substantive, constructive feedback on your work. As such, you will be expected to provide quality, constructive feedback. The instructors will review all peer review reports to ensure appropriateness and the collated peer review feedback will be passed back to the respective groups anonymously. You will be graded on the quality and timeliness of your peer reviews. This will account for 10% of your final grade.

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

Category      | %
--------------|----
Group Projects      | 60%
Group Participation    | 10%
Project Peer Reviews | 10%
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

