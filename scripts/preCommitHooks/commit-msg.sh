#!/bin/sh
#
# A hook script to check that the commit title starts by the branch name.
#
# Called by "git commit" with one argument, the name of the file
# that has the commit message.  The hook should exit with non-zero
# status after issuing an appropriate message if it wants to stop the
# commit.  The hook is allowed to edit the commit message file.
#

# Get the first line (title) of the commit message
commit_title=$(head -n 1 "$1")

# Get the current branch name
branch_name=$(git rev-parse --abbrev-ref HEAD)

# Check if the branch name is not HEAD (which happens during rebases)
# and don't check the commit title in that case
if [ "$branch_name" != "HEAD" ]; then
  # Check if the commit title starts with the branch name followed by a colon
  if [[ ! $commit_title =~ ^$branch_name: ]]; then
    echo "Error: Commit message title must start with the branch name '$branch_name:'"
    exit 1
  fi
else
  echo "Warning: Skip check of the commit title format."
fi
