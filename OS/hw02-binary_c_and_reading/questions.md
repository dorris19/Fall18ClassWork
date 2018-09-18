The following questions are from chapters 4 and 5 in the book. Write your
answers in this file and push it back to git-keeper.

If you have never written any Markdown before you may want to read the Markdown
guide from the class web site:
http://csweb.wooster.edu/nsommer/cs212/markdown.html

**Question 1**: What does it mean when a process is in the ready state?

For a process to be in the ready state, it means that the process is currently able to be run, but the OS has chosen to not run it at the current time.

**Question 2**: Why can't a process move from the ready state to the blocked
state?

The blocked state can only be entered when the process performs an operation that makes it unable to run until another event occurs. Because the process must perform an operation, it must first enter the running state before being blocked, so it is impossible for a process to jump from ready to blocked.

**Question 3**: When a new process is created using fork(), where does
execution start in the child process's code?

The execution in the child process's code begins immediately after the call to fork().


**Question 4**: What is the purpose of the > operator on the command line?

The > operator on the command line allows for redirection of an output into a file.

**Question 5**: What is a man page?

A man page is a manual page. They are the original form of documentation for Unix systems.
