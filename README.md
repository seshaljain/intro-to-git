# intro-to-git
An introduction to Git, the Version Control Management System

## A few things before we start

This is the `gh-pages` branch.  
This branch name is a special name reserved for Github Pages powered websites.

Github Pages is a service provided by Github to host static websites on its power CDN. [Read more about Github Pages](https://pages.github.com).

It is used by projects and users alike, because it removes the complexities required in hosting a website on another web host.
We can use the existing codebase to create secure, lightweight websites which are served at https://github.com/\<username\>/\<project-name\>/

I created this branch using `git checkout --orphan gh-pages`. The `--orphan` flag allows us to create a branch without the commit history of the HEAD branch (master in this case).

This website is powered by Jekyll, a static site renderer made with Ruby. Github Pages supports Jekyll natively, thus we do not require an external service for DevOps for this particular site.
[Read more about Jekyll](https://jekyllrb.com).

## How to use this repo

Since this repo is powered by Jekyll, we can use its powerful includes and data system to generate the website, without writing HTML.

We use the [Cayman theme](https://github.com/pages-themes/cayman) for this website.
