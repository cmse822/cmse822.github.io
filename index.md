# Syllabus - CMSE 822

## Fall 2020, Michigan State University

This graduate-level course covers the practical and theoretical aspects of parallel and high-performance computing in science and engineering.

### Course Goals

At the conclusion of this course, you should be able to

- Benchmark and profile the performance of serial and parallel applications
- Develop and optimize applications using:
  - shared-memory threading parallelism
  - distributed-memory message passing
  - hybrid parallelism 
  - and GPU hardware
- Make effective use of high-performance parallel computing architectures

### Instructor information

Prof. Sean M. Couch, Ph.D. (he/him)  
Assistant Professor  
Office hours: by appointment  
Zoom: [msu.zoom.us/my/scouch](http://msu.zoom.us/my/scouch)  
[scouch@msu.edu](mailto:scouch@msu.edu)  
[www.pa.msu.edu/~couch](http://www.pa.msu.edu/~couch)

**Teaching Assistant/Grader:**  
Jared Carlson  
Office hours:  MW, 4-5 pm  
Zoom: <https://msu.zoom.us/j/91001529758>  
[cmse822ta@gmail.com](mailto:cmse822ta@gmail.com)

### Class meetings and office hours

This is a "hybrid" course, meaning mostly online interaction. In-person interaction amongst small groups with appropriate social distancing will occur on an as-needed basis.
The class meets virtually Tuesdays and Thursdays from 10:20 am to 11:40 am Eastern via Zoom, at [this link](https://msu.zoom.us/j/99100851306?pwd=d2dxWk9kbzJqY1R6S3pYUFhUR1JpUT09). You will be required to log in to Zoom _using your MSU NetID_. Additionally, there is a password to get in which will be sent to you via email. Class meetings are meant to be highly interactive and you are expected to attend if possible.
Zoom sessions will also be recorded and made available for review.

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

- Zoom 
- Slack
- Internet connection sufficient for Zoom video conferencing (about 25 mbps). 
- a GitHub account
- a MSU HPCC account

### Use of HPCC

Many of the course assignments will utilize the MSU campus High Performance Computing Center (HPCC). All students must obtain an account on the HPCC. The best way to get an HPCC is through your research mentors. If this is not feasible, talk to the course instructor.

### Assignments

The coursework consists of a combination of pre-class assignments and homework. The pre-class assignments will serve as the basis for in-class discussion and so it is important that you complete them.

The assignments will often consist of writing and running code. As such, all assignments will be handed out and turned in via Git repositories on the course's [GitHub Classroom](https://github.com/cmse822f20). The Git history of your assignments should demonstrate the originality of your work.
You will also be graded on the _quality_ of your code.
Please read and refer to the course [coding standards](coding.md) for clear guidelines on writing readable, maintainable code.

No rule of scholarly activity is more important than giving proper credit to the contributions of others. Although you are free to consult with classmates while working on assignments, you must explicitly acknowledge them by name and indicate their contributions in the final write-up.

Many of the assignments will require writing code and routines that may be easily found in publicly-available numerical libraries.
Unless explicitly stated, you should assume that all code required in the assignments must be original.
I.e., do not simply use off-the-shelf code.
The point of the assignments is to give _you_ practice in writing scientific software.

### In-class work, attendance, and extra credit

Class periods will frequently be used for formal discussion of the course material and for in-class homeworks. It is, therefore, very important that you show up, if you can. If you are unable to participate in virtual class meetings, they will be recorded for you to review later. There will often be in-class quizzes to check your understanding of the assigned material. These quizzes will count for extra credit toward your final grade. In order to receive the full amount of extra credit, you will only need to respond correctly to 80% of the questions. There will be no make-up extra credit of any kind.

### Project

In the latter part of the course, you will complete a [longer project](projects.md) in which you will develop and test a highly-parallel code.
You will choose a project from the list that will be available on the course [projects page](projects.md).
At the culmination of the project, you will prepare a recorded talk about your work.
You will also write, in a professional style, detailed code documentation describing your work.
Your project will be peer-reviewed by your classmates.

### Final exam

The final project will act as the final exam for this course.

### CMSE Subject Exam in Parallel Computing

This course is one of the subject exam courses for the PhD in CMSE.
For those of you requiring it, your subject exam score will be your final course grade.

### Grading policy

The weights for the course grade are as follows.

Category      |                           | %
--------------|---------------------------|----
Pre-class assignments                   | | 10%
Homework assignments                    | | 50%
In-class quizzes (extra credit)         | | (+5%)
Project, distributed as follows:        | | 40%
 | code                                   | 15%
 | documentation                          | 15%
 | talk video                             | 5%
 | peer reviews                           | 5%

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

### MSU Community Compact regarding COVID-19: 

The novel coronavirus, which causes the disease COVID-19, has been declared a worldwide pandemic. The COVID-19 virus is extremely contagious and is believed to spread mainly from person-to-person contact. The COVID-19 pandemic represents an unprecedented public health crisis that has impacted every facet of life, including the classroom environment. As a result, significant changes in how we conduct in-person classes must be made. This section of the syllabus discusses the policies and procedures we will use in class.

This class abides by all principles, guidelines, and requirements detailed in the [MSU Community Compact](https://msu.edu/together-we-will/msu-community-compact/?utm_source=reopening-email&utm_medium=email&utm_campaign=faculty-staff). Specifically, all participants in the class will adhere to the following:

**Face coverings.** Face coverings must be worn by everyone (including all faculty, staff, students, vendors, and visitors) indoors and outdoors while on property owned or governed by MSU and while participating in MSU-related or MSU-sponsored activities. Thus, unless you are unable to tolerate a face covering for medical reasons you must wear a face covering inside and outside of class. This face covering must cover your mouth and nose. 

**Physical distancing.** We will be practicing physical distancing in the classroom. Thus, all students should maintain at least six feet distance between themselves and others (excluding those with whom they live). This applies to all aspects of the classroom setting, including seating arrangements, informal conversations, and dialogue between faculty and students.
Personal Hygiene. All students must maintain proper hygiene and health practices, including:
- Washing hands frequently with soap and water or, if soap is unavailable, using hand sanitizer with at least 60% alcohol
- Routinely cleaning and sanitizing living spaces and/or workspace
- Using the bend of the elbow or shoulder to shield a cough or sneeze
- Refraining from shaking hands

**Adherence to Signage and Instructions.** Students will (a) look for instructional signs posted by MSU or public health authorities, (b) observe instructions from MSU or public health authorities that are emailed to my “msu.edu” account, and (c) follow those instructions.

**Self-Monitoring.** Students will self-monitor for flu-like symptoms (for example, cough, shortness of breath, difficulty breathing, fever, sore throat or loss of taste or smell). If a student experiences any flu-like symptoms, they will stay home and contact a health care provider to determine what steps should be taken.

**Exposure to COVID-19.** If a student is exposed to someone who is ill or has tested positive for the COVID-19 virus, they will stay home, contact a health care provider and follow all public health recommendations.

**Compliance and reporting.** Those who come to MSU facilities must commit to the personal responsibility necessary for us to remain as safe as possible, including following the specific guidelines outlined in this syllabus and provided by MSU more broadly (see below). There may be times when action will be necessary to reinforce expectations. **If you do not wear appropriate face coverings (see MSU’s guidelines), do not wear your face covering appropriately (i.e., over your mouth and nose), or do not adhere to physical distancing guidelines (i.e., six feet apart), you will be asked to correct the situation or leave the facility.** In addition, MSU will utilize the processes already in place to respond to any issues of noncompliance with standards established for the health and safety of our community. For classroom disruptions or issues, the responses and processes that have been used previously remain the first line of action. If necessary, the student conduct system will be the avenue used to adjudicate student disciplinary situations. 

**Additional information.** See <https://msu.edu/together-we-will/keeping-spartans-safe/> for details about these new policies and procedures and see <https://ehs.msu.edu/_assets/docs/fact-sheets/cloth-face-covering-fact-sheet.pdf> for more details about the cloth face coverings guidelines.

**Instructor Illness.**
In the event of instructor illness, another CMSE instructor will fill in as quickly as possible to minimize the possible disruption to the course.

**Student Illness.**
In the event you become ill and may need to take an extended leave of absence, please see 
<https://deanofstudents.msu.edu/medical-leave> and <https://reg.msu.edu/AcademicPrograms/Print.aspx?Section=443>
