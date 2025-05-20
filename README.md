# SEA-C-SHELL – A Custom Unix Shell in C

This repository contains the source code for a custom command-line shell developed in C language. The project was designed to replicate core functionalities of traditional Unix shells. 

### Overview

The shell parses and executes user commands, supports input/output redirection and piping, and includes several built-in commands such as `cd`, `exit`, and `help`. It also handles signals (e.g., `SIGINT` from Ctrl+C) and supports basic job control features, including background and foreground process management.

### Commands supported

* cd
* ls
* exit
* all other general commands available in UNIX 
* pipe handling


### Technical Details

* **Language:** C
* **Platform:** Unix/Linux
* **Compilation:** `gcc` and `make`

### How to Run

```bash
git clone https://github.com/your-username/your-repo.git
cd your-repo
make
./myshell
```
