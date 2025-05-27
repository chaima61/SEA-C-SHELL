# SEA-C-SHELL – A Custom Unix Shell in C

This repository contains the source code for a custom command-line shell developed in C language. The project was designed to replicate core functionalities of traditional Unix shells. 

### Overview

The shell parses and executes user commands, supports input/output redirection and piping, and includes 100 built-in commands such as `cd`, `exit`, and `help`. It also handles signals (e.g., `SIGINT` from Ctrl+C) and supports basic job control features, including background and foreground process management.

### Commands supported

* cd
* ls
* exit
* pipe handling
* all other general commands available in UNIX 



### Technical Details

* **Language:** C
* **Platform:** Unix/Linux
* **Compilation:** `gcc` and `make`

### How to Run (replace myprog with the file name)

```bash
git clone https://github.com/your-username/your-repo.git
cd your-repo
gcc -o seashell seashell.c -lreadline
./seashell
```
