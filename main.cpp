#include "gitrepo.h"
#include <iostream>
using namespace std;

int main() {
    GitRepo* myrepo = new GitRepo();
    myrepo->commit("First commit");
    myrepo->commit("Second commit");
    myrepo->log();
    cout << endl;
    myrepo->branch("new_branch");
    myrepo->log();
    cout << endl;
    myrepo->commit("Branch commit");
    myrepo->log();
    cout << endl;
    myrepo->checkout("main");
    myrepo->log();
    cout << endl;
    myrepo->checkout("new_branch");
    myrepo->log();
    cout << endl;
    myrepo->commit("Branch commit 2");
    myrepo->log();
    cout << endl;
    myrepo->branch("other_branch");
    myrepo->commit("Other branch commit");
    myrepo->log();
    cout << endl;
    myrepo->checkout("main");
    myrepo->log();
    cout << endl;
    myrepo->checkout("new_branch");
    myrepo->log();
    cout << endl;
}
