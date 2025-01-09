#!/bin/sh

# Get the current branch name
branch_name=$(git symbolic-ref --short HEAD)

# Get the commit message file path
commit_msg_file=$1

# Read the current commit message
commit_msg=$(cat "$commit_msg_file")

# Check if the commit message starts with the branch name followed by a colon
if ! echo "$commit_msg" | grep -q "^$branch_name:"; then
  # If not, prepend the branch name followed by a colon to the commit message
  echo "$branch_name: $commit_msg" > "$commit_msg_file"

  # Print a message to notify the user that the commit title was modified
  echo "commit-msg: Commit title was automatically updated to prefix it with the branch name."

fi
