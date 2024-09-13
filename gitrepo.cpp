#include "gitrepo.h"
#include <iostream>

GitRepo::GitRepo() { //constructor
	cur_branch = "main";
	cur_head = null;
	branch_heads["main"] = null; // we say that its null for initial initialization
}

void GitRepo::checkout(std::string branch_name) {
	cur_branch = branch_name;
	cur_head = branch_heads[branch_name];
}

void GitRepo::branch(std::string branch_name) {
	branch_heads[branch_name] = cur_head;
}

void GitRepo::commit(std::string message) {
	Commit* new_commit = new Commit(message, cur_head); //make a new commit
	cur_head = new_commit;
}

void GitRepo::log() {
	Commit* current_commit = cur_head; // so we wont lose the initial one
	while (current_commit != null) {
		std::cout << current_commit -> getMessage();
		current_commit = current_commit -> getParent(); // going up
	}
}
