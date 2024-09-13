#ifndef GITREPO_H
#define GITREPO_H

#include <string>
#include <map>

class Commit {
    private:
    std::string message;
    Commit* parent;

    public:
    Commit(std::string message, Commit* parent);
    std::string getMessage();
    Commit* getParent();
};

class GitRepo {
    private:
    std::string cur_branch;
    Commit *cur_head;
    std::map<std::string, Commit*> branch_heads;

    public:
    GitRepo();
    void checkout(std::string branch_name);
    void branch(std::string branch_name);
    void commit(std::string message);
    void log();
};

#endif
