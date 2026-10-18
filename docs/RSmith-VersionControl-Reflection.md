1. What caused the merge conflict in this activity?

The merge conflict happened because two developers changed the same line of code in Crypt.cpp. The main branch displayed a security warning, while feature/crypt-message displayed a message announcing that the Crypt Keeper had awakened.

2. Why couldn't Git automatically decide which change to keep?

Git couldn't automatically resolve the conflict because both branches modified the same section of code differently. Git couldn't determine which message was supposed to remain, so it required a developer to resolve the conflict manually.

3. How did you resolve the conflict without losing either developer's work?

I opened Crypt.cpp, removed the Git conflict markers, and kept both messages inside the DisplayMessage() function. After verifying the changes, I staged the file and created a merge commit.

4. What is the difference between a commit and a push?

A commit saves a snapshot of changes in my local Git repository. A push uploads those committed changes to the remote repository on GitHub.

5. What is the purpose of a Pull Request?

A Pull Request allows developers to review changes from one branch before merging them into another. I used a Pull Request to merge my completed menu feature from dev into main.

6. Why should development work happen on dev instead of directly on main?

Working on dev keeps unfinished changes separate from the stable version of the project. Once changes are tested and reviewed, they can be merged into main through a Pull Request.