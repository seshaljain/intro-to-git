# intro-to-git
An introduction to Git, the Version Control Management System

## How to use this repo

#### 1. Make sure you have completed the [Hello World Guide](https://guides.github.com/activities/hello-world/).

The Hello World! guide does not require a local Git client. In fact, even making changes to this repo does not require a Git client. However, a local client can be useful, because it allows making changes within the comfort of your IDE.

#### 2. Fork this repository

Click on the Fork button on the top-right of this page

#### 3. Launch Git Bash
You can seach for ` Git Bash` in your search bar to find it. Alternatively, you can open your command prompt(cmd) or powershell and enter `git` command to open it.

Navigate to your Desktop

$ `cd Desktop` ⏎ 

#### 4. Clone your fork

Make sure you are in `~/Desktop` if on linux or `C:\\users\\{user account name}\\Desktop\\` on windows

$ `git clone [URL]` ⏎

You can get the URL from the Clone or download button

#### 5. Navigate to the Git clone

$ `cd intro-to-git` ⏎

#### 6. Create a FizzBuzz program
According to this problem statement (via [HackerRank](https://www.hackerrank.com/challenges/fizzbuzz/problem)):

```
Write a short program that prints each number from 1 to 100 on a new line. 

For each multiple of 3, print "Fizz" instead of the number. 

For each multiple of 5, print "Buzz" instead of the number. 

For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead of the number.
```

Save the file to the `FizzBuzz` folder

#### 7. Update your remote repo to reflect these changes

You can use the [Git cheatsheet](https://education.github.com/git-cheat-sheet-education.pdf) for reference

1. Check the status of your repo

    $ `git status` ⏎

    If everything is fine, it should show 

    ```bash
    Untracked files:
    (use "git add <file>..." to include in what will be committed)

    FizzBuzz/yourname.c
    ```

2. Stage this file

    $ `git add FizzBuzz/yourname.c` ⏎

3. Commit this file

    $ `git commit -m "Add fizzbuzz"` ⏎

4. Push this commit

    $ `git push` ⏎


#### 8. Head over to your fork on Github to view the changes!

#### 9. Create a pull request

Follow instructions from the [Hello World Guide](https://guides.github.com/activities/hello-world/#pr).  
Make sure it is from your head repository: `your-username:intro-to-git` to base repository: `seshaljain:intro-to-git`!

You have successfully contributed to a repo on Github!

## Further reading

- Go through the [Markdown Guide](https://guides.github.com/features/mastering-markdown/)  
    Markdown is a simple syntax for writing up documents, like this README
- Explore around this repository! Look up Issues, Insights etc
